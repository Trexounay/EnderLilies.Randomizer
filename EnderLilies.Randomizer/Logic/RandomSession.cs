using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;

namespace EnderLilies.Randomizer
{
    public class RandomSession
    {
        public Dictionary<string, string> result;
        ComponentSettings _settings;
        public GameGraph GameGraph;
        public int ShufflePool;

        public RandomSession(ComponentSettings settings)
        {
            _settings = settings;
            _settings.PropertyChanged += _settings_PropertyChanged;
        }

        private void _settings_PropertyChanged(object sender, System.ComponentModel.PropertyChangedEventArgs e)
        {
            Generate(_settings.Seed);
            _settings.GeneratePreview(this);
        }

        class CompareItems : IComparer<string>
        {
            public int Compare(string x, string y)
            {
                string[] prio = {
                    "Generic.i_FinalPassivePart_Up",
                    "Passive.i_passive_ignore_damage_area",
                    "Aptitude.",
                    "Spirit.",
                    "Passive.i_passive_parry",
                    "Generic.i_SpiritCurrencyLv3",
                    "Generic.i_SpiritCurrencyLv1_LL",
                    "Generic.i_SpiritCurrencyLv2_LL",
                    "Generic.i_PassiveSlot_Up",
                    "Generic.i_HealPower_Up",
                    "Passive.",
                    "Parameter.",
                    "Generic.",
                    "Tip.",
                };
                int a = prio.Length;
                int b = prio.Length;
                for (int i = 0; i < prio.Length; ++i)
                {
                    if (x.StartsWith(prio[i]) && i < a)
                        a = i;
                    if (y.StartsWith(prio[i]) && i < b)
                        b = i;
                }
                return a.CompareTo(b);
            }
        }

        public List<string> items;
        public void Generate(int seed)
        {
            GameGraph = GetGraph();
            RNG.stream = new Random(seed);
            result = GameGraph.Solve("Start");
            if (result == null)
                return;
            items = new List<string>(GameGraph.locations.Values);
            items.AddRange(GameGraph.extra_items);
            foreach (string v in result.Values)
                items.Remove(v);
            items.Sort(new CompareItems());
            var loc = new List<string>(GameGraph.locations.Keys);
            loc.Shuffle();
            foreach (var k in loc)
            {
                if (!result.ContainsKey(k))
                {
                    result[k] = items[0];
                    items.RemoveAt(0);
                }
            }
            WriteFile();
        }

        public GameGraph GetGraph()
        {
            GameGraph g = SerializableGraph.Import(_settings.FilePath);
            foreach (var k in g.locations)
            {
                if (k.Value.StartsWith("Parameter.i_maxHP") && !_settings.ShuffleAmulets)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                if (k.Value.StartsWith("Generic.i_SpiritCurrency") && !_settings.ShuffleBlights)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                else if (k.Value.StartsWith("Generic.i_PassiveSlot") && !_settings.ShuffleChains)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                else if (k.Value.StartsWith("Tip.") && !_settings.ShuffleFindings)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                else if (k.Value.StartsWith("Passive.") && !_settings.ShuffleRelics)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                else if (k.Value.StartsWith("Spirit.") && !_settings.ShuffleSpirits)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                else if (k.Value.StartsWith("Generic.i_FinalPassivePart_Up") && !_settings.ShuffleTablets)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                else if (k.Value.StartsWith("Generic.i_Heal") && !_settings.ShuffleWishes)
                {
                    g.AddResult(k.Key, k.Value);
                    continue;
                }
                Console.WriteLine(k.Value);
            }
            ShufflePool = g.locations.Count - g.result.Count;
            return g;
        }

        public void WriteFile()
        {
            string dir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location) ?? String.Empty;
            string path = Path.Combine(dir, "EnderLiliesSeed.txt");
            using (StreamWriter writer = new StreamWriter(path))
            {
                foreach (var k in result)
                {
                    if (k.Value != GameGraph.locations[k.Key])
                        writer.WriteLine(k.Key + ":" + k.Value);
                }
            }
        }
    }
}
