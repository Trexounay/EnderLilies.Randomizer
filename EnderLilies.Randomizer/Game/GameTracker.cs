using LiveSplit.ComponentUtil;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using WebSocketSharp;
using WebSocketSharp.Server;
using System.Web.Script.Serialization;
using System.Text;
using System.Windows.Forms;

namespace EnderLilies.Randomizer
{
    public class UATService : WebSocketBehavior
    {
        #region Commands
        public class Cmd
        {
            public Cmd(string cmd)
            {
                this.cmd = cmd;
            }
            public string cmd;
        }
        class Var : Cmd
        {
            public Var(string name, object value) : base("Var")
            {
                this.name = name;
                this.value = value;
            }
            public string name;
            public object value;
        }
        class Info : Cmd
        {
            public Info(string name, string version, int protocol) : base("Info")
            {
                this.name = name;
                this.version = version;
                this.protocol = protocol;
            }
            public string name;
            public string version;
            public int protocol;
        }
        #endregion
        GameTracker _tracker;
        public GameTracker tracker
        {
            get
            {
                return _tracker;
            }
            set
            {
                _tracker = value;
                _tracker.OnNewItems += OnNewItems;
            }
        }

        ~UATService()
        {
            if (_tracker != null)
                _tracker.OnNewItems -= OnNewItems;
        }

        protected override void OnMessage(MessageEventArgs e)
        {
            base.OnMessage(e);
            var serializer = new JavaScriptSerializer();
            var commands = serializer.Deserialize<List<Dictionary<string, object>>>(e.Data);
            foreach (var command in commands)
            {
                if (command["cmd"].ToString() == "Sync")
                {
                    Dictionary<string, int> items = tracker.GetAllItems();
                    var itemscommands = (from pair in items select new Var(pair.Key, pair.Value)).ToArray();
                    string response = serializer.Serialize(itemscommands);
                    Send(response);
                }
            }
        }
        protected override void OnOpen()
        {
            if (ConnectionState == WebSocketState.Open)
            {
                var serializer = new JavaScriptSerializer();
                string t = serializer.Serialize(new object[] { new Info("EnderLilies", "1.1.5", 0) });
                Send(t);
            }
            base.OnOpen();
        }

        public void OnNewItems(Dictionary<string, int> items)
        {
            if (ConnectionState == WebSocketState.Open)
            {
                var serializer = new JavaScriptSerializer();
                var itemscommands = (from pair in items select new Var(pair.Key, pair.Value)).ToArray();
                string response = serializer.Serialize(itemscommands);

                Sessions.Broadcast(response);
            }
        }
    }

    public interface IItemTracker
    {
        event Action<Dictionary<string, int>> OnItemsModified;
        void Update(Process _process);
        void Reset();
        Dictionary<string, int> GetItems();
    }

    class Inventory : IItemTracker
    {
        public List<string> names;
        public Dictionary<int, int> items = new Dictionary<int, int>();
        public event Action<Dictionary<string, int>> OnItemsModified;

        List<long> _data;
        DeepPointer _address;
        DeepPointer _dataAddress;
        int _count;

        public Inventory(DeepPointer address, DeepPointer dataAddress, List<string> names)
        {
            _address = address;
            _dataAddress = dataAddress;
            this.names = names;
        }

        void InventoryModified(List<int> newItems)
        {
            var newGroups = newItems.GroupBy(x => x);
            Dictionary<int, int> collection = new Dictionary<int, int>();
            Dictionary<string, int> modified = new Dictionary<string, int>();

            foreach (IGrouping<int, int> group in newGroups)
                collection[group.Key] = group.Count();
            for (int i = 0; i < names.Count; ++i)
            {
                if (!collection.ContainsKey(i))
                    collection[i] = 0;
                if (collection.ContainsKey(i) != items.ContainsKey(i) || collection[i] != items[i])
                    modified[names[i]] = collection[i];
            }
            items = collection;
            _count = newItems.Count;
            if (modified.Count > 0)
                OnItemsModified?.Invoke(modified);
        }

