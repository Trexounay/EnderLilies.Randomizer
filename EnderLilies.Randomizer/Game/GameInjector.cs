using LiveSplit.ComponentUtil;
using System;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace EnderLilies.Randomizer
{
    class GameInjector
    {
        private const string _gameDLL = "EnderLilies.Game.dll";

        static Process GetGameProcess()
        {
            return Process.GetProcessesByName("EnderLiliesSteam-Win64-Shipping").FirstOrDefault(p => !p.HasExited);
        }

        static bool ProcessHasModule(Process process, string module)
        {
            return process.ModulesWow64Safe().Any(m => m.ModuleName.ToLower() == module.ToLower());
        }

        static string GetGameDLLPath()
        {
            string dir = Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location) ?? String.Empty;
            return Path.Combine(dir, _gameDLL);
        }

        static void InjectDLL(Process process, string path)
        {
            IntPtr loadLibraryAddr = SafeNativeMethods.GetProcAddress(SafeNativeMethods.GetModuleHandle("kernel32.dll"), "LoadLibraryA");
            Debug.WriteLine("LoadLibraryA address = 0x" + loadLibraryAddr.ToString("X"));
            if (loadLibraryAddr == IntPtr.Zero)
                throw new Exception("Couldn't locate LoadLibraryA");

            IntPtr mem = IntPtr.Zero;
            IntPtr hThread = IntPtr.Zero;
            uint len = 0;

            try
            {
                // allocate memory in the remote process
                if ((mem = SafeNativeMethods.VirtualAllocEx(process.Handle, IntPtr.Zero, (uint)path.Length,
                    SafeNativeMethods.AllocationType.Commit | SafeNativeMethods.AllocationType.Reserve,
                    SafeNativeMethods.MemoryProtection.ReadWrite)) == IntPtr.Zero)
                    throw new Exception("cannot allocate");

                byte[] bytes = Encoding.ASCII.GetBytes(path + "\0");
                len = (uint)bytes.Length;
                uint written;
                // write dll path in the allocated memory process
                if (!SafeNativeMethods.WriteProcessMemory(process.Handle, mem, bytes, len, out written))
                    throw new Exception("cannot write");

                // create a remote thread at the location of the LoadLibraryA kernel function
                // with the memory location of our dll path as parameter
                if ((hThread = SafeNativeMethods.CreateRemoteThread(process.Handle, IntPtr.Zero, 0, loadLibraryAddr, mem, 0, IntPtr.Zero))
                    == IntPtr.Zero)
                    throw new Exception("cannot create thread");

                SafeNativeMethods.WaitForSingleObject(hThread, 0xFFFFFFFF); // INFINITE
            }
            finally
            {
                if (mem != IntPtr.Zero && len > 0)
                    SafeNativeMethods.VirtualFreeEx(process.Handle, mem, len, SafeNativeMethods.FreeType.Release);
                if (hThread != IntPtr.Zero)
                    SafeNativeMethods.CloseHandle(hThread);
            }
        }

        public void Update()
        {
            Process game = GetGameProcess();
            if (game != null && !ProcessHasModule(game, _gameDLL))
                InjectDLL(game, GetGameDLLPath());
        }
    }
}
