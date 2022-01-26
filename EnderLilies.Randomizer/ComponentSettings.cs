﻿using EnderLilies.Randomizer;
using LiveSplit.TimeFormatters;
using System;
using System.Data;
using System.Drawing;
using System.Collections.Generic;
using System.IO;
using System.Windows.Forms;
using System.Xml;
using System.Diagnostics;
using System.ComponentModel;
using System.Linq;
using LiveSplit.UI;
using System.Runtime.CompilerServices;

namespace EnderLilies.Randomizer
{
    public partial class ComponentSettings : UserControl, INotifyPropertyChanged
    {
        public LayoutMode Mode { get; set; }
        public string FilePath { get; set; }
        public string CheckFileResult { get; set; }
        public DataTable Preview { get; set; }

        bool _shuffleSpirits = true;
        public bool ShuffleSpirits
        {
            get
            {
                return _shuffleSpirits;
            }
            set
            {
                _shuffleSpirits = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleRelics = true;
        public bool ShuffleRelics
        {
            get
            {
                return _shuffleRelics;
            }
            set
            {
                _shuffleRelics = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleEnemies = false;
        public bool ShuffleEnemies
        {
            get
            {
                return _shuffleEnemies;
            }
            set
            {
                _shuffleEnemies = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleTablets = true;
        public bool ShuffleTablets
        {
            get
            {
                return _shuffleTablets;
            }
            set
            {
                _shuffleTablets = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleChains = true;
        public bool ShuffleChains
        {
            get
            {
                return _shuffleChains;
            }
            set
            {
                _shuffleChains = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleAmulets = true;
        public bool ShuffleAmulets
        {
            get
            {
                return _shuffleAmulets;
            }
            set
            {
                _shuffleAmulets = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleBlights = true;
        public bool ShuffleBlights
        {
            get
            {
                return _shuffleBlights;
            }
            set
            {
                _shuffleBlights = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleFindings = true;
        public bool ShuffleFindings
        {
            get
            {
                return _shuffleFindings;
            }
            set
            {
                _shuffleFindings = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleWishes = true;
        public bool ShuffleWishes
        {
            get
            {
                return _shuffleWishes;
            }
            set
            {
                _shuffleWishes = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleSlots = true;
        public bool ShuffleSlots
        {
            get
            {
                return _shuffleSlots;
            }
            set
            {
                _shuffleSlots = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleRooms = false;
        public bool ShuffleRooms
        {
            get
            {
                return _shuffleRooms;
            }
            set
            {
                _shuffleRooms = value;
                NotifyPropertyChanged();
            }
        }

        bool _ngPlus = false;
        public bool NGPlus
        {
            get
            {
                return _ngPlus;
            }
            set
            {
                _ngPlus = value;
                NotifyPropertyChanged();
            }
        }

        bool _unusedRelics = true;
        public bool UnusedRelics
        {
            get
            {
                return _unusedRelics;
            }
            set
            {
                _unusedRelics = value;
                NotifyPropertyChanged();
            }
        }

        bool _uatServer = false;
        public bool UATServer
        {
            get
            {
                return _uatServer;
            }
            set
            {
                _uatServer = value;
                NotifyPropertyChanged();
            }
        }

        bool _dashProgressive = true;
        public bool DashProgressive
        {
            get
            {
                return _dashProgressive;
            }
            set
            {
                _dashProgressive = value;
                NotifyPropertyChanged();
            }
        }

        bool _startWeaponUsesAncientSouls = false;
        public bool StartWeaponUsesAncientSouls
        {
            get
            {
                return _startWeaponUsesAncientSouls;
            }
            set
            {
                _startWeaponUsesAncientSouls = value;
                NotifyPropertyChanged();
            }
        }

        bool _shuffleWeaponUpgrades = false;
        public bool ShuffleWeaponUpgrades
        {
            get
            {
                return _shuffleWeaponUpgrades;
            }
            set
            {
                _shuffleWeaponUpgrades = value;
                NotifyPropertyChanged();
            }
        }

        bool _metaprogression = false;
        public bool MetaProgression
        {
            get
            {
                return _metaprogression;
            }
            set
            {
                _metaprogression = value;
                NotifyPropertyChanged();
            }
        }

        bool _minibosses_chapter = false;
        public bool MinibossesChapter
        {
            get
            {
                return _minibosses_chapter;
            }
            set
            {
                _minibosses_chapter = value;
                NotifyPropertyChanged();
            }
        }

        int _currentSeed = 0;
        public int Seed
        {
            get
            {
                return _currentSeed;
            }
            set
            {
                _currentSeed = value;
                NotifyPropertyChanged();
            }
        }

        int _startChapter = 0;
        public int StartChapter
        {
            get
            {
                return _startChapter;
            }
            set
            {
                _startChapter = Math.Max(0, Math.Min(9, value));
                chapterText.Text = "Chapter " + (_startChapter + 1).ToString() + " to " + (_maxChapter + 1).ToString();
                if (_startChapter > _maxChapter)
                    maxChapter.Value = _startChapter;
                NotifyPropertyChanged();
            }
        }

        int _maxChapter = 9;
        public int MaxChapter
        {
            get
            {
                return _maxChapter;
            }
            set
            {
                _maxChapter = Math.Max(0, Math.Min(9, value));
                chapterText.Text = "Chapter " + (_startChapter + 1).ToString() + " to " + (_maxChapter + 1).ToString();
                if (_maxChapter < _startChapter)
                    startChapter.Value = _maxChapter;
                NotifyPropertyChanged();
            }
        }

        int _skinOverride = 0;
        public int SkinOverride
        {
            get
            {
                return _skinOverride;
            }
            set
            {
                _skinOverride = Math.Max(0, Math.Min(12, value));
                string[] lilyLevel =
                    {
                    "Normal",
                    "Pure",
                    "Blighted 1",
                    "Blighted 2",
                    "Blighted 3",
                    "Blighted 4",
                    "Blighted 5",
                    "Blighted 6",
                    "Blighted 7",
                    "Blighted 8",
                    "Blighted 9",
                    "Blighted 10",
                    "Fully Blighted",
                };
                skinLevelText.Text = "Lilly: " + lilyLevel[value];
                NotifyPropertyChanged();
            }
        }

        int _startingSpirits = 0;
        public int StartingSpirits
        {
            get
            {
                _startingSpirits = 0;
                for (int i = 0; i < startingSpiritsBox.Controls.Count; ++i)
                {
                    var checkbox = (CheckBox)startingSpiritsBox.Controls[i];
                    if (checkbox.Checked)
                        _startingSpirits |= 1 << i;
                }
                return _startingSpirits;
            }
            set
            {
                _startingSpirits = value;
                for (int i = 0; i < startingSpiritsBox.Controls.Count; ++i)
                {
                    var checkbox = (CheckBox)startingSpiritsBox.Controls[i];
                    checkbox.Checked = (_startingSpirits & (1 << i)) > 0;
                }
            }
        }
        public bool HasSpirit(int i)
        {
            var checkbox = (CheckBox)startingSpiritsBox.Controls[i];
            return checkbox.Checked;
        }

        public ComponentSettings()
        {
            InitializeComponent();
            this.metaprogressTooltip.SetToolTip(metaprogression, "Items for progression will always be placed on newly accessible checks");
            this.path.DataBindings.Add("Text", this, "FilePath", false, DataSourceUpdateMode.OnPropertyChanged, "Components/EnderLilies.Randomizer.json");
            this.seedText.DataBindings.Add("Text", this, "Seed", false, DataSourceUpdateMode.OnPropertyChanged, 0);
            this.checkfile.DataBindings.Add("Text", this, "CheckFileResult", false, DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleAmulets.DataBindings.Add("Checked", this, "ShuffleAmulets", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleBlights.DataBindings.Add("Checked", this, "ShuffleBlights", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleChains.DataBindings.Add("Checked", this, "ShuffleChains", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleFindings.DataBindings.Add("Checked", this, "ShuffleFindings", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleRelics.DataBindings.Add("Checked", this, "ShuffleRelics", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleEnemies.DataBindings.Add("Checked", this, "ShuffleEnemies", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.shuffleSpirits.DataBindings.Add("Checked", this, "ShuffleSpirits", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleTablets.DataBindings.Add("Checked", this, "ShuffleTablets", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleWishes.DataBindings.Add("Checked", this, "ShuffleWishes", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleSlots.DataBindings.Add("Checked", this, "ShuffleSlots", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.ngPlusSetting.DataBindings.Add("Checked", this, "NGPlus", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.unusedRelics.DataBindings.Add("Checked", this, "UnusedRelics", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.uatserver.DataBindings.Add("Checked", this, "UATServer", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.shuffleRooms.DataBindings.Add("Checked", this, "ShuffleRooms", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.dashProgressive.DataBindings.Add("Checked", this, "DashProgressive", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.startWeaponUsesAncientSouls.DataBindings.Add("Checked", this, "StartWeaponUsesAncientSouls", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.shuffleWeaponUpgrades.DataBindings.Add("Checked", this, "ShuffleWeaponUpgrades", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.metaprogression.DataBindings.Add("Checked", this, "MetaProgression", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.minibosses_chapter.DataBindings.Add("Checked", this, "MinibossesChapter", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.skinLevel.DataBindings.Add("Value", this, "SkinOverride", false, DataSourceUpdateMode.OnPropertyChanged, 0);
            this.startChapter.DataBindings.Add("Value", this, "StartChapter", false, DataSourceUpdateMode.OnPropertyChanged, 0);
            this.maxChapter.DataBindings.Add("Value", this, "MaxChapter", false, DataSourceUpdateMode.OnPropertyChanged, 9);

            
            for (int i = 0; i < startingSpiritsBox.Controls.Count; ++i)
            {
                var checkbox = (CheckBox)startingSpiritsBox.Controls[i];
                checkbox.CheckedChanged += (a, e) =>
                {
                    NotifyPropertyChanged();
                };
            }


            FilePath = "Components/EnderLilies.Randomizer.json";

            this.Dock = DockStyle.Fill;
            if (Seed == 0)
                Seed = new System.Random().Next();
            this.Preview = new DataTable();
        }

        public event PropertyChangedEventHandler PropertyChanged = delegate { };
        public void SetSettings(XmlNode node)
        {
            var element = (XmlElement)node;
            Version version = SettingsHelper.ParseVersion(element["Version"]);
            SkinOverride = SettingsHelper.ParseInt(element["SkinOverride"], 1);
            StartChapter = SettingsHelper.ParseInt(element["StartChapter"], 1);
            MaxChapter = SettingsHelper.ParseInt(element["MaxChapter"], 10);
            Seed = SettingsHelper.ParseInt(element["Seed"], 0);
            FilePath = SettingsHelper.ParseString(element["FilePath"], "Components/EnderLilies.Randomizer.json");
            ShuffleAmulets = SettingsHelper.ParseBool(element["ShuffleAmulets"], true);
            ShuffleBlights = SettingsHelper.ParseBool(element["ShuffleBlights"], true);
            ShuffleChains = SettingsHelper.ParseBool(element["ShuffleChains"], true);
            ShuffleFindings = SettingsHelper.ParseBool(element["ShuffleFindings"], true);
            ShuffleRelics = SettingsHelper.ParseBool(element["ShuffleRelics"], true);
            ShuffleEnemies = SettingsHelper.ParseBool(element["ShuffleEnemies"], false);
            ShuffleSpirits = SettingsHelper.ParseBool(element["ShuffleSpirits"], true);
            ShuffleTablets = SettingsHelper.ParseBool(element["ShuffleTablets"], true);
            ShuffleWishes = SettingsHelper.ParseBool(element["ShuffleWishes"], true);
            ShuffleSlots = SettingsHelper.ParseBool(element["ShuffleSlots"], true);
            UnusedRelics = SettingsHelper.ParseBool(element["UnusedRelics"], true);
            UATServer = SettingsHelper.ParseBool(element["UATServer"], false);
            NGPlus = SettingsHelper.ParseBool(element["NGPlus"], false);
            ShuffleRooms = SettingsHelper.ParseBool(element["ShuffleRooms"], false);
            StartingSpirits = SettingsHelper.ParseInt(element["StartingSpirits"], 0b11111);
            MetaProgression = SettingsHelper.ParseBool(element["MetaProgression"], false);
            MinibossesChapter = SettingsHelper.ParseBool(element["MinibossesChapter"], false);
            DashProgressive = SettingsHelper.ParseBool(element["DashProgressive"], true);
            StartWeaponUsesAncientSouls = SettingsHelper.ParseBool(element["StartWeaponUsesAncientSouls"], true);
            ShuffleWeaponUpgrades = SettingsHelper.ParseBool(element["ShuffleWeaponUpgrades"], false);

            this.path.Text = FilePath;
        }

        public XmlNode GetSettings(XmlDocument document)
        {
            var settings_node = document.CreateElement("Settings");
            settings_node.AppendChild(SettingsHelper.ToElement(document, "FilePath", FilePath));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleAmulets", ShuffleAmulets));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleBlights", ShuffleBlights));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleChains", ShuffleChains));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleFindings", ShuffleFindings));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleRelics", ShuffleRelics));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleEnemies", ShuffleEnemies));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleSpirits", ShuffleSpirits));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleTablets", ShuffleTablets));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleWishes", ShuffleWishes));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleSlots", ShuffleSlots));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "UnusedRelics", UnusedRelics));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "UATServer", UATServer));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "NGPlus", NGPlus));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "Seed", Seed));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "SkinOverride", SkinOverride));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "StartChapter", StartChapter));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "MaxChapter", MaxChapter));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleRooms", ShuffleRooms));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "StartingSpirits", StartingSpirits));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "MetaProgression", MetaProgression));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "MinibossesChapter", MinibossesChapter));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "DashProgressive", DashProgressive));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "StartWeaponUsesAncientSouls", StartWeaponUsesAncientSouls));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleWeaponUpgrades", ShuffleWeaponUpgrades));
            return settings_node;
        }

        private void chooseFile_Click(object sender, EventArgs e)
        {
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                this.FilePath = openFileDialog1.FileName;
                this.path.Text = FilePath;
                CheckFile();
            }
        }

        public void GeneratePreview(RandomSession session)
        {
            var g = session.GameGraph;
            LogicPreviewGridview.Rows.Clear();
            shuffleGroup.Text = string.Format("Shuffled Items : {0}", session.ShufflePool);

            Dictionary<string, string> replacements = new Dictionary<string, string>
                {
                    {"_GAMEPLAY.BP_", " | "},
                    {"_MAP.BP_", " | "},
                    {"_GEO.BP_", " | "},
                    {"Interactable_", ""},
                    {"Passive_", ""},
                    {"Village_", "Cliffside Hamlet "},
                    {"Oubliette_", "Stockade "},
                    {"Forest_", "Witch Thicket "},
                    {"Fort_", "Twin Spires "},
                    {"Church_", "White Parish "},
                    {"Cave_", "Catacombs "},
                    {"Swamp_", "Verboten Domain "},
                    {"Abyss_", "Abyss "},
                    {"Outside_", "Hinterlands "},
                    {"Castle_", "Ruined Castle "},
                    {"SCR_LV1S_", "10 stagnant "},
                    {"SCR_LV1M_", "30 stagnant "},
                    {"SCR_LV1LL_", "800 stagnant "},
                    {"SCR_LV1L_", "100 stagnant "},
                    {"SCR_LV2S_", "10 furious "},
                    {"SCR_LV2M_", "30 furious "},
                    {"SCR_LV2LL_", "800 furious "},
                    {"SCR_LV2L_", "100 furious "},
                    {"SCR_LV3S_", "1 ancient soul"},
                    {"SCR_LV3M_", "2 ancient soul"},
                    {"Item_Tip_", "finding "},
                    {"Item_Tip", "finding "},
                    {"Item_HealPower_Up_", "priestress wish "},
                    {"Item_FinalPassivePart_", "stone tablet "},
                    {"Item_PassiveSlot_", "chain of sorcery "},
                    {"Item_MaxHPUp_01_", "amulet fragment "},
                    {"Item_MaxHPUp_02_", "amulet gem "},
                    {"Drop", "barrel"},
                    {"Passives_Treasure_", "chest "},
                    {"Treasure_", "chest "},
                    {"Treasure", "chest "},
                    {"starting_weapon", "Starting Spirit"},
                };
            Dictionary<string, string> key_replacements = new Dictionary<string, string>
                {
                    {"Generic.i_FinalPassivePart_Up", "stone tablet"},
                    {"Generic.i_SpiritCurrencyLv1_S", "10 stagnant"},
                    {"Generic.i_SpiritCurrencyLv1_M", "30 stagnant"},
                    {"Generic.i_SpiritCurrencyLv1_LL", "800 stagnant"},
                    {"Generic.i_SpiritCurrencyLv1_L", "100 stagnant"},
                    {"Generic.i_SpiritCurrencyLv2_S", "10 furious"},
                    {"Generic.i_SpiritCurrencyLv2_M", "30 furious"},
                    {"Generic.i_SpiritCurrencyLv2_LL", "800 furious"},
                    {"Generic.i_SpiritCurrencyLv2_L", "100 furious"},
                    {"Generic.i_SpiritCurrencyLv3_1", "1 ancient soul"},
                    {"Generic.i_SpiritCurrencyLv3_2", "2 ancient souls"},
                    {"Generic.i_HealPower_Up", "priestress wish"},
                    {"Generic.i_PassiveSlot_Up", "chain of sorcery"},
                    {"Tip.tip_", "finding "},
                    {"Parameter.i_maxHPUp_01", "amulet fragment"},
                    {"Parameter.i_maxHPUp_02", "amulet gem"},
                    {"Parameter.i_maxHPUp_03", "amulet jewel"},
                    {"Passive.i_", "relic - "},
                };

            var nodes = new List<string>();
            foreach (var l in g.logic)
            {
                if (l.node == -1)
                    continue;
                var node = g.GetNode(l.node);
                nodes.Add(node);
            }
            foreach (var l in g.logic)
            {
                if (l.node == -1)
                {
                    LogicPreviewGridview.Rows.Add("End of Logic",
                        "",
                        string.Format("{0}/{1}", l.reachables, g.locations.Count));
                    continue;
                }
                var node = g.GetNode(l.node);
                var tooltip = node.ToString();
                var item = session.result[node];

                foreach (var k in g.aliases)
                {
                    if (k.Value == node)
                        node = k.Key;
                    if (k.Value == item)
                        item = k.Key;
                }
                foreach (var r in replacements)
                    node = node.Replace(r.Key, r.Value);
                if (node.Contains("|"))
                    node = node.TrimEnd("0123456789_ ".ToArray());
                int rowid = LogicPreviewGridview.Rows.Add(node,
                    item,
                    string.Format("{0}/{1}", l.reachables, g.nodes.Count));
                LogicPreviewGridview.Rows[rowid].Cells[0].ToolTipText = tooltip;
            }
            foreach (var pair in session.result)
            {
                var node = pair.Key;
                if (nodes.Contains(node))
                    continue;
                var item = pair.Value;
                foreach (var k in g.aliases)
                {
                    if (k.Value == node)
                        node = k.Key;
                    if (k.Value == item)
                        item = k.Key;
                }
                foreach (var r in replacements)
                    node = node.Replace(r.Key, r.Value);
                foreach (var r in key_replacements)
                    item = item.Replace(r.Key, r.Value);
                if (node.Contains("|"))
                    node = node.TrimEnd("0123456789_ ".ToArray());
                int rowid = LogicPreviewGridview.Rows.Add(node,
                    item,
                    "");
            }
        }

        void CheckFile()
        {
            if (!File.Exists(FilePath))
            {
                CheckFileResult = "File not found.";
                this.checkfile.ForeColor = Color.Red;
                return;
            }
            try
            {
                GameGraph g = SerializableGraph.Import(FilePath);
                CheckFileResult = String.Format("Config file contains {0} nodes {1} keys and {2} connections",
                    g.nodes.Count, g.keys.Count, g.edges.Count);
                this.checkfile.ForeColor = Color.Green;
            }
            catch (Exception e)
            {
                CheckFileResult = e.Message;
                this.checkfile.ForeColor = Color.Red;
                this.checkfile.Text = CheckFileResult;
            }
        }

        private void Randomize_Click(object sender, EventArgs e)
        {
            Seed = new System.Random().Next();
        }

        private void open_Click(object sender, EventArgs e)
        {
            Process fileopener = new Process();

            fileopener.StartInfo.FileName = "explorer";
            fileopener.StartInfo.Arguments = "\"" + Path.GetFullPath(FilePath) + "\"";
            fileopener.Start();
            fileopener.Close();
        }

        private void ComponentSettings_Load(object sender, EventArgs e)
        {
            CheckFile();
            NotifyPropertyChanged();
        }

        private void NotifyPropertyChanged([CallerMemberName] String propertyName = "")
        {
            if (PropertyChanged != null)
                PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
        }
    }
}
