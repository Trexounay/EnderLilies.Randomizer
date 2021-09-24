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

        Dictionary<int, int> forced = new Dictionary<int, int>();

        public string GetNode(int i)
        {
            return nodes[i];
        }
        public string GetKey(int i)
        {
            return keys[i];
        }

        public HashSet<Edge> edges = new HashSet<Edge>();

        public GameGraph()
        {
        }

        public Dictionary<string, string> Solve(string start)
        {
            HashSet<int> reachables = new HashSet<int>();
            Dictionary<int, int> result = new Dictionary<int, int>(forced);
            int start_id = nodes.IndexOf(start);
            if (start_id < 0)
                return null;
            HashSet<Edge> unsolved = new HashSet<Edge>(edges);
            List<int> empty_nodes = new List<int>();
            Dictionary<int, float> inv_weights = new Dictionary<int, float>();
            for (int i = 0; i < nodes.Count; ++i)
                inv_weights[i] = 1;

            //result[start] = -1;
            reachables.Add(start_id);
            if (!result.ContainsKey(start_id))
                empty_nodes.Add(start_id);
            bool done = false;
            while (!done)
            {
                HashSet<HashSet<int>> missings = new HashSet<HashSet<int>>();
                while (!done)
                {
                    done = true;
                    missings.Clear();
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
                        HashSet<int> requires = e.GetMissing(result.Values);
                        if (requires.Count == 0)
                        {
                            unsolved.Remove(e);
                            reachables.Add(other);
                            if (!result.ContainsKey(other))
                                empty_nodes.Add(other);
                            done = false;
                        }
                        else if (requires.Count <= empty_nodes.Count)
                            missings.Add(requires);
                    }
                }
                if (missings.Count > 0 && empty_nodes.Count > 0)
                {
                    HashSet<int>[] options = missings.ToArray();
                    var items = new List<int>(options[Tools.rng.Next(options.Length)]);
                    items.Shuffle();
                    foreach (int item in items)
                    {
                        float sum = 0;
                        float count = empty_nodes.Count;
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
                        int node = empty_nodes.RandomWithWeigh(weights);
                        //int node = empty_nodes[Tools.rng.Next(empty_nodes.Count)];
                        result[node] = item;
                        inv_weights.Remove(node);
                        empty_nodes.Remove(node);
                    }
                    done = false;
                }
            }

            Dictionary<string, string> data = new Dictionary<string, string>();
            foreach (KeyValuePair<int, int> pair in result)
                data.Add(nodes[pair.Key], keys[pair.Value]);
            return data;
        }

        public void AddKey(string key)
        {
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
            AddNode(node1);
            AddNode(node2);
            AddKeys(keys);

            Edge edge = new Edge(nodes.IndexOf(node1), nodes.IndexOf(node2), from key in keys where key != "" select this.keys.IndexOf(key));
            edge.twoways = twoways;
            this.edges.Add(edge);
        }

        public void AddResult(string node, string key)
        {
            AddNode(node);
            AddKey(key);
            forced[nodes.IndexOf(node)] = keys.IndexOf(key);
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
        public Dictionary<string, string> forced = new Dictionary<string, string>();
        public List<SerializedEdge> connections = new List<SerializedEdge>();
        public Dictionary<string, string> macros = new Dictionary<string, string>();
        public Dictionary<string, bool> settings = new Dictionary<string, bool>();

        public static GameGraph Import(string path)
        {
            var serializer = new JavaScriptSerializer()
            {
                MaxJsonLength = int.MaxValue
            };

            string json = File.ReadAllText(path);
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
