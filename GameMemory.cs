using LiveSplit.ComponentUtil;
using LiveSplit.Model;
using LiveSplit.UI.Components;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    class GameMemory
    {
        const string _processName = "EnderLiliesSteam-Win64-Shipping";
        Process _process = null;

        const int GEngine = 0x4633480;

        /* GameMode */
        DeepPointer _levelsDataTable = new DeepPointer(GEngine, 0x780, 0x78, 0x118, 0x320);
        DeepPointer _aptitudesDataTable = new DeepPointer(GEngine, 0x780, 0x78, 0x118, 0x338);
        DeepPointer _spiritsDataTable = new DeepPointer(GEngine, 0x780, 0x78, 0x118, 0x340);
        DeepPointer _relicsDataTable = new DeepPointer(GEngine, 0x780, 0x78, 0x118, 0x348);
        DeepPointer _gameDataReadyPointer = new DeepPointer(GEngine, 0x780, 0x78, 0x118, 0x498);
        DeepPointer _bIsInMenu = new DeepPointer(GEngine, 0x780, 0x78, 0x118, 0x2A8);

        DeepPointer _GameMode = new DeepPointer(GEngine, 0x780, 0x78, 0x118);

        /* Level Load Subsystem */
        DeepPointer _loadedPointer = new DeepPointer(GEngine, 0xDE8, 0xF0, 0xF8, 0x8C);


        ComponentSettings _settings = null;

        Dictionary<DeepPointer, IntPtr> _ptrs;

        bool _shuffled = false;

        List<string> _spirits = new List<string> {
            "Umbral",
            "Gerrod",
            "Silva",
            "Julius",
            "Ulv",
            "Eleine",
            "Hoenir",
            "Faden",
            "Siegrid",
            "Youth",
            "Defender",
            "Merchant",
            "Maiden",
            "Archer",
            "Crypt",
            "Fungal",
            "Floral",
            "Sentinel",
            "Subject",
            "Executionner",
            "Sinner",
            "Champion",
            "Elder",
            "Chief",
            "Aegis",
            "Fellwyrm",
        };

        List<string> _aptitudes = new List<string>()
        {
            "_Prayer",
            "_Jump",
            "Jump",
            "_Dodge",
            "Dash",
            "Charge",
            "Thrust",
            "Slam",
            "_Swim",
            "Swim",
            "Claw",
            "Hook",
            "Door",
            "_SwitchSpirits",
            "Ults",
        };

        public static List<string> _relics = new List<string>()
        {
            "Soiled Prayer Beads",
            "Royal Aegis Crest",
            "Unused1",
            "Broken Music Box",
            "Cracked Familiar Stone",
            "Snowdrop Bracelet",
            "Blighted Appendage",
            "Giant's Ring",
            "Unused2",
            "Ancient Dragon Claw",
            "Unused3",
            "Rusted Blue Ornament",
            "Executioner's Gloves",
            "Decayed Crown",
            "Weathered Necklace",
            "Immortal's Crest",
            "Manisa's Ring",
            "Aura's Ring",
            "Unused4",
            "Kilteus' Ring",
            "Calivia's Ring",
            "Unused5",
            "White Priestess Statue",
            "Priestess' Doll",
            "White Priestess' Earrings",
            "Holy Spring Water",
            "Nymphilia's Ring",
            "Anklet",
            "Plume",
            "Ruined Witch's Book",
            "Bloodstained Ribbon",
            "Blightwreathed Blade",
            "Mask",
            "Unused6",
            "Eldred's Ring",
            "Ricorus' Ring",
            "Unused7",
            "Luminant Aegis Curio",
            "Lost Heirloom",
            "Blighted Phantom",
            "Parry",
        };


        public GameMemory(ComponentSettings settings)
        {
            _settings = settings;

            _ptrs = new Dictionary<DeepPointer, IntPtr>()
            {
                { _spiritsDataTable, IntPtr.Zero},
                { _levelsDataTable, IntPtr.Zero},
                { _relicsDataTable, IntPtr.Zero},
                { _aptitudesDataTable, IntPtr.Zero},
            };
        }

        public bool ProcessHook()
        {
            Process proc = Process.GetProcessesByName(_processName).FirstOrDefault();
            // Already hooked
            if (_process != null && proc != null)
                return true;
            // Already unhooked
            if (_process == null && proc == null)
                return false;

            // New hook
            if (_process == null && proc != null)
            {
                Reset();
                _process = proc;
                return true;
            }

            // New Unhook
            if (_process != null && proc == null)
                Reset();

            return false;
        }


        public void ShuffleDatatable(IntPtr ptr, int count, Dictionary<int, int> forced = null)
        {
            List<long> data = new List<long>();
            for (int i = 0; i < count; ++i)
                data.Add(_process.ReadValue<long>(ptr + (i * 0x18) + 0x08));

            List<long> shuffled = new List<long>(data);
            shuffled.Shuffle();
            if (forced != null)
            {
                foreach (KeyValuePair<int, int> force in forced)
                {
                    int index = shuffled.IndexOf(data[force.Value]);
                    shuffled[index] = shuffled[force.Key];
                    shuffled[force.Key] = data[force.Value];
                }
            }
            for (int i = 0; i < count; ++i)
                _process.WriteValue<long>(ptr + (i * 0x18) + 0x08, shuffled[i]);
        }

        public List<long> ReadDataTableValues(IntPtr dataTable, int offset, int count)
        {
            List<long> data = new List<long>();
            for (int i = 0; i < count; ++i)
                data.Add(_process.ReadValue<long>(dataTable + (i * 0x18) + offset));
            return data;
        }

        void SetSpiritsData(IntPtr address, string aptitude1, string aptitude2, List<long> aptitudes_ids, List<long> relicss_ids)
        {
            long apt1_table = 0;
            long apt1 = 0;
            long apt2_table = 0;
            long apt2 = 0;

            if (_aptitudes.Contains(aptitude1))
            {
                apt1_table = _ptrs[_aptitudesDataTable].ToInt64();
                apt1 = aptitudes_ids[_aptitudes.IndexOf(aptitude1)];
            }
            else if(_relics.Contains(aptitude1))
            {
                apt1_table = _ptrs[_relicsDataTable].ToInt64();
                apt1 = relicss_ids[_relics.IndexOf(aptitude1)];
            }
            if (_aptitudes.Contains(aptitude2))
            {
                apt2_table = _ptrs[_aptitudesDataTable].ToInt64();
                apt2 = aptitudes_ids[_aptitudes.IndexOf(aptitude2)];
            }
            else if (_relics.Contains(aptitude2))
            {
                apt2_table = _ptrs[_relicsDataTable].ToInt64();
                apt2 = relicss_ids[_relics.IndexOf(aptitude2)];
            }

            int size = Marshal.SizeOf(typeof(long)) * 8;
            byte[] arr = new byte[size];
            IntPtr ptr = Marshal.AllocHGlobal(size);
            // apt1
            Marshal.StructureToPtr<long>(apt1_table, ptr, true);
            Marshal.StructureToPtr<long>(apt1, ptr + 0x8, true);
            // tuto1
            Marshal.StructureToPtr<long>(0, ptr + 0x10, true);
            Marshal.StructureToPtr<long>(0, ptr + 0x18, true);
            // apt2
            Marshal.StructureToPtr<long>(apt2_table, ptr + 0x20, true);
            Marshal.StructureToPtr<long>(apt2, ptr + 0x28, true);
            // tuto2
            Marshal.StructureToPtr<long>(0, ptr + 0x30, true);
            Marshal.StructureToPtr<long>(0, ptr + 0x38, true);
            Marshal.Copy(ptr, arr, 0, size);
            Marshal.FreeHGlobal(ptr);
            _process.WriteBytes(address + 0xE8, arr);
        }

        bool _room_shuffled;

        public void RandomizeRoom()
        {
            if (_ptrs[_levelsDataTable] == IntPtr.Zero ||
                _bIsInMenu.Deref<int>(_process) == 4)
            {
                _room_shuffled = false;
                return;
            }
            if (_room_shuffled)
                return;

            if (_settings.RandomLevels)
            {
                IntPtr levelsDataPtr = new DeepPointer(_ptrs[_levelsDataTable] + 0x30).Deref<IntPtr>(_process);
                if (levelsDataPtr == IntPtr.Zero)
                    return;
                Tools.rng = new Random(_settings.Seed);
                ShuffleDatatable(levelsDataPtr, 168, new Dictionary<int, int> { { 0, _settings.StartingRoom }, { 162, 162 }, { 102, 102 } });
                _room_shuffled = true;
            }
        }

        public void Randomize()
        {
            if (_ptrs[_spiritsDataTable] == IntPtr.Zero ||
                _ptrs[_relicsDataTable] == IntPtr.Zero ||
                _ptrs[_aptitudesDataTable] == IntPtr.Zero ||
                !_gameDataReadyPointer.Deref<bool>(_process) ||
                _bIsInMenu.Deref<int>(_process) == 4)
            {
                _shuffled = false;
                return;
            }
            if (_shuffled)
                return;

            IntPtr spiritsDataPtr = new DeepPointer(_ptrs[_spiritsDataTable] + 0x30).Deref<IntPtr>(_process);
            IntPtr relicsDataPtr = new DeepPointer(_ptrs[_relicsDataTable] + 0x30).Deref<IntPtr>(_process);
            List<long> spiritsIDs = ReadDataTableValues(spiritsDataPtr, 0x0, _spirits.Count);
            List<long> spiritsData = ReadDataTableValues(spiritsDataPtr, 0x8, _spirits.Count);
            List<long> relicsIDs = ReadDataTableValues(relicsDataPtr, 0x0, _relics.Count);
            List<long> relicsData = ReadDataTableValues(relicsDataPtr, 0x8, _relics.Count);
            List<long> aptitudesIDs = ReadDataTableValues(new DeepPointer(_ptrs[_aptitudesDataTable] + 0x30).Deref<IntPtr>(_process), 0x0, _aptitudes.Count);


            if (_settings.NGPlus)
            {
                IntPtr ptr = _GameMode.Deref<IntPtr>(_process) + 0x440;
                _process.WriteValue<int>(ptr, 1);
            }
            RandomSession s = _settings.RandomSession;
            if (_settings.RandomRelics)
            {
                for (int i = 0; i < _relics.Count; ++i)
                {
                    IntPtr address = relicsDataPtr + (i * 0x18) + 0x08;
                    if (s.relics.ContainsKey(_relics[i]))
                    {
                        int index = _relics.IndexOf(s.relics[_relics[i]]);
                        _process.WriteValue<long>(address, relicsData[index]);
                    }
                }
            }

            if (_settings.RandomSpirits)
            {
                for (int i = 0; i < _spirits.Count; ++i)
                {
                    IntPtr address = spiritsDataPtr + (i * 0x18) + 0x08;
                    if (s.weapons.ContainsKey(_spirits[i]))
                    {
                        int index = _spirits.IndexOf(s.weapons[_spirits[i]]);
                        _process.WriteValue<long>(address, spiritsData[index]);
                    }
                    IntPtr data = new DeepPointer(address).Deref<IntPtr>(_process);

                    string apt1 = "";
                    string apt2 = "";
                    s.aptitudes1.TryGetValue(_spirits[i], out apt1);
                    s.aptitudes2.TryGetValue(_spirits[i], out apt2);
                    if (_relics.Contains(apt1) && _settings.RandomRelics)
                        apt1 = s.relics.First((k) => k.Value == apt1).Key;
                    if (_relics.Contains(apt2) && _settings.RandomRelics)
                        apt2 = s.relics.First((k) => k.Value == apt2).Key;
                    SetSpiritsData(data, apt1, apt2, aptitudesIDs, relicsIDs);
                }
            }
            _shuffled = true;
        }

        public void Reset()
        {
            _shuffled = false;
            _room_shuffled = false;
            _process = null;
        }

        public void UpdateDeepPointers()
        {
            // copy to prevent foreach break
            var keys = _ptrs.Keys.ToArray();
            foreach (DeepPointer ptr in keys)
                _ptrs[ptr] = ptr.Deref<IntPtr>(_process, IntPtr.Zero);
        }

        public void Update(LiveSplitState state)
        {
            if (_loadedPointer.Deref<bool>(_process, true))
                return;
            UpdateDeepPointers();
            RandomizeRoom();
            Randomize();
        }
    }
}
