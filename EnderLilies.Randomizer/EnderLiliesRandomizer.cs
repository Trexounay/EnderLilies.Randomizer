using EnderLilies.Randomizer.Properties;
using LiveSplit.Model;
using LiveSplit.UI;
using LiveSplit.UI.Components;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Runtime.InteropServices;
using System.Runtime.InteropServices.ComTypes;
using System.Windows.Forms;
using System.Xml;
using WebSocketSharp;

namespace EnderLilies.Randomizer
{
    public class EnderLiliesRandomizer : LogicComponent
    {
        public override string ComponentName => "Ender Lilies Randomizer";

        private ComponentSettings _settings;
        private GameInjector _gameInjector;
        private GameTracker _tracker;
        private RandomSession _session;
        private ArchipelagoSession _AP;

        public EnderLiliesRandomizer(LiveSplitState state)
        {
            //AppDomain.CurrentDomain.AssemblyResolve += CurrentDomain_AssemblyResolve;

            _settings = new ComponentSettings();
            _gameInjector = new GameInjector(_settings);
            _tracker = new GameTracker();
            _session = new RandomSession(_settings);
            _AP = new ArchipelagoSession(_settings);

            ContextMenuControls = new Dictionary<string, Action>
            {
                { "Launch Ender Lilies", () => _settings.launchRequested = _settings.HasExePath },
                { "Reroll Seed", () => _settings.Seed = new System.Random().Next() },
                { "Connect to Archipelago", () => _AP.APConnectionRequested() },
            };
        }

        private Assembly CurrentDomain_AssemblyResolve(object sender, ResolveEventArgs args)
        {
            string name = args.Name.Substring(0, args.Name.IndexOf(","));

            Dictionary<string, byte[]> dlls = new Dictionary<string, byte[]> {
                { "Newtonsoft.Json",  Resources.Newtonsoft_Json},
                { "Archipelago.MultiClient.Net",  Resources.Archipelago_MultiClient_Net},
            };
            if (dlls.ContainsKey(name))
                return Assembly.Load(dlls[name]);
            return null;
        }

        public override void Dispose()
        {
            _tracker.Stop();
        }

        public override XmlNode GetSettings(XmlDocument document)
        {
            return _settings.GetSettings(document);
        }

        public override Control GetSettingsControl(LayoutMode mode)
        {
            _settings.Mode = mode;
            return _settings;
        }

        public override void SetSettings(XmlNode settings)
        {
            _settings.SetSettings(settings);
        }

        public override void Update(IInvalidator invalidator, LiveSplitState state, float width, float height, LayoutMode mode)
        {
            _gameInjector.Update();
            _AP.Update(_gameInjector.IsInjected);
            if (_settings.UATServer)
            {
                _tracker.Update();
                if (!_tracker.ServerConnected())
                    _settings.UATServer = false;
            }
            else
                _tracker.Stop();
        } 
    }
}
