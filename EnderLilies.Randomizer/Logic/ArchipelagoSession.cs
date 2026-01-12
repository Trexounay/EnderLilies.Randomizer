using Archipelago.MultiClient.Net;
using Archipelago.MultiClient.Net.BounceFeatures.DeathLink;
using Archipelago.MultiClient.Net.Converters;
using Archipelago.MultiClient.Net.Enums;
using Archipelago.MultiClient.Net.Helpers;
using Archipelago.MultiClient.Net.Models;
using Archipelago.MultiClient.Net.Packets;
using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.IO.MemoryMappedFiles;
using System.Linq;
using System.Reflection;
using System.Threading;
using System.Windows.Forms;
using WebSocketSharp;

namespace EnderLilies.Randomizer
{

    public class ArchipelagoSession
    {
        const string __GAME = "Ender Lilies";
        const string __SHARED_CLIENT_MEMORY_FILE = "EnderLilies.Game.SharedMemory";
        const string __SHARED_SERVER_MEMORY_FILE = "EnderLilies.Randomizer.SharedMemory";
        const string __SHARED_DEATHLINK_MEMORY_FILE = "EnderLilies.Deathlink.SharedMemory";
        const string __ITEM_SAVED_COUNT_KEY = "ItemSavedCount";

        ComponentSettings _settings;
        LoginSuccessful loginInfo;
        Archipelago.MultiClient.Net.ArchipelagoSession Session;

        List<long> _items = new List<long>();
        string[] _victory_locations = null;
        Mutex mutex_client;
        Mutex mutex_server;
        Mutex mutex_deathlink;
        Stopwatch sw;
        DeathLinkService deathlinkService;
        uint lastLocalDeath;
        DeathLink lastRemoteDeath;

        public static uint GetTimestamp() => (uint)DateTimeOffset.UtcNow.ToUnixTimeSeconds();
        public  uint GetRemoteDeathTimestamp() => lastRemoteDeath != null ? (uint)lastRemoteDeath.Timestamp.ToUnixTimeStamp() : 0;

        public ArchipelagoSession(ComponentSettings settings)
        {
            _settings = settings;
            _settings.PropertyChangedEnded += _settings_PropertyChanged;
            _settings.APConnectionRequested += APConnectionRequested;

            mutex_client = new Mutex(false, __SHARED_CLIENT_MEMORY_FILE + "_mtx");
            mutex_server = new Mutex(false, __SHARED_SERVER_MEMORY_FILE + "_mtx");
            mutex_deathlink = new Mutex(false, __SHARED_DEATHLINK_MEMORY_FILE + "_mtx");
        }

        public void APConnectionRequested()
        {
            if (_settings.AP_IsConnected)
            {
                Session.Socket.DisconnectAsync();
                return;
            }
            _settings.AP_IsConnecting = true;
            LoginSuccessful loginInfo = Connect();
            _settings.AP_IsConnecting = false;
            _settings.AP_IsConnected = loginInfo != null;
            if (loginInfo != null)
            {
                Items_ItemReceived(Session.Items);
                Session.Items.ItemReceived += Items_ItemReceived;
                if (this._settings.APDeathlink)
                {
                    deathlinkService = Session.CreateDeathLinkService();
                    deathlinkService.OnDeathLinkReceived += DeathlinkService_OnDeathLinkReceived;
                }
                lastLocalDeath = GetTimestamp();
                _sent = 0;
                GetSlotData(loginInfo.SlotData);
                sw = new Stopwatch();
                sw.Start();
            }
        }

        private void DeathlinkService_OnDeathLinkReceived(DeathLink deathLink)
        {
            if (lastRemoteDeath == null || deathLink.Timestamp > lastRemoteDeath.Timestamp)
            {
                lastRemoteDeath = deathLink;
            }
        }

        private void Items_ItemReceived(IReceivedItemsHelper helper)
        {
            _items.Clear();
            foreach (ItemInfo item in helper.AllItemsReceived)
            {
                _items.Add(item.ItemId);
                helper.DequeueItem();
            }
        }

        private void _settings_PropertyChanged(object sender, PropertyChangedEventArgs e)
        {
        
        }

