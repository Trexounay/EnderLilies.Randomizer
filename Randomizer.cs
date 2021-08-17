using EnderLilies.Randomizer;
using LiveSplit.Model;
using System;
using System.Windows.Forms;
using System.Xml;

namespace LiveSplit.UI.Components
{
    public class Randomizer : LogicComponent
    {
        public override string ComponentName => "Ender Lilies Randomizer";

        private ComponentSettings _settings;
        private GameMemory _gameMemory = null;
        private LiveSplitState _state;

        public Randomizer(LiveSplitState state)
        {
            //Expression.DNF("(a + (b | c | e) | f + (a | b))");
            _state = state;
            _settings = new ComponentSettings();
            _gameMemory = new GameMemory(_settings);
        }

        public override void Dispose()
        {
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
            if (!_gameMemory.ProcessHook())
                return;
            _gameMemory.Update(state);
        }
    }
}