        bool GetData(Process _process)
        {
            IntPtr ptr = _dataAddress.Deref<IntPtr>(_process);
            if (ptr == IntPtr.Zero)
            {
                _data = null;
                return false;
            }
            if (_data != null)
                return true;
            int count = _process.ReadValue<int>(ptr + 0x38);
            if (count != names.Count)
            {
                _data = null;
                return false;
            }
            IntPtr dataPtr = _process.ReadValue<IntPtr>(ptr + 0x30);
            _data = new List<long>();
            for (int j = 0; j < count; ++j)
                _data.Add(_process.ReadValue<long>(dataPtr + j * 0x18));
            return true;
        }

        public void Update(Process _process)
        {
            if (!GetData(_process))
                return;
            IntPtr ptr = _address.Deref<IntPtr>(_process, IntPtr.Zero);
            if (ptr == IntPtr.Zero)
                return;
            int count = _process.ReadValue<int>(ptr + 0x68, -1);
            if (count >= 0 && count != _count)
            {
                IntPtr itemsPtr = _process.ReadValue<IntPtr>(ptr + 0x60);
                List<int> newItems = new List<int>();
                for (int i = 0; i < count; ++i)
                {
                    long id = _process.ReadValue<long>(itemsPtr + i * 0x8);
                    int idx = _data.IndexOf(id);
                    if (idx >= 0)
                        newItems.Add(idx);
                }
                InventoryModified(newItems);
            }
        }

        public Dictionary<string, int> GetItems()
        {
            Dictionary<string, int> content = new Dictionary<string, int>();
            for (int i = 0; i < names.Count; ++i)
            {
                content[names[i]] = 0;
                if (items.ContainsKey(i))
                    content[names[i]] = items[i];
            }
            return content;
        }

        public void Reset()
        {
            InventoryModified(new List<int>());
        }
    }

    class RelicInventory : IItemTracker
    {
        public List<string> names;
        public Dictionary<int, int> items = new Dictionary<int, int>();
        public Dictionary<int, int> cost = new Dictionary<int, int>();
        public event Action<Dictionary<string, int>> OnItemsModified;

        List<long> _data;
        List<int> _slots;
        DeepPointer _address;
        DeepPointer _dataAddress;
        int _count;

        public RelicInventory(DeepPointer address, DeepPointer dataAddress, List<string> names)
        {
            _address = address;
            _dataAddress = dataAddress;
            this.names = names;
        }

        void InventoryModified(List<int> newItems)
        {
            Dictionary<int, int> collection = new Dictionary<int, int>();
            Dictionary<string, int> modified = new Dictionary<string, int>();
            foreach (int item in newItems)
                collection[item] = _slots[item] + 1;
            for (int i = 0; i < names.Count; ++i)
            {
                if (!collection.ContainsKey(i))
                    collection[i] = 0;
                if (collection.ContainsKey(i) != items.ContainsKey(i) || collection[i] != items[i])
                    modified[names[i]] = collection[i];
            }
            items = collection;
            _count = newItems.Count;
            if (modified.Count > 0)
                OnItemsModified?.Invoke(modified);
        }

        bool GetData(Process _process)
        {
            IntPtr ptr = _dataAddress.Deref<IntPtr>(_process);
            if (ptr == IntPtr.Zero)
            {
                _data = null;
                return false;
            }
            int count = _process.ReadValue<int>(ptr + 0x38);
            if (count != names.Count)
            {
                _data = null;
                return false;
            }
            IntPtr dataPtr = _process.ReadValue<IntPtr>(ptr + 0x30);
            _data = new List<long>();
            List<int> new_slots = new List<int>();
            List<int> modified = new List<int>();
            for (int j = 0; j < count; ++j)
            {
                IntPtr row = dataPtr + j * 0x18;
                new_slots.Add(new DeepPointer(row + 0x8, 0xA0).Deref<int>(_process));
                if (items.ContainsKey(j) && items[j] > 0 && _slots.Count > j && _slots[j] != new_slots[j])
                    modified.Add(j);
                _data.Add(_process.ReadValue<long>(row));
            }
            _slots = new_slots;
            if (modified.Count > 0)
                InventoryModified(modified);
            return true;
        }

        public void Update(Process _process)
        {
            if (!GetData(_process))
                return;
            IntPtr ptr = _address.Deref<IntPtr>(_process, IntPtr.Zero);
            if (ptr == IntPtr.Zero)
                return;
            int count = _process.ReadValue<int>(ptr + 0x68);
            if (count >= 0 && count != _count)
            {
                IntPtr itemsPtr = _process.ReadValue<IntPtr>(ptr + 0x60);
                List<int> newItems = new List<int>();
                for (int i = 0; i < count; ++i)
                {
                    long id = _process.ReadValue<long>(itemsPtr + i * 0x8);
                    int idx = _data.IndexOf(id);
                    if (idx >= 0)
                        newItems.Add(idx);
                }
                InventoryModified(newItems);
            }
        }

