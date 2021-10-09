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
        public bool LockSeed { get; set; }

        bool _shuffleSpirits; 
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

        bool _shuffleRelics; 
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

        bool _shuffleTablets; 
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

        bool _shuffleChains; 
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

        bool _shuffleAmulets;
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

        bool _shuffleBlights;
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

        bool _shuffleFindings;
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

        bool _shuffleWishes;
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

        int _currentRoom = 0;
        public int CurrentRoom
        {
            get
            {
                return _currentRoom;
            }
            set
            {
                _currentRoom = value;
                NotifyPropertyChanged();
            }
        }

        public ComponentSettings()
        {
            InitializeComponent();

            this.path.DataBindings.Add("Text", this, "FilePath", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.seedText.DataBindings.Add("Text", this, "Seed", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.lockSeed.DataBindings.Add("Checked", this, "LockSeed", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleAmulets.DataBindings.Add("Checked", this, "ShuffleAmulets", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleBlights.DataBindings.Add("Checked", this, "ShuffleBlights", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleChains.DataBindings.Add("Checked", this, "ShuffleChains", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleFindings.DataBindings.Add("Checked", this, "ShuffleFindings", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleRelics.DataBindings.Add("Checked", this, "ShuffleRelics", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleSpirits.DataBindings.Add("Checked", this, "ShuffleSpirits", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleTablets.DataBindings.Add("Checked", this, "ShuffleTablets", false,
                DataSourceUpdateMode.OnPropertyChanged);
            this.shuffleWishes.DataBindings.Add("Checked", this, "ShuffleWishes", false,
                DataSourceUpdateMode.OnPropertyChanged);

            this.checkfile.DataBindings.Add("Text", this, "CheckFileResult", false,
                DataSourceUpdateMode.OnPropertyChanged);
            FilePath = "Components/EnderLilies.Randomizer.json";

            this.Dock = DockStyle.Fill;

            this.Preview = new DataTable();
        }

        public event PropertyChangedEventHandler PropertyChanged;

        public void SetSettings(XmlNode node)
        {
            var element = (XmlElement)node;
            Version version = SettingsHelper.ParseVersion(element["Version"]);
            FilePath = SettingsHelper.ParseString(element["FilePath"], "Components/EnderLilies.Randomizer.json");
            LockSeed = SettingsHelper.ParseBool(element["LockSeed"], false);
            ShuffleAmulets = SettingsHelper.ParseBool(element["ShuffleAmulets"], true);
            ShuffleBlights = SettingsHelper.ParseBool(element["ShuffleBlights"], true);
            ShuffleChains = SettingsHelper.ParseBool(element["ShuffleChains"], true);
            ShuffleFindings = SettingsHelper.ParseBool(element["ShuffleFindings"], true);
            ShuffleRelics = SettingsHelper.ParseBool(element["ShuffleRelics"], true);
            ShuffleSpirits = SettingsHelper.ParseBool(element["ShuffleSpirits"], true);
            ShuffleTablets = SettingsHelper.ParseBool(element["ShuffleTablets"], true);
            ShuffleWishes = SettingsHelper.ParseBool(element["ShuffleWishes"], true);
            Seed = SettingsHelper.ParseInt(element["Seed"], 0);
            this.path.Text = FilePath;
        }

        public XmlNode GetSettings(XmlDocument document)
        {
            var settings_node = document.CreateElement("Settings");
            settings_node.AppendChild(SettingsHelper.ToElement(document, "FilePath", FilePath));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "LockSeed", LockSeed));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleAmulets", ShuffleAmulets));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleBlights", ShuffleBlights));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleChains", ShuffleChains));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleFindings", ShuffleFindings));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleRelics", ShuffleRelics));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleSpirits", ShuffleSpirits));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleTablets", ShuffleTablets));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "ShuffleWishes", ShuffleWishes));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "Seed", Seed));
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
                node = node.Replace("_GAMEPLAY.BP_", ".");
                node = node.Replace("Interactable_", "");
                node = node.Replace("Passive_", "");
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
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("CheckFileResult"));
        }

        private void Randomize_Click(object sender, EventArgs e)
        {
            if (!LockSeed)
            {
                Seed = new System.Random().Next();
            }
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Seed"));
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
            if (PropertyChanged != null)
            {
                PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }
    }
}
