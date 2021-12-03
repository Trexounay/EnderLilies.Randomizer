﻿namespace EnderLilies.Randomizer
{
    partial class ComponentSettings
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.seedText = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.Randomize = new System.Windows.Forms.Button();
            this.tabSettings = new System.Windows.Forms.TabControl();
            this.SettingsPage = new System.Windows.Forms.TabPage();
            this.dashProgressive = new System.Windows.Forms.CheckBox();
            this.startWeaponUsesAncientSouls = new System.Windows.Forms.CheckBox();
            this.randomWeapon = new System.Windows.Forms.CheckBox();
            this.shuffleRooms = new System.Windows.Forms.CheckBox();
            this.uatserver = new System.Windows.Forms.CheckBox();
            this.maxChapterText = new System.Windows.Forms.Label();
            this.maxChapter = new System.Windows.Forms.TrackBar();
            this.startChapterText = new System.Windows.Forms.Label();
            this.startChapter = new System.Windows.Forms.TrackBar();
            this.unusedRelics = new System.Windows.Forms.CheckBox();
            this.shuffleSlots = new System.Windows.Forms.CheckBox();
            this.skinLevelText = new System.Windows.Forms.Label();
            this.ngPlusSetting = new System.Windows.Forms.CheckBox();
            this.skinLevel = new System.Windows.Forms.TrackBar();
            this.shuffleGroup = new System.Windows.Forms.GroupBox();
            this.shuffleWishes = new System.Windows.Forms.CheckBox();
            this.shuffleSpirits = new System.Windows.Forms.CheckBox();
            this.shuffleChains = new System.Windows.Forms.CheckBox();
            this.shuffleTablets = new System.Windows.Forms.CheckBox();
            this.shuffleAmulets = new System.Windows.Forms.CheckBox();
            this.shuffleFindings = new System.Windows.Forms.CheckBox();
            this.shuffleBlights = new System.Windows.Forms.CheckBox();
            this.shuffleRelics = new System.Windows.Forms.CheckBox();
            this.checkfile = new System.Windows.Forms.Label();
            this.open = new System.Windows.Forms.Button();
            this.path = new System.Windows.Forms.TextBox();
            this.chooseFile = new System.Windows.Forms.Button();
            this.LogicPage = new System.Windows.Forms.TabPage();
            this.LogicPreviewGridview = new System.Windows.Forms.DataGridView();
            this.LocationColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ItemColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.ReachablesColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.label1 = new System.Windows.Forms.Label();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.metaprogression = new System.Windows.Forms.CheckBox();
            this.metaprogressTooltip = new System.Windows.Forms.ToolTip(this.components);
            this.componentSettingsBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.groupBox1.SuspendLayout();
            this.tabSettings.SuspendLayout();
            this.SettingsPage.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.maxChapter)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.startChapter)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.skinLevel)).BeginInit();
            this.shuffleGroup.SuspendLayout();
            this.LogicPage.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.LogicPreviewGridview)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.componentSettingsBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.DefaultExt = "*.json";
            this.openFileDialog1.FileName = "EnderLilies.Randomizer.json";
            this.openFileDialog1.Filter = "Json Files|*.json";
            // 
            // seedText
            // 
            this.seedText.Location = new System.Drawing.Point(44, 17);
            this.seedText.Name = "seedText";
            this.seedText.Size = new System.Drawing.Size(111, 20);
            this.seedText.TabIndex = 6;
            this.seedText.Text = "0";
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.Randomize);
            this.groupBox1.Controls.Add(this.tabSettings);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.seedText);
            this.groupBox1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.groupBox1.Location = new System.Drawing.Point(3, 1);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(472, 558);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Randomizer";
            // 
            // Randomize
            // 
            this.Randomize.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.Randomize.BackgroundImage = global::EnderLilies.Randomizer.Properties.Resources._600px_Refresh_icon;
            this.Randomize.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.Randomize.Font = new System.Drawing.Font("Bahnschrift Light", 16F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Randomize.Location = new System.Drawing.Point(414, 11);
            this.Randomize.Name = "Randomize";
            this.Randomize.Size = new System.Drawing.Size(50, 50);
            this.Randomize.TabIndex = 3;
            this.Randomize.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.Randomize.UseVisualStyleBackColor = true;
            this.Randomize.Click += new System.EventHandler(this.Randomize_Click);
            // 
            // tabSettings
            // 
            this.tabSettings.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.tabSettings.Controls.Add(this.SettingsPage);
            this.tabSettings.Controls.Add(this.LogicPage);
            this.tabSettings.Location = new System.Drawing.Point(2, 44);
            this.tabSettings.Name = "tabSettings";
            this.tabSettings.SelectedIndex = 0;
            this.tabSettings.Size = new System.Drawing.Size(467, 511);
            this.tabSettings.TabIndex = 13;
            // 
            // SettingsPage
            // 
            this.SettingsPage.Controls.Add(this.metaprogression);
            this.SettingsPage.Controls.Add(this.dashProgressive);
            this.SettingsPage.Controls.Add(this.startWeaponUsesAncientSouls);
            this.SettingsPage.Controls.Add(this.randomWeapon);
            this.SettingsPage.Controls.Add(this.shuffleRooms);
            this.SettingsPage.Controls.Add(this.uatserver);
            this.SettingsPage.Controls.Add(this.maxChapterText);
            this.SettingsPage.Controls.Add(this.maxChapter);
            this.SettingsPage.Controls.Add(this.startChapterText);
            this.SettingsPage.Controls.Add(this.startChapter);
            this.SettingsPage.Controls.Add(this.unusedRelics);
            this.SettingsPage.Controls.Add(this.shuffleSlots);
            this.SettingsPage.Controls.Add(this.skinLevelText);
            this.SettingsPage.Controls.Add(this.ngPlusSetting);
            this.SettingsPage.Controls.Add(this.skinLevel);
            this.SettingsPage.Controls.Add(this.shuffleGroup);
            this.SettingsPage.Controls.Add(this.checkfile);
            this.SettingsPage.Controls.Add(this.open);
            this.SettingsPage.Controls.Add(this.path);
            this.SettingsPage.Controls.Add(this.chooseFile);
            this.SettingsPage.Location = new System.Drawing.Point(4, 22);
            this.SettingsPage.Name = "SettingsPage";
            this.SettingsPage.Padding = new System.Windows.Forms.Padding(3);
            this.SettingsPage.Size = new System.Drawing.Size(459, 485);
            this.SettingsPage.TabIndex = 3;
            this.SettingsPage.Text = "Settings";
            this.SettingsPage.UseVisualStyleBackColor = true;
            // 
            // dashProgressive
            // 
            this.dashProgressive.AutoSize = true;
            this.dashProgressive.Checked = true;
            this.dashProgressive.CheckState = System.Windows.Forms.CheckState.Checked;
            this.dashProgressive.Location = new System.Drawing.Point(42, 285);
            this.dashProgressive.Name = "dashProgressive";
            this.dashProgressive.Size = new System.Drawing.Size(188, 17);
            this.dashProgressive.TabIndex = 30;
            this.dashProgressive.Text = "Dash always before piercing lance";
            this.dashProgressive.UseVisualStyleBackColor = true;
            // 
            // startWeaponUsesAncientSouls
            // 
            this.startWeaponUsesAncientSouls.AutoSize = true;
            this.startWeaponUsesAncientSouls.Checked = true;
            this.startWeaponUsesAncientSouls.CheckState = System.Windows.Forms.CheckState.Checked;
            this.startWeaponUsesAncientSouls.Location = new System.Drawing.Point(60, 262);
            this.startWeaponUsesAncientSouls.Name = "startWeaponUsesAncientSouls";
            this.startWeaponUsesAncientSouls.Size = new System.Drawing.Size(154, 17);
            this.startWeaponUsesAncientSouls.TabIndex = 29;
            this.startWeaponUsesAncientSouls.Text = "Upgrade with ancient souls";
            this.startWeaponUsesAncientSouls.UseVisualStyleBackColor = true;
            // 
            // randomWeapon
            // 
            this.randomWeapon.AutoSize = true;
            this.randomWeapon.Location = new System.Drawing.Point(42, 239);
            this.randomWeapon.Name = "randomWeapon";
            this.randomWeapon.Size = new System.Drawing.Size(144, 17);
            this.randomWeapon.TabIndex = 28;
            this.randomWeapon.Text = "Random starting weapon";
            this.randomWeapon.UseVisualStyleBackColor = true;
            // 
            // shuffleRooms
            // 
            this.shuffleRooms.AutoSize = true;
            this.shuffleRooms.Location = new System.Drawing.Point(42, 216);
            this.shuffleRooms.Name = "shuffleRooms";
            this.shuffleRooms.Size = new System.Drawing.Size(90, 17);
            this.shuffleRooms.TabIndex = 27;
            this.shuffleRooms.Text = "Shuffle rooms";
            this.shuffleRooms.UseVisualStyleBackColor = true;
            // 
            // uatserver
            // 
            this.uatserver.AutoSize = true;
            this.uatserver.Checked = true;
            this.uatserver.CheckState = System.Windows.Forms.CheckState.Checked;
            this.uatserver.Location = new System.Drawing.Point(305, 410);
            this.uatserver.Name = "uatserver";
            this.uatserver.Size = new System.Drawing.Size(149, 17);
            this.uatserver.TabIndex = 26;
            this.uatserver.Text = "Send items to PopTracker";
            this.uatserver.UseVisualStyleBackColor = true;
            // 
            // maxChapterText
            // 
            this.maxChapterText.AutoSize = true;
            this.maxChapterText.Location = new System.Drawing.Point(297, 249);
            this.maxChapterText.Name = "maxChapterText";
            this.maxChapterText.Size = new System.Drawing.Size(67, 13);
            this.maxChapterText.TabIndex = 25;
            this.maxChapterText.Text = "Max Chapter";
            // 
            // maxChapter
            // 
            this.maxChapter.BackColor = System.Drawing.SystemColors.Window;
            this.maxChapter.LargeChange = 0;
            this.maxChapter.Location = new System.Drawing.Point(246, 265);
            this.maxChapter.Maximum = 9;
            this.maxChapter.Name = "maxChapter";
            this.maxChapter.Size = new System.Drawing.Size(186, 45);
            this.maxChapter.TabIndex = 24;
            this.maxChapter.Value = 9;
            // 
            // startChapterText
            // 
            this.startChapterText.AutoSize = true;
            this.startChapterText.Location = new System.Drawing.Point(297, 198);
            this.startChapterText.Name = "startChapterText";
            this.startChapterText.Size = new System.Drawing.Size(69, 13);
            this.startChapterText.TabIndex = 23;
            this.startChapterText.Text = "Start Chapter";
            // 
            // startChapter
            // 
            this.startChapter.BackColor = System.Drawing.SystemColors.Window;
            this.startChapter.LargeChange = 1;
            this.startChapter.Location = new System.Drawing.Point(246, 214);
            this.startChapter.Maximum = 9;
            this.startChapter.Name = "startChapter";
            this.startChapter.Size = new System.Drawing.Size(186, 45);
            this.startChapter.TabIndex = 22;
            // 
            // unusedRelics
            // 
            this.unusedRelics.AutoSize = true;
            this.unusedRelics.Checked = true;
            this.unusedRelics.CheckState = System.Windows.Forms.CheckState.Checked;
            this.unusedRelics.Location = new System.Drawing.Point(42, 193);
            this.unusedRelics.Name = "unusedRelics";
            this.unusedRelics.Size = new System.Drawing.Size(110, 17);
            this.unusedRelics.TabIndex = 21;
            this.unusedRelics.Text = "Add unused relics";
            this.unusedRelics.UseVisualStyleBackColor = true;
            // 
            // shuffleSlots
            // 
            this.shuffleSlots.AutoSize = true;
            this.shuffleSlots.Checked = true;
            this.shuffleSlots.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleSlots.Location = new System.Drawing.Point(42, 147);
            this.shuffleSlots.Name = "shuffleSlots";
            this.shuffleSlots.Size = new System.Drawing.Size(109, 17);
            this.shuffleSlots.TabIndex = 20;
            this.shuffleSlots.Text = "Shuffle relics cost";
            this.shuffleSlots.UseVisualStyleBackColor = true;
            // 
            // skinLevelText
            // 
            this.skinLevelText.AutoSize = true;
            this.skinLevelText.Location = new System.Drawing.Point(297, 147);
            this.skinLevelText.Name = "skinLevelText";
            this.skinLevelText.Size = new System.Drawing.Size(63, 13);
            this.skinLevelText.TabIndex = 19;
            this.skinLevelText.Text = "Lilly: Normal";
            // 
            // ngPlusSetting
            // 
            this.ngPlusSetting.AutoSize = true;
            this.ngPlusSetting.Location = new System.Drawing.Point(42, 170);
            this.ngPlusSetting.Name = "ngPlusSetting";
            this.ngPlusSetting.Size = new System.Drawing.Size(61, 17);
            this.ngPlusSetting.TabIndex = 18;
            this.ngPlusSetting.Text = "NG+ AI";
            this.ngPlusSetting.UseVisualStyleBackColor = true;
            // 
            // skinLevel
            // 
            this.skinLevel.BackColor = System.Drawing.SystemColors.Window;
            this.skinLevel.LargeChange = 1;
            this.skinLevel.Location = new System.Drawing.Point(246, 163);
            this.skinLevel.Maximum = 12;
            this.skinLevel.Name = "skinLevel";
            this.skinLevel.Size = new System.Drawing.Size(186, 45);
            this.skinLevel.TabIndex = 17;
            // 
            // shuffleGroup
            // 
            this.shuffleGroup.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.shuffleGroup.Controls.Add(this.shuffleWishes);
            this.shuffleGroup.Controls.Add(this.shuffleSpirits);
            this.shuffleGroup.Controls.Add(this.shuffleChains);
            this.shuffleGroup.Controls.Add(this.shuffleTablets);
            this.shuffleGroup.Controls.Add(this.shuffleAmulets);
            this.shuffleGroup.Controls.Add(this.shuffleFindings);
            this.shuffleGroup.Controls.Add(this.shuffleBlights);
            this.shuffleGroup.Controls.Add(this.shuffleRelics);
            this.shuffleGroup.Location = new System.Drawing.Point(38, 22);
            this.shuffleGroup.Name = "shuffleGroup";
            this.shuffleGroup.Size = new System.Drawing.Size(385, 116);
            this.shuffleGroup.TabIndex = 16;
            this.shuffleGroup.TabStop = false;
            this.shuffleGroup.Text = "Shuffled Items (140)";
            // 
            // shuffleWishes
            // 
            this.shuffleWishes.AutoSize = true;
            this.shuffleWishes.Checked = true;
            this.shuffleWishes.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleWishes.Location = new System.Drawing.Point(6, 88);
            this.shuffleWishes.Name = "shuffleWishes";
            this.shuffleWishes.Size = new System.Drawing.Size(114, 17);
            this.shuffleWishes.TabIndex = 15;
            this.shuffleWishes.Text = "Priestesses wishes";
            this.shuffleWishes.UseVisualStyleBackColor = true;
            // 
            // shuffleSpirits
            // 
            this.shuffleSpirits.AutoSize = true;
            this.shuffleSpirits.Checked = true;
            this.shuffleSpirits.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleSpirits.Location = new System.Drawing.Point(6, 19);
            this.shuffleSpirits.Name = "shuffleSpirits";
            this.shuffleSpirits.Size = new System.Drawing.Size(54, 17);
            this.shuffleSpirits.TabIndex = 11;
            this.shuffleSpirits.Text = "Spirits";
            this.shuffleSpirits.UseVisualStyleBackColor = true;
            // 
            // shuffleChains
            // 
            this.shuffleChains.AutoSize = true;
            this.shuffleChains.Checked = true;
            this.shuffleChains.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleChains.Location = new System.Drawing.Point(262, 19);
            this.shuffleChains.Name = "shuffleChains";
            this.shuffleChains.Size = new System.Drawing.Size(107, 17);
            this.shuffleChains.TabIndex = 14;
            this.shuffleChains.Text = "Chains of sorcery";
            this.shuffleChains.UseVisualStyleBackColor = true;
            // 
            // shuffleTablets
            // 
            this.shuffleTablets.AutoSize = true;
            this.shuffleTablets.Checked = true;
            this.shuffleTablets.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleTablets.Location = new System.Drawing.Point(6, 65);
            this.shuffleTablets.Name = "shuffleTablets";
            this.shuffleTablets.Size = new System.Drawing.Size(88, 17);
            this.shuffleTablets.TabIndex = 7;
            this.shuffleTablets.Text = "Stone tablets";
            this.shuffleTablets.UseVisualStyleBackColor = true;
            // 
            // shuffleAmulets
            // 
            this.shuffleAmulets.AutoSize = true;
            this.shuffleAmulets.Checked = true;
            this.shuffleAmulets.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleAmulets.Location = new System.Drawing.Point(262, 42);
            this.shuffleAmulets.Name = "shuffleAmulets";
            this.shuffleAmulets.Size = new System.Drawing.Size(107, 17);
            this.shuffleAmulets.TabIndex = 13;
            this.shuffleAmulets.Text = "Amulet fragments";
            this.shuffleAmulets.UseVisualStyleBackColor = true;
            // 
            // shuffleFindings
            // 
            this.shuffleFindings.AutoSize = true;
            this.shuffleFindings.Checked = true;
            this.shuffleFindings.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleFindings.Location = new System.Drawing.Point(262, 88);
            this.shuffleFindings.Name = "shuffleFindings";
            this.shuffleFindings.Size = new System.Drawing.Size(65, 17);
            this.shuffleFindings.TabIndex = 8;
            this.shuffleFindings.Text = "Findings";
            this.shuffleFindings.UseVisualStyleBackColor = true;
            // 
            // shuffleBlights
            // 
            this.shuffleBlights.AutoSize = true;
            this.shuffleBlights.Checked = true;
            this.shuffleBlights.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleBlights.Location = new System.Drawing.Point(262, 65);
            this.shuffleBlights.Name = "shuffleBlights";
            this.shuffleBlights.Size = new System.Drawing.Size(94, 17);
            this.shuffleBlights.TabIndex = 12;
            this.shuffleBlights.Text = "Blight deposits";
            this.shuffleBlights.UseVisualStyleBackColor = true;
            // 
            // shuffleRelics
            // 
            this.shuffleRelics.AutoSize = true;
            this.shuffleRelics.Checked = true;
            this.shuffleRelics.CheckState = System.Windows.Forms.CheckState.Checked;
            this.shuffleRelics.Location = new System.Drawing.Point(6, 42);
            this.shuffleRelics.Name = "shuffleRelics";
            this.shuffleRelics.Size = new System.Drawing.Size(55, 17);
            this.shuffleRelics.TabIndex = 10;
            this.shuffleRelics.Text = "Relics";
            this.shuffleRelics.UseVisualStyleBackColor = true;
            // 
            // checkfile
            // 
            this.checkfile.AutoSize = true;
            this.checkfile.Location = new System.Drawing.Point(7, 440);
            this.checkfile.Name = "checkfile";
            this.checkfile.Size = new System.Drawing.Size(65, 13);
            this.checkfile.TabIndex = 6;
            this.checkfile.Text = "File check...";
            // 
            // open
            // 
            this.open.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.open.Location = new System.Drawing.Point(395, 455);
            this.open.Name = "open";
            this.open.Size = new System.Drawing.Size(55, 24);
            this.open.TabIndex = 5;
            this.open.Text = "Open";
            this.open.UseVisualStyleBackColor = true;
            this.open.Click += new System.EventHandler(this.open_Click);
            // 
            // path
            // 
            this.path.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.path.Location = new System.Drawing.Point(6, 459);
            this.path.Name = "path";
            this.path.Size = new System.Drawing.Size(322, 20);
            this.path.TabIndex = 0;
            // 
            // chooseFile
            // 
            this.chooseFile.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.chooseFile.Location = new System.Drawing.Point(334, 456);
            this.chooseFile.Name = "chooseFile";
            this.chooseFile.Size = new System.Drawing.Size(55, 24);
            this.chooseFile.TabIndex = 1;
            this.chooseFile.Text = "Browse";
            this.chooseFile.UseVisualStyleBackColor = true;
            this.chooseFile.Click += new System.EventHandler(this.chooseFile_Click);
            // 
            // LogicPage
            // 
            this.LogicPage.Controls.Add(this.LogicPreviewGridview);
            this.LogicPage.Location = new System.Drawing.Point(4, 22);
            this.LogicPage.Name = "LogicPage";
            this.LogicPage.Padding = new System.Windows.Forms.Padding(3);
            this.LogicPage.Size = new System.Drawing.Size(459, 485);
            this.LogicPage.TabIndex = 4;
            this.LogicPage.Text = "Logic";
            this.LogicPage.UseVisualStyleBackColor = true;
            // 
            // LogicPreviewGridview
            // 
            this.LogicPreviewGridview.AllowUserToAddRows = false;
            this.LogicPreviewGridview.AllowUserToDeleteRows = false;
            this.LogicPreviewGridview.AllowUserToResizeRows = false;
            dataGridViewCellStyle1.BackColor = System.Drawing.Color.Silver;
            dataGridViewCellStyle1.ForeColor = System.Drawing.Color.Black;
            dataGridViewCellStyle1.SelectionBackColor = System.Drawing.Color.Silver;
            dataGridViewCellStyle1.SelectionForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(255)))), ((int)(((byte)(255)))));
            this.LogicPreviewGridview.AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this.LogicPreviewGridview.BackgroundColor = System.Drawing.SystemColors.ControlLightLight;
            this.LogicPreviewGridview.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.LogicPreviewGridview.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.LocationColumn,
            this.ItemColumn,
            this.ReachablesColumn});
            this.LogicPreviewGridview.Dock = System.Windows.Forms.DockStyle.Fill;
            this.LogicPreviewGridview.Location = new System.Drawing.Point(3, 3);
            this.LogicPreviewGridview.Name = "LogicPreviewGridview";
            this.LogicPreviewGridview.ReadOnly = true;
            this.LogicPreviewGridview.RowHeadersVisible = false;
            this.LogicPreviewGridview.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.LogicPreviewGridview.Size = new System.Drawing.Size(453, 479);
            this.LogicPreviewGridview.TabIndex = 0;
            // 
            // LocationColumn
            // 
            this.LocationColumn.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.Fill;
            this.LocationColumn.HeaderText = "Location";
            this.LocationColumn.Name = "LocationColumn";
            this.LocationColumn.ReadOnly = true;
            this.LocationColumn.SortMode = System.Windows.Forms.DataGridViewColumnSortMode.NotSortable;
            // 
            // ItemColumn
            // 
            this.ItemColumn.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.Fill;
            this.ItemColumn.HeaderText = "Item";
            this.ItemColumn.Name = "ItemColumn";
            this.ItemColumn.ReadOnly = true;
            this.ItemColumn.SortMode = System.Windows.Forms.DataGridViewColumnSortMode.NotSortable;
            // 
            // ReachablesColumn
            // 
            this.ReachablesColumn.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.AllCellsExceptHeader;
            this.ReachablesColumn.HeaderText = "Nodes";
            this.ReachablesColumn.Name = "ReachablesColumn";
            this.ReachablesColumn.ReadOnly = true;
            this.ReachablesColumn.SortMode = System.Windows.Forms.DataGridViewColumnSortMode.NotSortable;
            this.ReachablesColumn.Width = 5;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 20);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 9;
            this.label1.Text = "Seed:";
            // 
            // metaprogression
            // 
            this.metaprogression.AutoSize = true;
            this.metaprogression.Location = new System.Drawing.Point(42, 308);
            this.metaprogression.Name = "metaprogression";
            this.metaprogression.Size = new System.Drawing.Size(108, 17);
            this.metaprogression.TabIndex = 31;
            this.metaprogression.Text = "Meta Progression";
            this.metaprogression.UseVisualStyleBackColor = true;
            // 
            // componentSettingsBindingSource
            // 
            this.componentSettingsBindingSource.DataSource = typeof(EnderLilies.Randomizer.ComponentSettings);
            // 
            // ComponentSettings
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.groupBox1);
            this.Margin = new System.Windows.Forms.Padding(1);
            this.Name = "ComponentSettings";
            this.Padding = new System.Windows.Forms.Padding(3, 1, 1, 1);
            this.Size = new System.Drawing.Size(476, 560);
            this.Load += new System.EventHandler(this.ComponentSettings_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.tabSettings.ResumeLayout(false);
            this.SettingsPage.ResumeLayout(false);
            this.SettingsPage.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.maxChapter)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.startChapter)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.skinLevel)).EndInit();
            this.shuffleGroup.ResumeLayout(false);
            this.shuffleGroup.PerformLayout();
            this.LogicPage.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.LogicPreviewGridview)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.componentSettingsBindingSource)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.OpenFileDialog openFileDialog1;
        private System.Windows.Forms.Button Randomize;
        private System.Windows.Forms.TextBox seedText;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TabControl tabSettings;
        private System.Windows.Forms.TabPage SettingsPage;
        private System.Windows.Forms.Button open;
        private System.Windows.Forms.TextBox path;
        private System.Windows.Forms.Button chooseFile;
        private System.Windows.Forms.Label checkfile;
        private System.Windows.Forms.TabPage LogicPage;
        private System.Windows.Forms.DataGridView LogicPreviewGridview;
        private System.Windows.Forms.GroupBox shuffleGroup;
        private System.Windows.Forms.CheckBox shuffleSpirits;
        private System.Windows.Forms.CheckBox shuffleChains;
        private System.Windows.Forms.CheckBox shuffleTablets;
        private System.Windows.Forms.CheckBox shuffleAmulets;
        private System.Windows.Forms.CheckBox shuffleFindings;
        private System.Windows.Forms.CheckBox shuffleBlights;
        private System.Windows.Forms.CheckBox shuffleRelics;
        private System.Windows.Forms.DataGridViewTextBoxColumn LocationColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn ItemColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn ReachablesColumn;
        private System.Windows.Forms.CheckBox shuffleWishes;
        private System.Windows.Forms.TrackBar skinLevel;
        private System.Windows.Forms.Label skinLevelText;
        private System.Windows.Forms.CheckBox ngPlusSetting;
        private System.Windows.Forms.CheckBox shuffleSlots;
        private System.Windows.Forms.CheckBox unusedRelics;
        private System.Windows.Forms.Label maxChapterText;
        private System.Windows.Forms.TrackBar maxChapter;
        private System.Windows.Forms.Label startChapterText;
        private System.Windows.Forms.TrackBar startChapter;
        private System.Windows.Forms.CheckBox uatserver;
        private System.Windows.Forms.BindingSource componentSettingsBindingSource;
        private System.Windows.Forms.CheckBox shuffleRooms;
        private System.Windows.Forms.CheckBox randomWeapon;
        private System.Windows.Forms.CheckBox startWeaponUsesAncientSouls;
        private System.Windows.Forms.CheckBox dashProgressive;
        private System.Windows.Forms.CheckBox metaprogression;
        private System.Windows.Forms.ToolTip metaprogressTooltip;
    }
}