        public Dictionary<string, int> GetItems()
        {
            Dictionary<string, int> content = new Dictionary<string, int>();
            for (int i = 0; i < names.Count; ++i)
            {
                content[names[i]] = 0;
                if (items.ContainsKey(i))
                    content[names[i]] = items[i];
            }
            return content;
        }

        public void Reset()
        {
            InventoryModified(new List<int>());
        }
    }

    public class TabletTracker : IItemTracker
    {
        public event Action<Dictionary<string, int>> OnItemsModified;
        List<string> _items;
        Dictionary<string, Func<string, bool>> _areas = new Dictionary<string, Func<string, bool>>()
        {
            {"Generic.i_FinalPassivePart_Castle",   (s) => s.StartsWith("map_castle") },
            {"Generic.i_FinalPassivePart_Cave",     (s) => s.StartsWith("map_cave") },
            {"Generic.i_FinalPassivePart_Forest",   (s) => s.StartsWith("map_forest") },
            {"Generic.i_FinalPassivePart_Fort",     (s) => s.StartsWith("map_outside") || s.StartsWith("map_fort") },
            {"Generic.i_FinalPassivePart_Oubliette",(s) => s.StartsWith("map_oubliette") },
            {"Generic.i_FinalPassivePart_Village",  (s) => s.StartsWith("map_village") },
            {"Generic.i_FinalPassivePart_Swamp",    (s) => s.StartsWith("map_swamp") || s.StartsWith("map_abyss") },
        };
        DeepPointer _relicCount;
        DeepPointer _mapName;

        public TabletTracker(DeepPointer relicCount, DeepPointer mapName)
        {
            _relicCount = relicCount;
            _mapName = mapName;
            _items = new List<string>();
        }

        public Dictionary<string, int> GetItems()
        {
            Dictionary<string, int> modified = new Dictionary<string, int>();
            foreach (var relic in _items)
                modified[relic] = 1;
            return modified;
        }

        public void Reset()
        {
            Dictionary<string, int> modified = new Dictionary<string, int>();
            foreach (var relic in _items)
                modified[relic] = 0;
            _items.Clear();
            if (modified.Count > 0)
                OnItemsModified?.Invoke(modified);
        }

        public void Update(Process _process)
        {
            int count = 0;
            if (_relicCount.Deref<int>(_process, out count) && count > _items.Count)
            {
                String level = _mapName.DerefString(_process, 100);
                if (level != null && level.Length > 0)
                {
                    foreach (var pair in _areas)
                        if (pair.Value(level))
                        {
                            _items.Add(pair.Key);
                            OnItemsModified(new Dictionary<string, int>() { { pair.Key, 1 } });
                            break;
                        }
                }
            }
        }
    }

    public class ItemTracker : IItemTracker
    {
        Dictionary<string, DeepPointer> _pointers;
        public Dictionary<string, int> items;
        public event Action<Dictionary<string, int>> OnItemsModified;

        public ItemTracker(Dictionary<string, DeepPointer> pointers)
        {
            _pointers = pointers;
            items = new Dictionary<string, int>();
        }

        public void Update(Process _process)
        {
            Dictionary<string, int> modified = new Dictionary<string, int>();
            foreach (var pair in _pointers)
            {
                int count = 0;
                if (pair.Value.Deref<int>(_process, out count) && count >= 0)
                {
                    if (!items.ContainsKey(pair.Key) || items[pair.Key] != count)
                    {
                        modified[pair.Key] = count;
                        items[pair.Key] = count;
                    }
                }
            }
            if (modified.Count > 0)
                OnItemsModified?.Invoke(modified);
        }

        public void Reset()
        {
            bool modified = false;
            foreach (var pair in _pointers)
            {
                if (!items.ContainsKey(pair.Key) || items[pair.Key] != 0)
                    modified = true;
                items[pair.Key] = 0;
            }
            if (modified)
                OnItemsModified?.Invoke(items);
        }

        public Dictionary<string, int> GetItems()
        {
            return items;
        }
    }

