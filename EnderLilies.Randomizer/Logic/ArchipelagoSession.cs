using Archipelago.MultiClient.Net;
using Archipelago.MultiClient.Net.Enums;
using Archipelago.MultiClient.Net.Helpers;
using Archipelago.MultiClient.Net.Models;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.IO.MemoryMappedFiles;
using System.Net;
using System.Reflection;
using System.Threading;
using System.Windows.Forms;

namespace EnderLilies.Randomizer
{

    public class ArchipelagoSession
    {
        const string __GAME = "Ender Lilies";
        const string __SHARED_CLIENT_MEMORY_FILE = "EnderLilies.Game.SharedMemory";
        const string __SHARED_SERVER_MEMORY_FILE = "EnderLilies.Randomizer.SharedMemory";

        ComponentSettings _settings;
        LoginSuccessful loginInfo;
        Archipelago.MultiClient.Net.ArchipelagoSession Session;
        List<string> _items = new List<string>();
        Mutex mutex_client;
        Mutex mutex_server;
        Stopwatch sw;

        public ArchipelagoSession(ComponentSettings settings)
        {
            _settings = settings;
            _settings.PropertyChangedEnded += _settings_PropertyChanged;
            _settings.APConnectionRequested += _settings_APConnectionRequested;

            mutex_client = new Mutex(false, __SHARED_CLIENT_MEMORY_FILE + "_mtx");
            mutex_server = new Mutex(false, __SHARED_SERVER_MEMORY_FILE + "_mtx");
        }

        private void _settings_APConnectionRequested()
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
                _sent = 0;
                WriteFile(loginInfo.SlotData);
                Items_ItemReceived(Session.Items);
                sw = new Stopwatch();
                sw.Start();
            }
        }

        private void Items_ItemReceived(ReceivedItemsHelper helper)
        {
            _items.Clear();
            foreach (NetworkItem item in helper.AllItemsReceived)
            {
                _items.Add(helper.GetItemName(item.Item));
                helper.DequeueItem();
            }
        }

        private void _settings_PropertyChanged(object sender, PropertyChangedEventArgs e) { }

        private LoginSuccessful Connect()
        {
            LoginResult result;
            loginInfo = null;
            try
            {
                Session = ArchipelagoSessionFactory.CreateSession(_settings.APServer);
                Session.Items.ItemReceived += Items_ItemReceived;
                result = Session.TryConnectAndLogin(__GAME, _settings.APSlotName, ItemsHandlingFlags.IncludeOwnItems, password: _settings.APPassword);
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

        public void WriteFile(Dictionary<string, object> data, bool sort = false)
        {
            if (data == null)
                return;
            string dir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location) ?? String.Empty;
            string path = Path.Combine(dir, "EnderLiliesSeed.txt");
            using (StreamWriter writer = new StreamWriter(path))
            {
                var keys = new List<string>(data.Keys);
                if (sort)
                    keys.Sort();
                foreach (var key in keys)
                {
                    writer.WriteLine($"{key}:{data[key].ToString()}");
                }
            }
        }

        public void SendLocations(string[] locations)
        {
            long[] locationsIds = new long[locations.Length];
            for (int i = 0; i < locations.Length; i++)
                locationsIds[i] = Session.Locations.GetLocationIdFromName(__GAME, locations[i]);
            Session.Locations.CompleteLocationChecks(locationsIds);
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
                            byte[] bytes = binReader.ReadBytes((int)stream.Length);
                            String str = System.Text.Encoding.ASCII.GetString(bytes).Trim('\0');
                            var checks = str.Split(new char[] { '\n' }, StringSplitOptions.RemoveEmptyEntries);
                            SendLocations(checks);
                        }
                    }
                }
            }
            catch { }
        }


        MemoryMappedFile mmf = null;
        int _sent = 0;
        public void SendGameItems()
        {
            if (_items.Count <= _sent)
                return;
            string str = "";
            var to_send = new List<string>(_items);
            foreach (var item in to_send)
                str += $"{item}\n";
            if (str.Length <= 0)
                return;
            try
            {
                var bytes = System.Text.Encoding.ASCII.GetBytes(str);
                mmf = MemoryMappedFile.CreateOrOpen(__SHARED_SERVER_MEMORY_FILE, 8192);
                {
                    using (var stream = mmf.CreateViewStream())
                    {
                        using (BinaryWriter binWriter = new BinaryWriter(stream))
                        {
                            binWriter.Write(bytes);
                        }
                    }
                }
                _sent = to_send.Count;
            }
            catch { }
        }

        bool ExecuteLocked(Action action, Mutex mutex)
        {
            if (mutex.WaitOne(0))
            {
                action();
                mutex.ReleaseMutex();
                return true;
            }
            return false;
        }

        public void Update(bool gameIsRuning)
        {
            if (_settings.AP_IsConnected)
            {
                if (Session == null || !Session.Socket.Connected)
                {
                    _settings.AP_IsConnected = false;
                    return;
                }
                if (gameIsRuning)
                {
                    if (sw.ElapsedMilliseconds > 300)
                    {
                        ExecuteLocked(ReadGameChecksList, mutex_client);
                        ExecuteLocked(SendGameItems, mutex_server);
                        sw.Restart();
                    }
                }
            }
        }
    }
}