        private LoginSuccessful Connect()
        {
            LoginResult result;
            loginInfo = null;
            try
            {
                var tags = new List<string>();

                if (_settings.APDeathlink)
                    tags.Add("Deathlink");

                Session = ArchipelagoSessionFactory.CreateSession(_settings.APServer);
                result = Session.TryConnectAndLogin(__GAME, _settings.APSlotName, ItemsHandlingFlags.IncludeStartingInventory | ItemsHandlingFlags.RemoteItems, password: _settings.APPassword, tags: tags.ToArray());
            }
            catch (Exception e)
            {
                result = new LoginFailure(e.GetBaseException().Message);
            }

            if (!result.Successful)
            {
                LoginFailure failure = (LoginFailure)result;
                string errorMessage = $"Failed to Connect to {_settings.APServer} as {_settings.APSlotName}:";
                foreach (string error in failure.Errors)
                {
                    errorMessage += $"\n    {error}";
                }
                foreach (ConnectionRefusedError error in failure.ErrorCodes)
                {
                    errorMessage += $"\n    {error}";
                }
                MessageBox.Show(errorMessage);
                return null;
            }
            loginInfo = (LoginSuccessful)result;
            return loginInfo;
        }

        Dictionary<string, long> key_to_address = new Dictionary<string, long>();
        Dictionary<long, string> code_to_key = new Dictionary<long, string>();
        public void GetSlotData(Dictionary<string, object> data, bool sort = false)
        {
            if (data == null)
                return;
            string dir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location) ?? String.Empty;
            string path = Path.Combine(dir, "EnderLiliesSeed.txt");

            if (data.ContainsKey("AP.victory"))
                _victory_locations = (data["AP.victory"] as IEnumerable<object>).Select(o => o.ToString()).ToArray();

            if (data.ContainsKey("AP.key_to_address"))
                key_to_address = Newtonsoft.Json.JsonConvert.DeserializeObject<Dictionary<string, long>>(data["AP.key_to_address"].ToString());

            if (data.ContainsKey("AP.key_to_code"))
            {
                var key_to_code = Newtonsoft.Json.JsonConvert.DeserializeObject<Dictionary<string, long>>(data["AP.key_to_code"].ToString());
                foreach (var key in key_to_code)
                    code_to_key[key.Value] = key.Key;
            }

            if (_settings.SkinOverride > 0)
                data[$"SETTINGS:override_skin={_settings.SkinOverride}"] = null;

            using (StreamWriter writer = new StreamWriter(path))
            {
                var keys = new List<string>(data.Keys);
                if (sort)
                    keys.Sort();
                foreach (var key in keys)
                {
                    if (key.StartsWith("AP."))
                        continue;
                    if (data[key] != null)
                    {
                        var value = data[key].ToString();
                        writer.WriteLine($"{key}:{data[key].ToString()}");
                    }
                    else
                        writer.WriteLine($"{key}");
                }
            }
        }

        public void SendLocations(string[] locations)
        {
            long[] locationsIds = new long[locations.Length];
            bool done = false;
            for (int i = 0; i < locations.Length; i++)
            {
                if (_victory_locations.Contains(locations[i]))
                    done = true;
                else
                {
                    if (key_to_address.ContainsKey(locations[i]))
                        locationsIds[i] = key_to_address[locations[i]];
                    else
                        ;
                }
            }
            Session.Locations.CompleteLocationChecks(locationsIds);
            if (done)
                send_completion();
        }

        public void send_completion()
        {
            var statusUpdatePacket = new StatusUpdatePacket();
            statusUpdatePacket.Status = ArchipelagoClientState.ClientGoal;
            Session.Socket.SendPacket(statusUpdatePacket);
        }

