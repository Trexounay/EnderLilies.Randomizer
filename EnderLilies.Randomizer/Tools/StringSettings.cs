using System;
using System.Collections;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace EnderLilies.Randomizer.Tools
{
    class BaseConverter
    {
        //Convert number in string representation from base:from to base:to. 
        //Return result as a string
        public static String Convert(String from, String to, String source)
        {
            String s = "";
            foreach (var c in source)
                if (from.Contains(c))
                    s += c;
            //Return error if input is empty
            if (String.IsNullOrEmpty(s))
            {
                return ("Error: Nothing in Input String");
            }
            
            //convert string to an array of integer digits representing number in base:from
            int il = s.Length;
            int[] fs = new int[il];
            int k = 0;
            for (int i = s.Length - 1; i >= 0; i--)
            {
                fs[k++] = (int)(from.IndexOf(s[i]));
            }
            //find how many digits the output needs
            int ol = il * (from.Length / to.Length + 1);
            int[] ts = new int[ol + 10]; //assign accumulation array
            int[] cums = new int[ol + 10]; //assign the result array
            ts[0] = 1; //initialize array with number 1 
                       //evaluate the output
            for (int i = 0; i < il; i++) //for each input digit
            {
                for (int j = 0; j < ol; j++) //add the input digit 
                                             // times (base:to from^i) to the output cumulator
                {
                    cums[j] += ts[j] * fs[i];
                    int temp = cums[j];
                    int rem = 0;
                    int ip = j;
                    do // fix up any remainders in base:to
                    {
                        rem = temp / to.Length;
                        cums[ip] = temp - rem * to.Length; ip++;
                        cums[ip] += rem;
                        temp = cums[ip];
                    }
                    while (temp >= to.Length);
                }

                //calculate the next power from^i) in base:to format
                for (int j = 0; j < ol; j++)
                {
                    ts[j] = ts[j] * from.Length;
                }
                for (int j = 0; j < ol; j++) //check for any remainders
                {
                    int temp = ts[j];
                    int rem = 0;
                    int ip = j;
                    do  //fix up any remainders
                    {
                        rem = temp / to.Length;
                        ts[ip] = temp - rem * to.Length; ip++;
                        ts[ip] += rem;
                        temp = ts[ip];
                    }
                    while (temp >= to.Length);
                }
            }

            //convert the output to string format (digits 0,to-1 converted to 0-Z characters) 
            StringBuilder sb = new StringBuilder(ol);
            bool first = false; //leading zero flag
            for (int i = ol; i >= 0; i--)
            {
                if (cums[i] != 0) { first = true; }
                if (!first) { continue; }
                sb.Append(to[cums[i]]);
            }
            if (sb.Length == 0)
                sb.Append(to[0]);
            return sb.ToString();
        }
    }

    class StringSettings
    {
        public BitArray store;
        public int _internal;

        public StringSettings()
        {
            this.store = new BitArray(0);
            this._internal = 555;
        }

        public StringSettings(string conf)
        {
            string result = BaseConverter.Convert(alphabet, "01", conf);
            this.store = new BitArray((from r in result select r == '1' ? true : false).Reverse().ToArray());
            this._internal = 0;
        }

        public byte[] ToByteArray(object value)
        {
            int rawsize = Marshal.SizeOf(value);
            byte[] rawdata = new byte[rawsize];
            GCHandle handle =
                GCHandle.Alloc(rawdata,
                GCHandleType.Pinned);
            Marshal.StructureToPtr(value,
                handle.AddrOfPinnedObject(),
                false);
            handle.Free();
            return rawdata;
        }

        public void Push(object value, int max = 1)
        {
            int count = (int)(Math.Log(max, 2) + 1);
            var bits = ToByteArray(value);
            var current = new BitArray(bits);
            current.Length = count;
            var prev = store.Length;
            store.Length += current.Length;
            for (int i = 0; i < current.Length; ++i)
                store.Set(prev + i, current[i]);
        }
        public void Push(object[] value, int[] max)
        {
            for (int i = value.Length - 1; i >= 0 ; --i)
                Push(value[i], max[i]);
        }

        public bool PullBool()
        {
            if (_internal >= store.Length)
                return false;
            _internal++;
            return store[_internal - 1];
        }
        public int PullInt(int max)
        {
            int result = 0;
            int count = (int)(Math.Log(max, 2) + 1);
            for (int i = 0; i < count && (_internal + i) < store.Length; ++i)
            {
                if (store[_internal + i])
                    result |= 1 << i;
            }
            _internal += count;
            return result;
        }

        public void Clear()
        {
            BitArray store = new BitArray(0);
        }

        public object Get(int max = 1)
        {
            return null;
        }
        const string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        public override string ToString()
        {
            StringBuilder sb = new StringBuilder(store.Length);
            for (int i = store.Length - 1; i >= 0; --i)
            {
                sb.Append(store[i] ? "1" : "0");
            }
            string a = BaseConverter.Convert("01", alphabet, sb.ToString());
            return a;
        }
    }
}