    public class GameTracker
    {
        Process _process;
        List<string> _aptitudes = new List<string>
        {
            "Aptitude.Heal",
            "Aptitude.Jump",
            "Aptitude.double_jump",
            "Aptitude.stumble",
            "Aptitude.Dodge",
            "Aptitude.dash",
            "Aptitude.dash_attack",
            "Aptitude.pound_attack",
            "Aptitude.swim",
            "Aptitude.dive",
            "Aptitude.wallgrab",
            "Aptitude.Hook",
            "Aptitude.door_unlock",
            "Aptitude.summon_set_switch",
            "Aptitude.special_attack",
        };
        List<string> _passives = new List<string>
        {
            "Passive.i_passive_maxhpup_LV1",
            "Passive.i_passive_maxhpup_LV2",
            "Passive.i_passive_maxhpup_LV3",
            "Passive.i_passive_dmgcut_LV1",
            "Passive.i_passive_dmgcut_LV2",
            "Passive.i_passive_dmgcut_LV3",
            "Passive.i_passive_dmgup",
            "Passive.i_passive_dmgup_grounded",
            "Passive.i_passive_dmgup_grounded_LV2",
            "Passive.i_passive_dmgup_airborne",
            "Passive.i_passive_dmgup_airborne_LV2",
            "Passive.i_passive_dmgup_swimming",
            "Passive.i_passive_dmgup_maxhp",
            "Passive.i_passive_stunstamina_damage_up",
            "Passive.i_passive_regenHP_kill",
            "Passive.i_passive_regenHP_attack",
            "Passive.i_passive_spirit_maxcast_count_up_LV1",
            "Passive.i_passive_spirit_maxcast_count_up_LV2",
            "Passive.i_passive_spirit_maxcast_count_up_LV3",
            "Passive.i_passive_recast_time_cut_LV1",
            "Passive.i_passive_recast_time_cut_LV2",
            "Passive.i_passive_recast_time_cut_LV3",
            "Passive.i_passive_heal_count_up_1",
            "Passive.i_passive_heal_count_up_3",
            "Passive.i_passive_heal_count_up_2",
            "Passive.i_passive_heal_power_up",
            "Passive.i_passive_shortheal",
            "Passive.i_passive_move_speed_up",
            "Passive.i_passive_jump_height_up",
            "Passive.i_passive_swim_fast",
            "Passive.i_passive_expup_1",
            "Passive.i_passive_expup_2",
            "Passive.i_passive_ignore_damage_area",
            "Passive.i_passive_stamina_up",
            "Passive.i_passive_mp_restore_up_LV1",
            "Passive.i_passive_maxmpup",
            "Passive.i_passive_post_damage_invincibility",
            "Passive.i_passive_flag_ending_c",
            "Passive.i_passive_override_skin_level",
            "Passive.i_passive_override_skin_level_max",
            "Passive.i_passive_parry",
        };
        List<string> _spirits = new List<string>
        {
            "Spirit.s5000",
            "Spirit.s5050",
            "Spirit.s5020",
            "Spirit.s5030",
            "Spirit.s5070",
            "Spirit.s5040",
            "Spirit.s5060",
            "Spirit.s5080",
            "Spirit.s5010",
            "Spirit.s2012",
            "Spirit.s2002",
            "Spirit.s2102",
            "Spirit.s2082",
            "Spirit.s2022",
            "Spirit.s2162",
            "Spirit.s2122",
            "Spirit.s2132",
            "Spirit.s2192",
            "Spirit.s2072",
            "Spirit.s2182",
            "Spirit.s2052",
            "Spirit.s2172",
            "Spirit.s2112",
            "Spirit.s2092",
            "Spirit.s2032",
            "Spirit.s2232",

        };
        List<string> _parameters = new List<string>
        {
            "Parameter.i_maxHPUp_01",
            "Parameter.i_maxHPUp_02",
            "Parameter.i_maxHPUp_03",
        };
        List<string> _generics = new List<string>
        {
            "Generic.i_HealCount_Up",
            "Generic.i_HealPower_Up",
            "Generic.i_PassiveSlot_Up",
            "Generic.i_FinalPassivePart_Up",
            "Generic.i_HealCount_RestoreOne",
            "Generic.i_HealCount_RestoreAll",
            "Generic.i_Heal_Small",
            "Generic.i_Heal_Medium",
            "Generic.i_Heal_Full",
            "Generic.i_SkillCount_Restore_Small",
            "Generic.i_SkillCount_Restore_Medium",
            "Generic.i_SkillCount_Restore_Full",
            "Generic.i_SkillCount_Restore_BossRush",
            "Generic.i_SkillCooldown_Restore_Small",
            "Generic.i_SkillCooldown_Restore_Medium",
            "Generic.i_SkillCooldown_Restore_Full",
            "Generic.i_SpiritCurrencyLv1_S",
            "Generic.i_SpiritCurrencyLv1_M",
            "Generic.i_SpiritCurrencyLv1_L",
            "Generic.i_SpiritCurrencyLv1_LL",
            "Generic.i_SpiritCurrencyLv2_S",
            "Generic.i_SpiritCurrencyLv2_M",
            "Generic.i_SpiritCurrencyLv2_L",
            "Generic.i_SpiritCurrencyLv2_LL",
            "Generic.i_SpiritCurrencyLv3_1",
            "Generic.i_SpiritCurrencyLv3_2",
            "Generic.i_SpiritCurrencyLv1_RandomDrop_S",
            "Generic.i_SpiritCurrencyLv1_RandomDrop_M",
            "Generic.i_SpiritCurrencyLv1_RandomDrop_L",
            "Generic.i_SpiritCurrencyLv2_RandomDrop_S",
            "Generic.i_SpiritCurrencyLv2_RandomDrop_M",
            "Generic.i_SpiritCurrencyLv2_RandomDrop_L",
            "Generic.i_SpiritCurrencyLv1_Recollection_1",
            "Generic.i_SpiritCurrencyLv1_Recollection_2",
            "Generic.i_SpiritCurrencyLv1_Recollection_3",
            "Generic.i_SpiritCurrencyLv1_Recollection_4",
            "Generic.i_SpiritCurrencyLv1_Recollection_5",
            "Generic.i_SpiritCurrencyLv1_Recollection_6",
            "Generic.i_SpiritCurrencyLv1_Recollection_7",
            "Generic.i_SpiritCurrencyLv1_Recollection_8",
            "Generic.i_SpiritCurrencyLv1_Recollection_9",
            "Generic.i_SpiritCurrencyLv1_Recollection_10",
            "Generic.i_SpiritCurrencyLv1_Recollection_BossRush",
            "Generic.i_SpiritCurrencyLv1_Recollection_BossRushNG+",
            "Generic.i_SpiritCurrencyLv2_Recollection_1",
            "Generic.i_SpiritCurrencyLv2_Recollection_2",
            "Generic.i_SpiritCurrencyLv2_Recollection_3",
            "Generic.i_SpiritCurrencyLv2_Recollection_4",
            "Generic.i_SpiritCurrencyLv2_Recollection_5",
            "Generic.i_SpiritCurrencyLv2_Recollection_6",
            "Generic.i_SpiritCurrencyLv2_Recollection_7",
            "Generic.i_SpiritCurrencyLv2_Recollection_8",
            "Generic.i_SpiritCurrencyLv2_Recollection_9",
            "Generic.i_SpiritCurrencyLv2_Recollection_10",
            "Generic.i_SpiritCurrencyLv2_Recollection_BossRush",
            "Generic.i_SpiritCurrencyLv2_Recollection_BossRushNG+",
            "Generic.i_SpiritCurrencyLv1_NG+_Boss",
            "Generic.i_SpiritCurrencyLv2_NG+_Boss",
            "Generic.i_SpiritCurrencyLv1_NG+_S",
            "Generic.i_SpiritCurrencyLv1_NG+_M",
            "Generic.i_SpiritCurrencyLv1_NG+_L",
            "Generic.i_SpiritCurrencyLv1_NG+_LL",
            "Generic.i_SpiritCurrencyLv2_NG+_S",
            "Generic.i_SpiritCurrencyLv2_NG+_M",
            "Generic.i_SpiritCurrencyLv2_NG+_L",
            "Generic.i_SpiritCurrencyLv2_NG+_LL",
        };
        static int GEngine = 0x4651D00;
        static int GameViewport = 0x780;
        static int World = 0x78;
        static int GameMode = 0x118;
        static int GameInstance = 0xDE8;
        static int LocalPlayers = 0x38;
        static int PlayerController = 0x30;
        static int PassiveEquipComponent = 0x5B0;
        static int InventoryComponent = 0x588;
        static int ParameterComponent = 0x590;
        static int HealComponent = 0x5A8;

