using System;
using System.Collections.Generic;
using System.IO;
using System.Reflection;

namespace EnderLilies.Randomizer
{
    public class RandomSession
    {
        public Dictionary<string, string> result;
        public RandomSession(int seed, GameGraph g)
        {
            RNG.stream = new Random(seed);
            result = g.Solve("Start");
            List<string> items = new List<string>(g.locations.Values);
            items.AddRange(g.extra_items);
            foreach (string v in result.Values)
                items.Remove(v);
            items.Sort();
            var loc = new List<string>(g.locations.Keys);
            loc.Shuffle();
            foreach (var k in loc)
            {
                if (!result.ContainsKey(k))
                {
                    result[k] = items[0];
                    items.RemoveAt(0);
                }
            }
        }
        public void WriteFile()
        {
            string dir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location) ?? String.Empty;
            string path = Path.Combine(dir, "EnderLiliesSeed.txt");
            using (StreamWriter writer = new StreamWriter(path))
            {
                foreach (var k in result)
                    writer.WriteLine(k.Key + ":" + k.Value);
            }
        }
    }
}
