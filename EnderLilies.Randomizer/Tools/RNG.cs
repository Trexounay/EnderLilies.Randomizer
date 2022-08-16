using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    static class RNG
    {
        public static Random stream = new Random();

        public static void Shuffle<T>(this IList<T> list)
        {
            int n = list.Count;
            while (n > 1)
            {
                n--;
                int k = stream.Next(n + 1);
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
            double result = stream.NextDouble() * sum;
            sum = 0;
            foreach (var entry in list)
            {
                sum += weights[entry];
                if (sum > result)
                    return entry;
            }
            return list[list.Count - 1];
        }
        public static Dictionary<int, float> GetWeights(int[] weights)
        {
            Dictionary<int, float> ret = new Dictionary<int, float>();
            float sum = 0;
            for (int i = 0; i < weights.Length; ++i)
                if (weights[i] > 0)
                    sum += 1.0f / weights[i];
            for (int i = 0; i < weights.Length; ++i)
                if (weights[i] > 0)
                    ret[i] = (1.0f / weights[i]) / sum;
            return ret;
        }
    }
}
