using EnderLilies.Randomizer.Logic;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Windows.Forms;

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
            _settings.PropertyChangedEnded += _settings_PropertyChanged;
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

        (int, string) _startingRoom = (0, "Start");
        public void Generate(int seed, bool write = true)
        {
            GameGraph = GetGraph();
            RNG.stream = new Random(seed);
            List<string> startingSpirits = new List<string>()
            {
                "umbral",
                "gerrod",
                "silva",
                "julius",
                "ulv",
                "eleine",
                "hoenir",
                "faden",
                "siegrid",
                "youth",
                "defender",
                "bird",
                "dog",
                "archer",
                "crypt",
                "fungal",
                "floral",
                "sentinel",
                "subject",
                "executionner",
                "sinner",
                "champion",
                "elder",
                "chief",
                "aegis",
                "fellwyrm",
            };
            List<(int, string)> rooms = new List<(int, string)>()
        {
            ( 0, "Start" ),
            ( 3, "Cellar" ),
            ( 5, "CathedralCloister" ),
            ( 9, "SaintsPassage" ),
            ( 12, "Crossroads" ),
            ( 19, "CollapsedShack" ),
            ( 23, "BridgeHead" ),
            ( 35, "RuinedCastleCellar" ),
            ( 38, "GuestChamber" ),
            ( 41, "MaelstromRemparts" ),
            //( 48, "KingsChamber" ),
            //( 51, "TowerAlcove" ),
            ( 55, "BastionGates" ),
            ( 61, "Courtyard" ),
            ( 62, "SecondSpireChamber" ),
            //( 68, "MonumentOfTheWind" ),
            ( 72, "MourningHall" ),
            ( 78, "DryadLake" ),
            ( 83, "WitchsHermitage" ),
            ( 87, "CovenHalls" ),
            ( 91, "BottomOfTheWell" ),
            ( 93, "Charnel" ),
            ( 103, "Ossuary" ),
            ( 106, "GreatHall" ),
            ( 115, "Aqueduct" ),
            ( 123, "Cells" ),
            ( 132, "DarkChamber" ),
            ( 138, "ExecutionGrounds" ),
            ( 145, "Lab1" ),
            ( 150, "Lab2" ),
            //new MapItem(154, "Lab3"),
            //new MapItem(156, "Lab4"),
            //new MapItem(166, "BlightedHeart"),
        };

            Dictionary<string, string> progressItem = new Dictionary<string, string>()
            {
                {"Aptitude.dash_attack", "Aptitude.dash,Aptitude.dash_attack"},
                {"Aptitude.dash", "Aptitude.dash,Aptitude.dash_attack"},
            };

            string weapon = "umbral";
            var startingWeapons = startingSpirits.Where((s, i) => _settings.HasSpirit(i)).ToArray();
            if (startingWeapons.Length > 0)
                weapon = startingWeapons[RNG.stream.Next(0, startingWeapons.Length)];
            _startingRoom = (0, "Start");
            if (_settings.StartingRooms > 0)
            {
                var startingRooms = rooms.Where((s, i) => _settings.HasRoom(i)).ToArray();
                _startingRoom = startingRooms[RNG.stream.Next(0, startingRooms.Length)];
            }
            result = GameGraph.Solve(_startingRoom.Item2, weapon, _settings.MetaProgression, _settings.ShuffleRooms);
            if (result == null)
                return;
            items = new List<string>(GameGraph.checks.Values);

            items.AddRange(GameGraph.extra_items);
            foreach (var pair in result)
                items.Remove(pair.Value);
            if (_settings.MetaProgression)
                foreach (string v in GameGraph.keys)
                    if (items.Contains(v))
                        items.Remove(v);
            var loc = new List<string>(GameGraph.checks.Keys.Select<int, string>(i => GameGraph.nodes[i]));
            items.Sort(new CompareItems());
            loc.Shuffle();

            if (_settings.ShuffleTablets)
                ShuffleTablets(loc);

            foreach (var k in loc)
            {
                if (!result.ContainsKey(k) && items.Count > 0)
                {
                    result[k] = items[0];
                    items.RemoveAt(0);
                }
                if (_settings.DashProgressive && result.ContainsKey(k) && progressItem.ContainsKey(result[k]))
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
            string[] unused_relics = {
                "Passive.i_passive_post_damage_invincibility",
                "Passive.i_passive_maxhpup_LV3",
                "Passive.i_passive_dmgup_grounded_LV2",
                "Passive.i_passive_dmgup_airborne_LV2",
                "Passive.i_passive_spirit_maxcast_count_up_LV3",
                "Passive.i_passive_recast_time_cut_LV3",
                "Passive.i_passive_stamina_up"
            };

            GameGraph g = LogicParser.FromJson(_settings.FilePath);
            if (!_settings.UnusedRelics)
                foreach (var relic in unused_relics)
                    g.extra_items.Remove(relic);
            foreach (var k in g.checks)
            {
                foreach (var filter in pool)
                {
                    if (k.Value.StartsWith(filter.Key) && !filter.Value)
                    {
                        g.AddResult(g.Node(k.Key), k.Value);
                        break;
                    }
                }
            }
            ShufflePool = g.checks.Count - g.results.Count;
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
                //if (_settings.ShuffleRooms)
                    //writer.WriteLine("SETTINGS:shuffle_rooms");
                if (_settings.ShuffleBGM)
                    writer.WriteLine("SETTINGS:shuffle_bgm");
                if (_settings.ShuffleEnemies)
                    writer.WriteLine("SETTINGS:shuffle_enemies");
                if (_settings.NGPlus)
                    writer.WriteLine("SETTINGS:NG+");
                if (_settings.StartWeaponUsesAncientSouls)
                    writer.WriteLine("SETTINGS:force_ancient_souls");
                if (_settings.MinibossesChapter)
                    writer.WriteLine("SETTINGS:minibosses_chapter");
                if (_startingRoom.Item1 > 0)
                    writer.WriteLine("SETTINGS:starting_room=" + _startingRoom.Item1.ToString());
                if (_settings.ShuffleWeaponUpgrades)
                    writer.WriteLine("SETTINGS:shuffle_upgrades");
                if (_settings.MaxChapter < 9)
                    writer.WriteLine("SETTINGS:max_chapter=" + (_settings.MaxChapter + 1).ToString());
                if (_settings.StartChapter > 0)
                    writer.WriteLine("SETTINGS:start_chapter=" + (_settings.StartChapter + 1).ToString());
                if (sort)
                    keys.Sort();
                foreach (var k in keys)
                {
                    int id = GameGraph.nodes.IndexOf(k);
                    if (GameGraph.checks.ContainsKey(id) && result[k] == GameGraph.checks[id])
                        continue;
                    if (GameGraph.transitions.ContainsKey(id) && result[k] == GameGraph.transitions[id])
                        continue;
                    writer.WriteLine(k + ":" + result[k]);
                }
            }
        }
    }
}
