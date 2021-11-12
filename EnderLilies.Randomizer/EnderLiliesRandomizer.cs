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

        private ComponentSettings _settings;
        private GameInjector _gameInjector;
        private GameTracker _tracker;
        private RandomSession _session;

        public EnderLiliesRandomizer(LiveSplitState state)
        {
            _settings = new ComponentSettings();
            _gameInjector = new GameInjector();
            _tracker = new GameTracker();
            _session = new RandomSession(_settings);
        }

        public override void Dispose()
        {
            _tracker.Stop();
        }

        public override XmlNode GetSettings(XmlDocument document)
        {
            return _settings.GetSettings(document);
        }

        public override Control GetSettingsControl(LayoutMode mode)
        {
            _settings.Mode = mode;
            return _settings;
        }

        public override void SetSettings(XmlNode settings)
        {
            _settings.SetSettings(settings);
        }

        public override void Update(IInvalidator invalidator, LiveSplitState state, float width, float height, LayoutMode mode)
        {
            _gameInjector.Update();
            if (_settings.UATServer)
            {
                _tracker.Update();
                if (!_tracker.ServerConnected())
                    _settings.UATServer = false;
            }
            else
                _tracker.Stop();
        }
    }
}
