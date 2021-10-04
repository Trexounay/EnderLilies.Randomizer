using System;
using EnderLilies.Randomizer;
using LiveSplit.Model;
using LiveSplit.UI.Components;

[assembly: ComponentFactory(typeof(EnderLiliesFactory))]
namespace EnderLilies.Randomizer
{
    public class EnderLiliesFactory : IComponentFactory
    {
        public string ComponentName => "Randomizer for Ender Lilies";
        public string Description => "A randomizer for ENDER LILIES: Quietius of the Knights";
        public ComponentCategory Category => ComponentCategory.Control;
        public Version Version => Version.Parse("1.0.4");

        public string UpdateName => ComponentName;
        public string UpdateURL => "https://github.com/Trexounay/EnderLilies.Randomizer";
        public string XMLURL => "https://raw.githubusercontent.com/Trexounay/EnderLilies.Randomizer/master/update.xml";

        public IComponent Create(LiveSplitState state) => new EnderLiliesRandomizer(state);
    }
}
