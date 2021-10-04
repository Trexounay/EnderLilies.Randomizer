using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    public class RandomSession
    {
        public Dictionary<string, string> result;
        public RandomSession(int seed, GameGraph g)
        {
            result = g.Solve("Start");
            List<string> items = new List<string>(g.locations.Values);
            items.AddRange(g.extra_items);
            foreach (string v in result.Values)
                items.Remove(v);
            items.Shuffle();
            foreach (var k in g.locations)
            {
                if (!result.ContainsKey(k.Key))
                {
                    result[k.Key] = items[0];
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
