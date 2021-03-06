using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using System.Web.Script.Serialization;

namespace EnderLilies.Randomizer
{
    public class GameGraph
    {
        public struct LogicLog
        {
            public int node;
            public int reachables;
            public int items;
            public float odds;
        }

        public class Edge
        {
            public int from;
            public int to;
            public bool twoways = false;
            public HashSet<int> conditions;

            public Edge(int v1, int v2, IEnumerable<int> keys)
            {
                this.from = v1;
                this.to = v2;
                this.conditions = new HashSet<int>(keys);
            }

            public HashSet<int> GetMissing(IEnumerable<int> items)
            {
                HashSet<int> missing = new HashSet<int>(conditions);
                missing.ExceptWith(items);
                return missing;
            }
        }

        public List<string> keys = new List<string>();
        public List<string> nodes = new List<string>();

        public Dictionary<string, string> aliases = new Dictionary<string, string>();
        public Dictionary<string, string> locations = new Dictionary<string, string>();
        public List<string> extra_items = new List<string>();

        public string GetNode(int i)
        {
            return nodes[i];
        }
        public string GetKey(int i)
        {
            return keys[i];
        }

        public HashSet<Edge> edges = new HashSet<Edge>();

        public List<LogicLog> logic = new List<LogicLog>();

        public GameGraph()
        {
        }

        public Dictionary<int, int> _forced = new Dictionary<int, int>();


        public HashSet<int> UpdateReachables(
            ref List<int> new_empty,
            ref List<Edge> unsolved,
            ref HashSet<int> reachables,
            Dictionary<int, int> result)
        {
            HashSet<int> items = new HashSet<int>();
            foreach (var n in result)
                if (reachables.Contains(n.Key))
                    items.Add(n.Value);
            bool done = false;
            HashSet<int> missing = new HashSet<int>();
            while (!done)
            {
                done = true;
                missing.Clear();
                int min = keys.Count;
                List<Edge> connections = new List<Edge>(unsolved);
                foreach (Edge e in connections)
                {
                    int other = 0;
                    if (reachables.Contains(e.from) && reachables.Contains(e.to) ||
                        (reachables.Contains(e.to) && !e.twoways))
                    {
                        unsolved.Remove(e);
                        done = false;
                        continue;
                    }
                    if (reachables.Contains(e.from))
                        other = e.to;
                    else if (reachables.Contains(e.to) && e.twoways)
                        other = e.from;
                    else
                        continue;
                    HashSet<int> requires = e.GetMissing(items);
                    if (requires.Count == 0)
                    {
                        unsolved.Remove(e);
                        reachables.Add(other);
                        if (result.ContainsKey(other))
                            items.Add(result[other]);
                        else
                            new_empty.Add(other);
                        done = false;
                    }
                    else
                    {
                        if (requires.Count <= min || missing.Count == 0)
                        {
                            if (requires.Count < min || missing.Count == 0)
                            {
                                missing.Clear();
                                min = requires.Count;
                            }
                            missing.UnionWith(requires);
                        }
                    }
                }
            }
            missing.ExceptWith(result.Values);
            return missing;
        }

        int dash = -1;
        int pierce = -1;

        public Dictionary<string, string> Solve(string start, string weapon = "umbral", bool metaprogression = false)
        {
            AddResult("starting_weapon", weapon);
            Dictionary<int, int> result = new Dictionary<int, int>(_forced);
            logic.Clear();

            dash = keys.IndexOf(aliases["dash"]);
            pierce = keys.IndexOf(aliases["pierce"]);

            if (aliases.ContainsKey(start))
                start = aliases[start];
            HashSet<int> reachables = new HashSet<int>();
            int start_id = nodes.IndexOf(start);
            if (start_id < 0)
                return null;
            List<Edge> unsolved = new List<Edge>(edges);
            unsolved.Shuffle();
            List<int> empty_nodes = new List<int>();
            Dictionary<int, float> inv_weights = new Dictionary<int, float>();
            for (int i = 0; i < nodes.Count; ++i)
                inv_weights[i] = 1;
            reachables.Add(start_id);
            reachables.Add(nodes.IndexOf("starting_weapon"));
            if (!result.ContainsKey(start_id))
                empty_nodes.Add(start_id);
            bool done = false;

            HashSet<int> missings = new HashSet<int>();
            logic.Add(new LogicLog() { node = nodes.IndexOf("starting_weapon"), reachables = 1 });
            while (!done)
            {
                done = true;
                List<int> new_empty_nodes = new List<int>();
                missings = UpdateReachables(ref new_empty_nodes, ref unsolved, ref reachables, result);
                new_empty_nodes.Shuffle();
                int count = empty_nodes.Count + new_empty_nodes.Count;
                if (missings.Count > 0 && count > 0)
                {
                    done = false;
                    empty_nodes.AddRange(new_empty_nodes);
                    int node = empty_nodes.Last();
                    if (!metaprogression)
                    {
                        float sum = 0;
                        Dictionary<int, float> weights = new Dictionary<int, float>();
                        foreach (var n in empty_nodes)
                        {
                            weights[n] = 1.0f - (inv_weights[n] * (1 - (1.0f / count)));
                            sum += weights[n];
                        }
                        foreach (var n in empty_nodes)
                        {
                            weights[n] = (sum / count) / weights[n];
                            inv_weights[n] *= 1.0f - (weights[n] / (count * sum));
                        }
                        node = empty_nodes.RandomWithWeigh(weights);
                        inv_weights.Remove(node);
                    }
                    var pool = missings.ToArray();
                    int item = pool[RNG.stream.Next(pool.Length)];
                    result[node] = item;
                    logic.Add(new LogicLog() { node = node, reachables = reachables.Count });
                    empty_nodes.Remove(node);
                }
            }

            Dictionary<string, string> data = new Dictionary<string, string>();
            foreach (KeyValuePair<int, int> pair in result)
                data.Add(nodes[pair.Key], keys[pair.Value]);
            for (int i = 0; i < nodes.Count; i++)
            {
                if (!reachables.Contains(i))
                    Console.WriteLine(nodes[i]);
            }
            logic.Add(new LogicLog() { node = -1, reachables = reachables.Count, items = data.Count() });
            return data;
        }

