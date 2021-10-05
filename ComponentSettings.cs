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

namespace EnderLilies.Randomizer
{
    public partial class ComponentSettings : UserControl, INotifyPropertyChanged
    {
        public LayoutMode Mode { get; set; }
        public string FilePath { get; set; }
        public string CheckFileResult { get; set; }
        public DataTable Preview { get; set; }
        public int Seed { get; set; }
        public int StartingRoom { get; set; }
        public bool LockSeed { get; set; }
        public bool RandomLevels { get; set; }
        public bool RandomSpirits { get; set; }
        public bool RandomRelics { get; set; }
        public bool NGPlus { get; set; }

        public RandomSession Session { get; set; }

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
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("CurrentRoom"));
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
            RandomLevels = SettingsHelper.ParseBool(element["RandomLevels"], false);
            RandomSpirits = SettingsHelper.ParseBool(element["RandomSpirits"], true);
            RandomRelics = SettingsHelper.ParseBool(element["RandomRelics"], true);
            NGPlus = SettingsHelper.ParseBool(element["NGPlus"], false);
            Seed = SettingsHelper.ParseInt(element["Seed"], 0);
            StartingRoom = SettingsHelper.ParseInt(element["StartingRoom"], 12);
            this.path.Text = FilePath;
        }

        public XmlNode GetSettings(XmlDocument document)
        {
            var settings_node = document.CreateElement("Settings");
            settings_node.AppendChild(SettingsHelper.ToElement(document, "FilePath", FilePath));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "LockSeed", LockSeed));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "RandomLevels", RandomLevels));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "RandomSpirits", RandomSpirits));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "RandomRelics", RandomRelics));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "NGPlus", NGPlus));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "Seed", Seed));
            settings_node.AppendChild(SettingsHelper.ToElement(document, "StartingRoom", StartingRoom));
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

        void GeneratePreview(GameGraph g)
        {
            Session = new RandomSession(Seed, g);
            Session.WriteFile();

            LogicPreviewGridview.Rows.Clear();
            foreach (var l in g.logic)
            {
                if (l.node == -1)
                {
                    LogicPreviewGridview.Rows.Add("END",
                        string.Format("{0}/{1}", l.items, g.keys.Count),
                        string.Format("{0}/{1}", l.reachables, g.nodes.Count));
                    continue;
                }
                var node = g.GetNode(l.node);
                var item = Session.result[node];
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
                GeneratePreview(g);
            }
            catch (Exception e)
            {
                CheckFileResult = e.Message;
                this.checkfile.ForeColor = Color.Red;
                this.checkfile.Text = CheckFileResult;
            }
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("CheckFileResult"));
        }

        private void ComponentSettings_Load(object sender, EventArgs e)
        {
            CheckFile();
        }

        private void Randomize_Click(object sender, EventArgs e)
        {
            if (!LockSeed)
            {
                Seed = new System.Random().Next();
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs("Seed"));
            }
            CheckFile();
        }

        private void open_Click(object sender, EventArgs e)
        {
            Process fileopener = new Process();

            fileopener.StartInfo.FileName = "explorer";
            fileopener.StartInfo.Arguments = "\"" + Path.GetFullPath(FilePath) + "\"";
            fileopener.Start();
            fileopener.Close();
        }
    }
}
