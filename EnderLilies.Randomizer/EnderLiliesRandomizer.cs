using LiveSplit.Model;
using LiveSplit.UI;
using LiveSplit.UI.Components;
using System.Windows.Forms;
using System.Xml;

namespace EnderLilies.Randomizer
{
    public class EnderLiliesRandomizer : LogicComponent
    {
        public override string ComponentName => "Ender Lilies Randomizer";

        public ComponentSettings Settings { get; set; }
        private GameInjector _gameInjector = null;
        private LiveSplitState _state;
        private RandomSession _session;

        public EnderLiliesRandomizer(LiveSplitState state)
        {
            _state = state;
            Settings = new ComponentSettings();
            _session = new RandomSession(Settings);
            _gameInjector = new GameInjector();
            _gameInjector.Run();
        }

        public override void Dispose()
        {
            _gameInjector?.Stop();
        }

        public override XmlNode GetSettings(XmlDocument document)
        {
            return Settings.GetSettings(document);
        }

        public override Control GetSettingsControl(LayoutMode mode)
        {
            Settings.Mode = mode;
            return Settings;
        }

        public override void SetSettings(XmlNode settings)
        {
            Settings.SetSettings(settings);
        }

        public override void Update(IInvalidator invalidator, LiveSplitState state, float width, float height, LayoutMode mode)
        {
        }
    }
}
