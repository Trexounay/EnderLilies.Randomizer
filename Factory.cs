using System;
using LiveSplit.Model;
using LiveSplit.UI.Components;

[assembly: ComponentFactory(typeof(Factory))]
namespace LiveSplit.UI.Components
{
    public class Factory : IComponentFactory
    {
        public string ComponentName => "Randomizer for Ender Lilies";
        public string Description => "beta !";
        public ComponentCategory Category => ComponentCategory.Control;
        public Version Version => Version.Parse("0.1.0");

        public string UpdateName => ComponentName;
        public string UpdateURL => "http://livesplit.org/update/";
        public string XMLURL => "";

        public IComponent Create(LiveSplitState state) => new Randomizer(state);
    }
}