        WebSocketServer _server;
        List<IItemTracker> _inventories = new List<IItemTracker>();

        DeepPointer _persistentLevel = new DeepPointer(GEngine, GameInstance, 0xF0, 0xF8, 0x70, 0x0);

        public GameTracker()
        {
            _inventories.Add(new Inventory(new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, InventoryComponent, 0x178),
                                            new DeepPointer(GEngine, GameViewport, World, GameMode, 0x330),
                                            _parameters));
            _inventories.Add(new Inventory(new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, InventoryComponent, 0x180),
                                            new DeepPointer(GEngine, GameViewport, World, GameMode, 0x340),
                                            _spirits));
            _inventories.Add(new Inventory(new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, InventoryComponent, 0x188),
                                            new DeepPointer(GEngine, GameViewport, World, GameMode, 0x338),
                                            _aptitudes));
            _inventories.Add(new RelicInventory(new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, InventoryComponent, 0x190),
                                            new DeepPointer(GEngine, GameViewport, World, GameMode, 0x348),
                                            _passives));
            _inventories.Add(new ItemTracker(new Dictionary<string, DeepPointer>()
            {
                { "Generic.i_FinalPassivePart_Up", new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, ParameterComponent, 0xF8) },
                { "Generic.i_PassiveSlot_Up", new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, PassiveEquipComponent, 0xEC) },
                { "Generic.i_HealPower_Up", new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, HealComponent, 0x124) },
                { "Game.DifficultyLevel", new DeepPointer(GEngine, GameViewport, World, GameMode, 0x390) },
            }));
            _inventories.Add(new TabletTracker(new DeepPointer(GEngine, GameInstance, LocalPlayers, 0x0, PlayerController, ParameterComponent, 0xF8),
                                new DeepPointer(0x40EF4F0, 0x88, 0x0)));
            foreach (var inv in _inventories)
                inv.OnItemsModified += NewItemReceived;
        }

        public Exception _lastError;
        public void CreateServer(int port = 65399)
        {
            _lastError = null;
            try
            {
                _server = new WebSocketServer("ws://localhost:" + port.ToString());
                _server.AddWebSocketService<UATService>("/", (UATService service) =>
                {
                    service.tracker = this;
                });
                _server.Start();
            }
            catch (Exception e)
            {
                _lastError = e;
                if (port == 65399)
                    CreateServer(44444);
                else
                {
                    string msg = "Unknown error.";
                    if (_lastError != null)
                        msg = _lastError.Message;
                    MessageBox.Show("Could not start UAT server: " +
                        msg, "UAT Server Error", MessageBoxButtons.OK, MessageBoxIcon.Warning);
                }
            }
        }

        public void Stop()
        {
            if (_server != null && _server.IsListening)
                _server.Stop();
            _server = null;
        }

        ~GameTracker()
        {
            Stop();
        }

        static Process GetGameProcess()
        {
            return Process.GetProcessesByName("EnderLiliesSteam-Win64-Shipping").FirstOrDefault(p => !p.HasExited);
        }

        public void Connect()
        {
            CreateServer();
        }

        public bool GameConnected()
        {
            if (_process == null || _process.HasExited)
                _process = GetGameProcess();
            if (_process == null)
                return false;
            return true;
        }
        public bool ServerConnected()
        {
            return _server != null && _server.IsListening;
        }

        public event Action<Dictionary<string, int>> OnNewItems;
        public void NewItemReceived(Dictionary<string, int> items)
        {
            OnNewItems?.Invoke(items);
        }

        public Dictionary<string, int> GetAllItems()
        {
            Dictionary<string, int> items = new Dictionary<string, int>();
            foreach (var inv in _inventories)
            {
                var content = inv.GetItems();
                foreach (var k in content)
                    items[k.Key] = k.Value;
            }
            return items;
        }

        public void Update()
        {
            StringBuilder level = new StringBuilder();
            if (!ServerConnected())
            {
                Connect();
                return;
            }
            if (!GameConnected() || !_persistentLevel.DerefString(_process, level) || level.ToString() == "TitleMap")
            {
                foreach (var inv in _inventories)
                    inv.Reset();
                return;
            }
            foreach (var inv in _inventories)
                inv.Update(_process);
        }
    }
}
