using System;
using System.Collections.Generic;
using System.IO;
using System.Web.Script.Serialization;

namespace EnderLilies.Randomizer.Logic
{
    public class SerializableGraph
    {
        public class Node
        {
            public string content = "";
            public string rules = "";
        }
        public Dictionary<string, string> items_alias = new Dictionary<string, string>();
        public Dictionary<string, string> macros = new Dictionary<string, string>();
        public List<string> extra_items = new List<string>();
        public Dictionary<string, string> tags = new Dictionary<string, string>();
        public Dictionary<string, string> nodes_alias = new Dictionary<string, string>();
        public Dictionary<string, Node> nodes = new Dictionary<string, Node>();
    }

    class LogicParser
    {
        public static GameGraph FromJson(string path)
        {
            string json = "";
            try
            {
                json = File.ReadAllText(path);
            }
            catch
            {
                return new GameGraph();
            }
            var serializer = new JavaScriptSerializer() { MaxJsonLength = int.MaxValue };
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
            foreach (var a in data.items_alias)
                graph.aliases.Add(a.Key, a.Value);
            foreach (var a in data.nodes_alias)
                graph.aliases.Add(a.Key, a.Value);
            graph.extra_items = data.extra_items;
            graph.AddNodes(data.nodes.Keys);
            foreach (var tag in data.tags)
                graph.tags[tag.Key] = graph.AddNode(tag.Value);
            foreach (var room in data.nodes)
            {
                string rules = room.Value.rules;
                foreach (string m in macros)
                    rules = rules.Replace(m, "(" + data.macros[m] + ")");
                rules = Expression.DNF(rules);
                string[] or_parts = rules.Split(new char[] {'|'}, StringSplitOptions.RemoveEmptyEntries);

                if (!string.IsNullOrEmpty(room.Value.content))
                    graph.AddNode(room.Key, room.Value.content);
                foreach (string or_part in or_parts)
                {
                    string[] and_parts = or_part.Split(new char[] { '+' }, StringSplitOptions.RemoveEmptyEntries); //.Select<string, string>((s) => s.Trim()).Select<string, string>((s) => s.Trim()).ToArray();
                    graph.AddRule(room.Key, and_parts);
                }
                /*
                if (data.tags.ContainsKey(room.Value.content))
                {
                    var loc = data.tags[room.Value.content];
                    graph.AddRule(loc, room.Key);
                }*/
            }
            return graph;
        }
    }
}