        public void ReadGameChecksList()
        {
            try
            {
                using (var mmf = MemoryMappedFile.OpenExisting(__SHARED_CLIENT_MEMORY_FILE))
                {
                    using (var stream = mmf.CreateViewStream())
                    {
                        using (BinaryReader binReader = new BinaryReader(stream))
                        {
                            uint header = binReader.ReadUInt32();
                            int remainingLength = (int)(stream.Length - 4);
                            byte[] bytes = binReader.ReadBytes(remainingLength);
                            String str = System.Text.Encoding.ASCII.GetString(bytes).Split(new char[] { '\0' }, 2)[0];
                            var checks = str.Split(new char[] { '\n' }, StringSplitOptions.RemoveEmptyEntries);
                            if (checks.Length == 0 || checks[0].IsNullOrEmpty())
                                return;
                            SendLocations(checks);
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.Write(ex.Message);
            }
        }

        public void Clear()
        {
            mmf = MemoryMappedFile.CreateOrOpen(__SHARED_SERVER_MEMORY_FILE, 16384, access: MemoryMappedFileAccess.ReadWrite);
            using (var stream = mmf.CreateViewAccessor())
            {
                stream.Write(0, 0);
                stream.Write(sizeof(uint), 0);
                stream.Flush();
            }
            mmf.Dispose();
            mmf = null;
        }

        MemoryMappedFile mmf = null;
        int _sent = 0;
        public void SendGameItems()
        {
            if (_items.Count == 0)
                return;
            try
            {
                mmf = MemoryMappedFile.CreateOrOpen(__SHARED_SERVER_MEMORY_FILE, 16384, access: MemoryMappedFileAccess.ReadWrite);
                using (var stream = mmf.CreateViewAccessor())
                {
                    int value = Session.DataStorage[Scope.Slot, __ITEM_SAVED_COUNT_KEY];
                    if (_sent == 0)
                    {
                        stream.Write(0, value);
                    }
                    else
                    {
                        uint saved_count = stream.ReadUInt32(0);
                        if (saved_count > value)
                            Session.DataStorage[Scope.Slot, __ITEM_SAVED_COUNT_KEY] = saved_count;
                        if (_items.Count <= _sent)
                            return;
                    }
                    int new_len = _items.Count;
                    string str = "";
                    for (int i = 0; i < new_len; ++i)
                    {
                        if (code_to_key.ContainsKey(_items[i]))
                            str += $"{code_to_key[_items[i]]}\n";
                        else
                            ;
                    }
                    str += '\0';
                    var bytes = System.Text.Encoding.ASCII.GetBytes(str);
                    bytes[bytes.Length - 1] = 0;

                    stream.WriteArray<byte>(sizeof(uint), bytes, 0, bytes.Length);
                    _sent = new_len;
                }
            }
            catch (Exception ex)
            {
                Debug.Write(ex.Message);
            }
        }

        public void UpdateDeathlink()
        {
            try
            {
                using (var mmf = MemoryMappedFile.CreateOrOpen(__SHARED_DEATHLINK_MEMORY_FILE, 256, access: MemoryMappedFileAccess.ReadWrite))
                {
                    using (var stream = mmf.CreateViewAccessor())
                    {
                        uint header = stream.ReadUInt32(0);
                        if (header > lastLocalDeath)
                        {
                            deathlinkService.SendDeathLink(new DeathLink(Session.Players.ActivePlayer.Name));
                            lastLocalDeath = header;
                        }
                        if (lastRemoteDeath != null && GetRemoteDeathTimestamp() > header)
                        {
                            lastLocalDeath = header;
                            lastRemoteDeath = null;
                            stream.Write(0, GetTimestamp());
                        }
                    }
                }
            }
            catch (Exception ex)
            {
                Debug.Write(ex.Message);
            }
        }

        bool ExecuteLocked(Action action, Mutex mutex, int timeout = 0)
        {
            if (mutex.WaitOne(timeout))
            {
                action();
                mutex.ReleaseMutex();
                return true;
            }
            return false;
        }

        void CloseConnection()
        {
            sw.Stop();
            ExecuteLocked(Clear, mutex_server, 1000);
            _settings.AP_IsConnected = false;
        }

        public void Update(bool gameIsRuning)
        {
            if (_settings.AP_IsConnected)
            {
                if (Session == null || !Session.Socket.Connected)
                {
                    CloseConnection();
                    return;
                }
                else if (gameIsRuning)
                {
                    if (sw.ElapsedMilliseconds > 300)
                    {
                        ExecuteLocked(ReadGameChecksList, mutex_client);
                        ExecuteLocked(SendGameItems, mutex_server);
                        if (_settings.APDeathlink)
                            ExecuteLocked(UpdateDeathlink, mutex_server);
                        sw.Restart();
                    }
                }
            }
        }
    }
}
