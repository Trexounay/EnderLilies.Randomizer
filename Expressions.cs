using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    public enum TokenType
    {
        lpar,
        rpar,
        and,
        or,
        symbol,
        none
    }

    public class Token
    {
        public string content = "";
        public TokenType type = TokenType.none;

        public Token(TokenType type = TokenType.none, string content = "")
        {
            this.type = type;
            this.content = content;
        }
    }


    public class Node
    {
        Node _left;
        Node _right;
        TokenType _type;

        public Node Left
        {
            get { return _left; }
            set { _left = value; }
        }
        public Node Right
        {
            get { return _right; }
            set { _right = value; }
        }
        public TokenType Type
        {
            get { return _type; }
            set { _type = value; }
        }
        public string _data;

        public Node(TokenType type = TokenType.none, Node left = null, Node right = null, string data = "")
        {
            _type = type;
            _data = data;
            _left = left;
            _right = right;
        }
        public string Flatten()
        {
            if (Type == TokenType.symbol)
                return _data;
            if (Type == TokenType.none)
                return "";

            string left = "null";
            string right = "null";
            if (Left != null)
                left = Left.Flatten();
            if (Right != null)
                right = Right.Flatten();
            return left + (Type == TokenType.and ? "+" : "|") + right;
        }

        public override string ToString()
        {
            if (Type == TokenType.symbol)
                return _data;
            if (Type == TokenType.none)
                return "None";

            string left = "null";
            string right = "null";
            if (Left != null)
            {
                left = Left.ToString();
                if (Left.Type != TokenType.symbol && Left.Type != Type)
                    left = "(" + left + ")";
            }
            if (Right != null)
            {
                right = Right.ToString();
                if (Right.Type != TokenType.symbol && Right.Type != Type)
                    right = "(" + right + ")";
            }
            return left + " " + Type + " " + right;
        }
    }


    public class Expression
    {
        public static string DNF(string expr)
        {
            Node n = new Node();
            Parse(Tokenize(expr), ref n);
            n = DistributeLoop(n);
            return n.Flatten();
        }

        public static Node DistributeLoop(Node tree)
        {
            if (tree.Left != null)
                tree.Left = DistributeLoop(tree.Left);
            if (tree.Right != null)
                tree.Right = DistributeLoop(tree.Right);
            while (true)
            {
                Node n = Distribute(tree);
                if (n != tree)
                    tree = DistributeLoop(n);
                else
                    return n;
            }
        }

        public static Node Distribute(Node tree)
        {
            if (tree.Type == TokenType.and)
            {
                if (tree.Left.Type == TokenType.or)
                {
                    Node left = tree.Left.Left;
                    Node right = tree.Left.Right;
                    return new Node(TokenType.or,
                        new Node(TokenType.and, left, tree.Right),
                        new Node(TokenType.and, right, tree.Right));
                }
                else if (tree.Right.Type == TokenType.or)
                {
                    Node left = tree.Right.Left;
                    Node right = tree.Right.Right;
                    return new Node(TokenType.or,
                        new Node(TokenType.and, tree.Left, left),
                        new Node(TokenType.and, tree.Left, right));
                }
            }
            return tree;
        }

        public static List<Token> Tokenize(string expr)
        {
            List<Token> tokens = new List<Token>();
            Dictionary<char, TokenType> ops = new Dictionary<char, TokenType>
            {
                {'|', TokenType.or},
                {'+', TokenType.and},
                {'(', TokenType.lpar},
                {')', TokenType.rpar},
            };
            var pos = 0;
            var len = expr.Length;
            var token = "";

            while (pos < len)
            {
                var c = expr[pos];
                if (ops.ContainsKey(c))
                {
                    if (token.Trim() != "")
                        tokens.Add(new Token(TokenType.symbol, token.Trim()));
                    tokens.Add(new Token(ops[c], c.ToString()));
                    token = "";
                }
                else
                    token += c;
                pos += 1;
            }
            if (token.Trim() != "")
                tokens.Add(new Token(TokenType.symbol, token.Trim()));
            return tokens;
        }

        static int Parse(List<Token> tokens, ref Node tree, int i = 0)
        {
            Stack<Node> symbols = new Stack<Node>();
            Stack<Node> ops = new Stack<Node>();
            for (; i < tokens.Count; ++i)
            {
                Token t = tokens[i];
                if (t.type == TokenType.symbol)
                    symbols.Push(new Node(t.type, null, null, t.content));
                else if (t.type == TokenType.and || t.type == TokenType.or)
                {
                    if (ops.Count > 0 && t.type >= ops.Peek().Type)
                    {
                        Node last = ops.Pop();
                        last.Right = symbols.Pop();
                        last.Left = symbols.Pop();
                        symbols.Push(last);
                    }
                    ops.Push(new Node(t.type));
                }
                else if (t.type == TokenType.lpar)
                {
                    var n = new Node(TokenType.none);
                    i = Parse(tokens, ref n, i + 1);
                    symbols.Push(n);
                }
                if (t.type == TokenType.rpar)
                    break;
            }
            while (ops.Count > 0)
            {
                tree = ops.Pop();
                tree.Right = symbols.Pop();
                tree.Left = symbols.Pop();
                symbols.Push(tree);
            }
            if (symbols.Count > 0)
                tree = symbols.Pop();
            return i;
        }
    }
}
