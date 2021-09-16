using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    static class Tools
    {
        public static Random rng = new Random();

        public static void Shuffle<T>(this IList<T> list)
        {
            int n = list.Count;
            while (n > 1)
            {
                n--;
                int k = rng.Next(n + 1);
                T value = list[k];
                list[k] = list[n];
                list[n] = value;
            }
        }

        public static T RandomWithWeigh<T>(this IList<T> list, Dictionary<T, float> weights)
        {
            float sum = 0;
            foreach (var entry in list)
                sum += weights[entry];
            double result = rng.NextDouble() * sum;
            sum = 0;
            foreach (var entry in list)
            {
                sum += weights[entry];
                if (sum > result)
                    return entry;
            }
            return list[list.Count - 1];
        }
    }
}