        public void AddKey(string key)
        {
            if (aliases.ContainsKey(key))
                key = aliases[key];
            if (key != "" && !keys.Contains(key))
                keys.Add(key);
        }
        public void AddKeys(IEnumerable<string> keys)
        {
            foreach (string k in keys)
                AddKey(k);
        }

        public void AddNode(string node)
        {
            if (aliases.ContainsKey(node))
                node = aliases[node];
            if (!nodes.Contains(node))
                nodes.Add(node);
        }
        public void AddNodes(IEnumerable<string> nodes)
        {
            foreach (string n in nodes)
                AddNode(n);
        }

        public void AddConnection(string node1, string node2, bool twoways = false, params string[] keys)
        {
            if (aliases.ContainsKey(node1))
                node1 = aliases[node1];
            if (aliases.ContainsKey(node2))
                node2 = aliases[node2];
            List<string> ks = new List<string>();
            foreach (var k in keys)
            {
                if (aliases.ContainsKey(k))
                    ks.Add(aliases[k]);
                else
                    ks.Add(k);
            }

            AddNode(node1);
            AddNode(node2);
            AddKeys(ks);

            Edge edge = new Edge(nodes.IndexOf(node1), nodes.IndexOf(node2), from key in ks where key != "" select this.keys.IndexOf(key));
            edge.twoways = twoways;
            this.edges.Add(edge);
        }

        public void AddResult(string node, string key)
        {
            if (aliases.ContainsKey(key))
                key = aliases[key];
            if (aliases.ContainsKey(node))
                node = aliases[node];
            AddNode(node);
            AddKey(key);
            _forced[nodes.IndexOf(node)] = keys.IndexOf(key);
        }

        public void AddResults(Dictionary<string, string> forced)
        {
            foreach (KeyValuePair<string, string> pair in forced)
                AddResult(pair.Key, pair.Value);
        }
    }

    public class SerializableGraph
    {
        public class SerializedEdge
        {
            public string from = "";
            public string to = "";
            public string requires = null;
            public bool twoways = true;
        }
        public Dictionary<string, string> aliases = new Dictionary<string, string>();
        public Dictionary<string, string> forced = new Dictionary<string, string>();
        public List<SerializedEdge> connections = new List<SerializedEdge>();
        public Dictionary<string, string> macros = new Dictionary<string, string>();
        public Dictionary<string, bool> settings = new Dictionary<string, bool>();
        public Dictionary<string, string> locations = new Dictionary<string, string>();
        public List<string> extra_items = new List<string>();

        public static GameGraph Import(string path)
        {
            var serializer = new JavaScriptSerializer()
            {
                MaxJsonLength = int.MaxValue
            };
            string json = "";
            try
            {
                json = File.ReadAllText(path);
            }
            catch
            {
                return new GameGraph();
            }
            SerializableGraph data = serializer.Deserialize<SerializableGraph>(json);


            List<string> macros = new List<string>(data.macros.Keys);
            macros.Sort((s2, s1) => s1.Length.CompareTo(s2.Length));
            bool replacements = true;
            while (replacements)
            {
                replacements = false;
                foreach (string m1 in macros)
                    foreach (string m2 in macros)
                        if (data.macros[m1].Contains(m2))
                        {
                            data.macros[m1] = data.macros[m1].Replace(m2, "(" + data.macros[m2] + ")");
                            replacements = true;
                        }
            }
            GameGraph graph = new GameGraph();
            graph.aliases = data.aliases;
            graph.extra_items = data.extra_items;
            graph.locations = data.locations;
            graph.AddResults(data.forced);
            foreach (SerializableGraph.SerializedEdge edge in data.connections)
            {
                string requires = edge.requires;
                foreach (string m in macros)
                    requires = requires.Replace(m, "(" + data.macros[m] + ")");
                requires = Expression.DNF(requires);
                string[] or_parts = requires.Split('|');
                foreach (string or_part in or_parts)
                {
                    string[] and_parts = or_part.Split('+').Select<string, string>((s) => s.Trim()).ToArray();
                    graph.AddConnection(edge.from, edge.to, edge.twoways, and_parts);
                }
            }
            return graph;
        }
    }
}
