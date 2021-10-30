using EnderLilies.Randomizer;
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
                startChapterText.Text = "Start Chapter: " + (_startChapter + 1).ToString();
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
                maxChapterText.Text = "Max Chapter: " + (_maxChapter + 1).ToString();
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

        public ComponentSettings()
        {
            InitializeComponent();
            this.path.DataBindings.Add("Text", this, "FilePath", false, DataSourceUpdateMode.OnPropertyChanged, "Components/EnderLilies.Randomizer.json");
            this.seedText.DataBindings.Add("Text", this, "Seed", false, DataSourceUpdateMode.OnPropertyChanged, 0);
            this.checkfile.DataBindings.Add("Text", this, "CheckFileResult", false, DataSourceUpdateMode.OnPropertyChanged);

            this.shuffleAmulets.DataBindings.Add("Checked", this, "ShuffleAmulets", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleBlights.DataBindings.Add("Checked", this, "ShuffleBlights", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleChains.DataBindings.Add("Checked", this, "ShuffleChains", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleFindings.DataBindings.Add("Checked", this, "ShuffleFindings", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleRelics.DataBindings.Add("Checked", this, "ShuffleRelics", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleSpirits.DataBindings.Add("Checked", this, "ShuffleSpirits", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleTablets.DataBindings.Add("Checked", this, "ShuffleTablets", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleWishes.DataBindings.Add("Checked", this, "ShuffleWishes", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.shuffleSlots.DataBindings.Add("Checked", this, "ShuffleSlots", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.ngPlusSetting.DataBindings.Add("Checked", this, "NGPlus", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.unusedRelics.DataBindings.Add("Checked", this, "UnusedRelics", false, DataSourceUpdateMode.OnPropertyChanged, true);
            this.uatserver.DataBindings.Add("Checked", this, "UATServer", false, DataSourceUpdateMode.OnPropertyChanged, false);
            this.shuffleRooms.DataBindings.Add("Checked", this, "ShuffleRooms", false, DataSourceUpdateMode.OnPropertyChanged, false);

            this.skinLevel.DataBindings.Add("Value", this, "SkinOverride", false, DataSourceUpdateMode.OnPropertyChanged, 0);
            this.startChapter.DataBindings.Add("Value", this, "StartChapter", false, DataSourceUpdateMode.OnPropertyChanged, 0);
            this.maxChapter.DataBindings.Add("Value", this, "MaxChapter", false, DataSourceUpdateMode.OnPropertyChanged, 9);
            FilePath = "Components/EnderLilies.Randomizer.json";

            this.Dock = DockStyle.Fill;

            this.Preview = new DataTable();
        }

        public event PropertyChangedEventHandler PropertyChanged = delegate { };

        bool pauseUpdate = false;
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
            ShuffleSpirits = SettingsHelper.ParseBool(element["ShuffleSpirits"], true);
            ShuffleTablets = SettingsHelper.ParseBool(element["ShuffleTablets"], true);
            ShuffleWishes = SettingsHelper.ParseBool(element["ShuffleWishes"], true);
            ShuffleSlots = SettingsHelper.ParseBool(element["ShuffleSlots"], true);
            UnusedRelics = SettingsHelper.ParseBool(element["UnusedRelics"], true);
            UATServer = SettingsHelper.ParseBool(element["UATServer"], false);
            NGPlus = SettingsHelper.ParseBool(element["NGPlus"], false);
            ShuffleRooms = SettingsHelper.ParseBool(element["ShuffleRooms"], false);

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
            foreach (var l in g.logic)
            {
                if (l.node == -1)
                {
                    LogicPreviewGridview.Rows.Add("END",
                        "",
                        string.Format("{0}/{1}", l.reachables, g.locations.Count));
                    continue;
                }
                var node = g.GetNode(l.node);
                var item = session.result[node];
                foreach (var k in g.aliases)
                {
                    if (k.Value == node)
                        node = k.Key;
                    if (k.Value == item)
                        item = k.Key;
                }
                node = node.Replace("_GAMEPLAY.BP_", ".").Replace("Interactable_", "").Replace("Passive_", "");
                LogicPreviewGridview.Rows.Add(node,
                    item,
                    string.Format("{0}/{1}", l.reachables, g.nodes.Count));
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
        }

        private void NotifyPropertyChanged([CallerMemberName] String propertyName = "")
        {
            if (!pauseUpdate && PropertyChanged != null)
                PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
        }
    }
}
