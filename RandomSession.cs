using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    public class RandomSession
    {
        static public List<string> _bosses = new List<string>()
        {
            "Gerrod",
            "Silva",
            "Julius",
            "Ulv",
            "Eleine",
            "Hoenir",
            "Faden",
            "Siegrid",
            "Youth",
            "Defender",
            "Merchant",
            "Maiden",
            "Archer",
            "Crypt",
            "Fungal",
            "Floral",
            "Sentinel",
            "Subject",
            "Executionner",
            "Sinner",
            "Champion",
            "Elder",
            "Chief",
            "Aegis",
            "Fellwyrm",
        };

        static public List<string> _passives = new List<string>()
        {
            "Jump",
            "Swim",
            "Slam",
            "Dash",
            "Ults",
            "Hook",
            "Claw",
            "Charge",
            "Door"
        };

        List<string> _relics;

        public Dictionary<string, string> weapons = new Dictionary<string, string>();
        public Dictionary<string, string> aptitudes1 = new Dictionary<string, string>();
        public Dictionary<string, string> aptitudes2 = new Dictionary<string, string>();
        public Dictionary<string, string> relics = new Dictionary<string, string>();

        public Dictionary<string, string> result;

        public RandomSession(int seed, GameGraph g)
        {
            _relics = GameMemory._relics;
            if (seed != 0)
                Tools.rng = new Random(seed);
            result =  g.Solve("Siegrid");

            List<string> remaining_weapons = new List<string>(_bosses);
            List<string> remaining_passives = new List<string>(_passives);
            List<string> remaining_relics = new List<string>(_relics);
            List<string> remaining_out_relics = new List<string>()
            {
                "Unused1",
                "Unused2",
                "Unused3",
                "Unused4",
                "Unused5",
                "Unused6",
                "Unused7",
            };

            foreach (string boss in result.Keys)
            {
                if (_relics.Contains(boss))
                {
                    relics[boss] = result[boss];
                    remaining_relics.Remove(result[boss]);
                    continue;
                }
                if (_bosses.Contains(result[boss]))
                {
                    weapons[boss] = result[boss];
                    remaining_weapons.Remove(result[boss]);
                }
                if (_passives.Contains(result[boss]))
                {
                    aptitudes1[boss] = result[boss];
                    remaining_passives.Remove(result[boss]);
                    if (result[boss] == "Charge")
                        aptitudes2[boss] = "Thrust";
                }
                if (_relics.Contains(result[boss]))
                {
                    if (remaining_out_relics.Count > 0)
                    {
                        relics[remaining_out_relics[0]] = result[boss];
                        remaining_out_relics.RemoveAt(0);
                    }
                    aptitudes1[boss] = result[boss];
                    remaining_relics.Remove(result[boss]);
                }
            }

            List<string> shuffled_bosses = new List<string>(_bosses);
            shuffled_bosses.Shuffle();
            remaining_weapons.Shuffle();
            foreach (string boss in shuffled_bosses)
            {
                if (remaining_weapons.Count > 0 && !weapons.ContainsKey(boss))
                {
                    if (remaining_weapons.Count > 1 && remaining_weapons[0] == boss)
                    {
                        weapons[boss] = remaining_weapons[1];
                        remaining_weapons.RemoveAt(1);
                    }
                    else
                    {
                        weapons[boss] = remaining_weapons[0];
                        remaining_weapons.RemoveAt(0);
                    }
                }
                if (remaining_passives.Count > 0 && !aptitudes1.ContainsKey(boss))
                {
                    aptitudes1[boss] = remaining_passives[0];
                    remaining_passives.RemoveAt(0);
                }
            }

            List<string> shuffled_relics = new List<string>(_relics);
            shuffled_relics.Shuffle();
            foreach (string relic in shuffled_relics)
            {
                if (remaining_relics.Count > 0 && !relics.ContainsKey(relic))
                {
                    relics[relic] = remaining_relics[0];
                    remaining_relics.RemoveAt(0);
                }
            }
        }
    }
}
