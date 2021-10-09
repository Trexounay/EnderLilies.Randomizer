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
        public Version Version => Version.Parse("2.0.3");

        public string UpdateName => ComponentName;
        public string UpdateURL => "https://raw.githubusercontent.com/Trexounay/EnderLilies.Randomizer/master/Update/";
        public string XMLURL => "https://raw.githubusercontent.com/Trexounay/EnderLilies.Randomizer/master/Update/update.xml";

        public IComponent Create(LiveSplitState state) => new EnderLiliesRandomizer(state);
    }
}
