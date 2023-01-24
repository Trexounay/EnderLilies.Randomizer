using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

namespace EnderLilies.Randomizer
{
    public class GameGraph
    {
        class Conditions
        {
            class Rule
            {
                HashSet<int> nodes_condition;
                HashSet<int> keys_condition;

                public Rule(IEnumerable<int> nodes_condition, IEnumerable<int> keys_condition)
                {
                    this.nodes_condition = new HashSet<int>(nodes_condition);
                    this.keys_condition = new HashSet<int>(keys_condition);
                }

                public bool MatchLocation(BitArray reachables)
                {
                    foreach (var n in nodes_condition)
                        if (!reachables[n])
                            return false;
                    return true;
                }

                public bool MatchItem(BitArray keys)
                {
                    foreach (var n in keys_condition)
                        if (!keys[n])
                            return false;
                    return true;
                }

                public bool Match(BitArray reachables, BitArray keys)
                {
                    if (!MatchLocation(reachables))
                        return false;
                    if (!MatchItem(keys))
                        return false;
                    return true;
                }
                public IEnumerable<int> GetMissingItems(BitArray keys)
                {
                    HashSet<int> items = new HashSet<int>();
                    foreach (var n in keys_condition)
                        if (!keys[n])
                            items.Add(n);
                    return items;
                }
            }
            List<Rule> rules = new List<Rule>();

            public bool Match(BitArray reachables, BitArray keys)
            {
                foreach (var r in rules)
                    if (r.Match(reachables, keys))
                        return true;
                return false;
            }

            public IEnumerable<int> MissingItems(BitArray reachables, BitArray keys)
            {
                IEnumerable<int> items = null;
                foreach (var r in rules)
                {
                    if (r.MatchLocation(reachables))
                    {
                        IEnumerable<int> missing = r.GetMissingItems(keys);
                        if (missing != null && (items == null || missing.Count() < items.Count()))
                            items = missing;
                    }
                }
                return items;
            }

            public void Add(IEnumerable<int> nodes_condition, IEnumerable<int> keys_condition)
            {
                rules.Add(new Rule(nodes_condition, keys_condition));
            }
        }

        public class LogicLog
        {
            public int node;
            public int item;
            public int reachables;
        }

        public List<LogicLog> logic = new List<LogicLog>();

        Dictionary<int, Conditions> conditions = new Dictionary<int, Conditions>();
        public Dictionary<int, int> results = new Dictionary<int, int>();

        // items
        public List<string> keys = new List<string>();
        // locations
        public List<string> nodes = new List<string>();
        // Translation from user defined name to game name
        public Dictionary<string, string> aliases = new Dictionary<string, string>();
        // Room locations to spawn the player
        public Dictionary<string, int> tags = new Dictionary<string, int>();


        // Checks name and their original items
        public Dictionary<int, string> checks = new Dictionary<int, string>();
        public Dictionary<int, string> transitions = new Dictionary<int, string>();
        public List<string> extra_items = new List<string>();


        bool GetReachables(ref BitArray new_nodes, ref BitArray new_keys)
        {
            bool need_update = false;
            bool repeat = false;
            do
            {
                repeat = false;
                foreach (KeyValuePair<int, Conditions> location in conditions)
                {
                    if (!new_nodes[location.Key] && location.Value.Match(new_nodes, new_keys))
                    {
                        new_nodes[location.Key] = true;
                        if (results.ContainsKey(location.Key))
                            new_keys[results[location.Key]] = true;
                        repeat = true;
                        if (checks.ContainsKey(location.Key))
                            need_update = true;
                    }
                }
            }
            while (repeat);
            return need_update;
        }

        public bool AddProgressItem(int key, bool metaprogression, ref BitArray reachables, ref BitArray items, ref BitArray new_nodes, ref BitArray new_keys, ref int[] weights, ref List<int> empty_locations, ref BitArray meta)
        {
            return true;
        }

        int max_item_count = 0;

