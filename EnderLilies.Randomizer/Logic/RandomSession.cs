using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
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

        public void ShuffleTablets(List<string> locations)
        {
            List<Predicate<string>> areas = new List<Predicate<string>>
            {
                (s) => s.StartsWith("Castle"),
                (s) => s.StartsWith("Cave"),
                (s) => s.StartsWith("Forest"),
                (s) => s.StartsWith("Outside") || s.StartsWith("Fort"),
                (s) => s.StartsWith("Oubliette"),
                (s) => s.StartsWith("Village"),
                (s) => s.StartsWith("Swamp") || s.StartsWith("Abyss"),
            };
            int i = items.IndexOf("Generic.i_FinalPassivePart_Up");
            int relic_index = 0;
            while (i != -1)
            {
                var location = locations.First((l) => !result.ContainsKey(l) && areas[relic_index](l));
                if (!string.IsNullOrEmpty(location))
                {
                    result[location] = items[i];
                    relic_index++;
                    items.RemoveAt(i);
                }
                i = items.IndexOf("Generic.i_FinalPassivePart_Up");
            }
        }
        public void Generate(int seed, bool write = true)
        {
            GameGraph = GetGraph();
            RNG.stream = new Random(seed);
            string weapon = "umbral";
            if (_settings.RandomWeapon)
            {
                List<string> startingWeapons = new List<string>() {
                    "umbral",
                    "gerrod",
                    "silva",
                    "julius",
                    "ulv",
                    //"eleine",
                    //"hoenir",
                    //"faden"
                };
                weapon = startingWeapons[RNG.stream.Next(0, startingWeapons.Count)];
            }
            result = GameGraph.Solve("Start", weapon, _settings.MetaProgression);
            if (result == null)
                return;
            items = new List<string>(GameGraph.locations.Values);
            items.AddRange(GameGraph.extra_items);
            foreach (string v in result.Values)
                items.Remove(v);

            var loc = new List<string>(GameGraph.locations.Keys);
            items.Sort(new CompareItems());
            loc.Shuffle();

            if (_settings.ShuffleTablets)
                ShuffleTablets(loc);
            Dictionary<string, string> progressItem = new Dictionary<string, string>()
            {
                {"Aptitude.dash_attack", "Aptitude.dash,Aptitude.dash_attack"},
                {"Aptitude.dash", "Aptitude.dash,Aptitude.dash_attack"},
            };

            foreach (var k in loc)
            {
                if (!result.ContainsKey(k))
                {
                    result[k] = items[0];
                    items.RemoveAt(0);
                }
                if (_settings.DashProgressive && progressItem.ContainsKey(result[k]))
                    result[k] = progressItem[result[k]];
            }
            if (write)
                WriteFile();
        }

        public GameGraph GetGraph()
        {
            Dictionary<string, bool> pool = new Dictionary<string, bool>()
            {
                { "Parameter.i_maxHP", _settings.ShuffleAmulets },
                { "Generic.i_SpiritCurrency", _settings.ShuffleBlights },
                { "Generic.i_PassiveSlot", _settings.ShuffleChains },
                { "Tip.", _settings.ShuffleFindings },
                { "Passive.", _settings.ShuffleRelics },
                { "Spirit.", _settings.ShuffleSpirits },
                { "Generic.i_FinalPassivePart_Up", _settings.ShuffleTablets },
                { "Generic.i_Heal", _settings.ShuffleWishes },
            };
            string[] unused_relics ={
                "Passive.i_passive_post_damage_invincibility",
                "Passive.i_passive_maxhpup_LV3",
                "Passive.i_passive_dmgup_grounded_LV2",
                "Passive.i_passive_dmgup_airborne_LV2",
                "Passive.i_passive_spirit_maxcast_count_up_LV3",
                "Passive.i_passive_recast_time_cut_LV3",
                "Passive.i_passive_stamina_up"
            };

            GameGraph g = SerializableGraph.Import(_settings.FilePath);
            if (!_settings.UnusedRelics)
                foreach (var relic in unused_relics)
                    g.extra_items.Remove(relic);
            foreach (var k in g.locations)
            {
                foreach (var filter in pool)
                {
                    if (k.Value.StartsWith(filter.Key) && !filter.Value)
                    {
                        g.AddResult(k.Key, k.Value);
                        break;
                    }
                }
            }
            ShufflePool = g.locations.Count - g._forced.Count;
            return g;
        }

        public void WriteFile(bool sort = false)
        {
            string dir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location) ?? String.Empty;
            string path = Path.Combine(dir, "EnderLiliesSeed.txt");
            using (StreamWriter writer = new StreamWriter(path))
            {
                writer.WriteLine("SEED:" + _settings.Seed.ToString());
                var keys = new List<string>(result.Keys);
                if (_settings.SkinOverride > 0)
                    writer.WriteLine("SETTINGS:override_skin=" + (_settings.SkinOverride - 1).ToString());
                if (_settings.ShuffleSlots)
                    writer.WriteLine("SETTINGS:shuffle_slots");
                if (_settings.ShuffleRooms)
                    writer.WriteLine("SETTINGS:shuffle_rooms");
                if (_settings.NGPlus)
                    writer.WriteLine("SETTINGS:NG+");
                if (_settings.StartWeaponUsesAncientSouls)
                    writer.WriteLine("SETTINGS:force_ancient_souls");
                if (_settings.MaxChapter < 9)
                    writer.WriteLine("SETTINGS:max_chapter=" + (_settings.MaxChapter + 1).ToString());
                if (_settings.StartChapter > 0)
                    writer.WriteLine("SETTINGS:start_chapter=" + (_settings.StartChapter + 1).ToString());
                if (sort)
                    keys.Sort();
                foreach (var k in keys)
                {
                    if (result[k] != GameGraph.locations[k])
                        writer.WriteLine(k + ":" + result[k]);
                }
            }
        }
    }
}