        public Dictionary<string, string> Solve(string start, string weapon = "umbral", bool metaprogression = false, bool roomrandom = false)
        {
            if (aliases.ContainsKey(start))
                start = aliases[start];

            Dictionary<string, string> data = new Dictionary<string, string>();
            if (roomrandom)
            {
                    var trans = new List<string>(transitions.Values);
                    trans.Shuffle();
                    foreach (var id in transitions)
                    {
                        var i = trans.Count - 1;
                        var tag = trans[i];
                        data[Node(id.Key)] = trans[i];
                        AddRule(tag, Node(id.Key));
                        trans.RemoveAt(i);
                    }
            }
            /*
            var area = new Dictionary<string, string>()
                {
                    { "Map.map_church_08.1", "Map.map_village_01.0" },
                    { "Map.map_church_08.2", "Map.map_forest_01.C8" },
                    { "Map.map_village_11.1", "Map.map_castle_01.0" },
                    { "Map.map_village_12.C1", "Map.map_cave_01.V12" },
                    { "Map.map_village_15.F1", "Map.map_fort_01.V15" },
                    { "Map.map_castle_07.F1", "Map.map_fort_01.C7" },
                    { "Map.map_cave_22.F2", "Map.map_fort_02.C22" },
                    { "Map.map_forest_07.O1", "Map.map_oubliette_01.F7" },
                    { "Map.map_forest_09.S2","Map.map_swamp_02.F9" },
                    { "Map.map_oubliette_17.S6", "Map.map_swamp_06.O17" },
                };
            */
            else
                foreach (var t in transitions)
                    AddRule(t.Value, Node(t.Key));

            if (aliases.ContainsKey(weapon))
                weapon = aliases[weapon];

            logic.Clear();
            BitArray reachables = new BitArray(nodes.Count);
            BitArray items = new BitArray(keys.Count);
            int[] weights = new int[nodes.Count];
            int start_id = nodes.IndexOf(start);
            int start_weapon_id = nodes.IndexOf("starting_weapon");

            reachables[start_id] = true;
            reachables[start_weapon_id] = true;
            AddResult("starting_weapon", weapon);
            foreach (KeyValuePair<int, int> r in results)
            {
                if ((reachables[r.Key] || r.Key == start_weapon_id) && r.Value < items.Count)
                    items[r.Value] = true;
            }
            GetReachables(ref reachables, ref items);
            logic.Add(new LogicLog() { node = start_id, reachables = checks.Count(p => reachables[p.Key]), item = results[start_weapon_id] });

            // find missing items
            List<int> missing_keys = new List<int>(Enumerable.Range(0, keys.Count).Where(i => !results.ContainsValue(i)));
            missing_keys.Shuffle();

            List<int> empty_locations = new List<int>();

            bool progress;
            BitArray meta = new BitArray(reachables);


            do
            {
                progress = false;
                for (int nb_items = 1; !progress && nb_items <= missing_keys.Count && nb_items < max_item_count; nb_items++)
                {
                    // check 1 by 1 item that would grant progress
                    foreach (IEnumerable<int> subitems in Numerics.Combinations(missing_keys, nb_items))
                    {
                        BitArray new_nodes = new BitArray(reachables);
                        BitArray new_keys = new BitArray(items);
                        foreach (int key in subitems)
                            new_keys[key] = true;
                        if (GetReachables(ref new_nodes, ref new_keys))
                        {
                            List<int> meta_locations = new List<int>();
                            int checks_count_before = 0;
                            int checks_count_after = 0;
                            foreach (KeyValuePair<int, string> check in checks)
                            {
                                if (reachables[check.Key])
                                {
                                    weights[check.Key]++;
                                    if (!results.ContainsKey(check.Key) && meta[check.Key])
                                        meta_locations.Add(check.Key);
                                    checks_count_before++;
                                }
                                if (new_nodes[check.Key])
                                    checks_count_after++;
                            }
                            meta = new BitArray(reachables);
                            meta.Xor(new_nodes);
                            meta_locations.Shuffle();
                            empty_locations.AddRange(meta_locations);
                            //for (int i = 0; i < meta_locations.Count; i++)
                            //{
                            //Console.WriteLine(i.ToString() + " " + Node(meta_locations[i]));
                            //}

                            foreach (int key in subitems)
                            {
                                if (empty_locations.Count == 0)
                                    goto Done;
                                int node = empty_locations.Last();
                                if (!metaprogression)
                                    node = empty_locations.RandomWithWeigh(RNG.GetWeights(weights));
                                results[node] = key;
                                empty_locations.Remove(node);
                                missing_keys.Remove(key);
                                logic.Add(new LogicLog() { node = node, reachables = checks_count_before, item = key });
                                progress = true;
                            }
                            logic[logic.Count - 1].reachables = checks_count_after;
                            reachables = new_nodes;
                            items = new_keys;
                            if (nb_items > 1)
                                break;
                        }
                    }
                }
            }
            while (progress);

        Done:
            logic.Add(new LogicLog() { node = -1, reachables = checks.Count(p => reachables[p.Key]) });
            foreach (KeyValuePair<int, int> pair in results)
                data.Add(nodes[pair.Key], keys[pair.Value]);
            return data;
        }
        public string Node(int i)
        {
            return nodes[i];
        }
        public string Key(int i)
        {
            return keys[i];
        }

        public void AddResult(string node, string key)
        {
            if (aliases.ContainsKey(key))
                key = aliases[key];
            if (aliases.ContainsKey(node))
                node = aliases[node];
            int n = AddNode(node);
            int k = AddKey(key);
            results[n] = k;
        }

        public int AddKey(string key)
        {
            if (aliases.ContainsKey(key))
                key = aliases[key];
            if (key != "" && !keys.Contains(key))
                keys.Add(key);
            return keys.IndexOf(key);
        }
        public void AddKeys(IEnumerable<string> keys)
        {
            foreach (string k in keys)
                AddKey(k);
        }

        public int AddNode(string node, string check = null)
        {
            if (aliases.ContainsKey(node))
                node = aliases[node];
            if (!nodes.Contains(node))
                nodes.Add(node);
            int id = nodes.IndexOf(node);
            if (check != null)
            {
                if (aliases.ContainsKey(check))
                    check = aliases[check];
                if (check.StartsWith("Map."))
                    transitions[id] = check;
                else
                    checks[id] = check;
            }
            return id;
        }

        public void AddNodes(IEnumerable<string> nodes)
        {
            foreach (string n in nodes)
                AddNode(n);
        }

        public void AddRule(string location, params string[] tokens)
        {
            HashSet<int> nodes_condition = new HashSet<int>();
            HashSet<int> keys_condition = new HashSet<int>();

            if (aliases.ContainsKey(location))
                location = aliases[location];

            int node = AddNode(location);
            foreach (var r in tokens)
            {
                string condition = r;
                if (aliases.ContainsKey(condition))
                    condition = aliases[condition];
                if (nodes.Contains(condition))
                    nodes_condition.Add(nodes.IndexOf(condition));
                else
                    keys_condition.Add(AddKey(condition));
            }
            max_item_count = Math.Max(max_item_count, keys_condition.Count);
            if (nodes_condition.Count == 0)
                throw new Exception("unlinked node");
            if (!conditions.ContainsKey(node))
                conditions[node] = new Conditions();
            conditions[node].Add(nodes_condition, keys_condition);
        }
    }
}
