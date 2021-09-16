namespace LiveSplit.UI.Components
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
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle9 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle10 = new System.Windows.Forms.DataGridViewCellStyle();
            this.openFileDialog1 = new System.Windows.Forms.OpenFileDialog();
            this.path = new System.Windows.Forms.TextBox();
            this.chooseFile = new System.Windows.Forms.Button();
            this.checkfile = new System.Windows.Forms.Label();
            this.randoPreview = new System.Windows.Forms.DataGridView();
            this.Nodes = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Keys = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.aptitudes = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.open = new System.Windows.Forms.Button();
            this.seedText = new System.Windows.Forms.TextBox();
            this.lockSeed = new System.Windows.Forms.CheckBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.Randomize = new System.Windows.Forms.Button();
            this.tabSettings = new System.Windows.Forms.TabControl();
            this.SettingsPage = new System.Windows.Forms.TabPage();
            this.ngCheckbox = new System.Windows.Forms.CheckBox();
            this.levelRandom = new System.Windows.Forms.CheckBox();
            this.randomizeRelicsCheckbox = new System.Windows.Forms.CheckBox();
            this.randomizeBossesCheckbox = new System.Windows.Forms.CheckBox();
            this.SpiritsPage = new System.Windows.Forms.TabPage();
            this.RelicsPage = new System.Windows.Forms.TabPage();
            this.relicsDataView = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.RoomPage = new System.Windows.Forms.TabPage();
            this.startingRoomText = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            this.OddsPage = new System.Windows.Forms.TabPage();
            this.oddGrid = new System.Windows.Forms.DataGridView();
            this.OddsIteration = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.CalculateOdds = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.randoPreview)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.tabSettings.SuspendLayout();
            this.SettingsPage.SuspendLayout();
            this.SpiritsPage.SuspendLayout();
            this.RelicsPage.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.relicsDataView)).BeginInit();
            this.RoomPage.SuspendLayout();
            this.OddsPage.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.oddGrid)).BeginInit();
            this.SuspendLayout();
            // 
            // openFileDialog1
            // 
            this.openFileDialog1.DefaultExt = "*.json";
            this.openFileDialog1.FileName = "EnderLilies.Randomizer.json";
            this.openFileDialog1.Filter = "Json Files|*.json";
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
            // checkfile
            // 
            this.checkfile.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.checkfile.Location = new System.Drawing.Point(6, 381);
            this.checkfile.Name = "checkfile";
            this.checkfile.Size = new System.Drawing.Size(444, 72);
            this.checkfile.TabIndex = 2;
            this.checkfile.Text = "everything ok";
            this.checkfile.TextAlign = System.Drawing.ContentAlignment.BottomLeft;
            // 
            // randoPreview
            // 
            this.randoPreview.AllowUserToAddRows = false;
            this.randoPreview.AllowUserToDeleteRows = false;
            this.randoPreview.AllowUserToResizeRows = false;
            dataGridViewCellStyle9.BackColor = System.Drawing.SystemColors.ControlLight;
            this.randoPreview.AlternatingRowsDefaultCellStyle = dataGridViewCellStyle9;
            this.randoPreview.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.randoPreview.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.randoPreview.BackgroundColor = System.Drawing.SystemColors.Control;
            this.randoPreview.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.randoPreview.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Nodes,
            this.Keys,
            this.aptitudes});
            this.randoPreview.Location = new System.Drawing.Point(3, 3);
            this.randoPreview.Margin = new System.Windows.Forms.Padding(0);
            this.randoPreview.MinimumSize = new System.Drawing.Size(0, 250);
            this.randoPreview.Name = "randoPreview";
            this.randoPreview.ReadOnly = true;
            this.randoPreview.RowHeadersVisible = false;
            this.randoPreview.RowTemplate.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.randoPreview.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.randoPreview.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.CellSelect;
            this.randoPreview.Size = new System.Drawing.Size(453, 479);
            this.randoPreview.TabIndex = 4;
            // 
            // Nodes
            // 
            this.Nodes.FillWeight = 98.47716F;
            this.Nodes.HeaderText = "Spirit";
            this.Nodes.Name = "Nodes";
            this.Nodes.ReadOnly = true;
            // 
            // Keys
            // 
            this.Keys.FillWeight = 101.5228F;
            this.Keys.HeaderText = "Weapon";
            this.Keys.Name = "Keys";
            this.Keys.ReadOnly = true;
            // 
            // aptitudes
            // 
            this.aptitudes.HeaderText = "Aptitude";
            this.aptitudes.Name = "aptitudes";
            this.aptitudes.ReadOnly = true;
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
            // seedText
            // 
            this.seedText.Location = new System.Drawing.Point(44, 17);
            this.seedText.Name = "seedText";
            this.seedText.Size = new System.Drawing.Size(111, 20);
            this.seedText.TabIndex = 6;
            this.seedText.Text = "0";
            // 
            // lockSeed
            // 
            this.lockSeed.AutoSize = true;
            this.lockSeed.Location = new System.Drawing.Point(161, 19);
            this.lockSeed.Name = "lockSeed";
            this.lockSeed.Size = new System.Drawing.Size(46, 17);
            this.lockSeed.TabIndex = 7;
            this.lockSeed.Text = "lock";
            this.lockSeed.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.Randomize);
            this.groupBox1.Controls.Add(this.tabSettings);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.lockSeed);
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
            this.tabSettings.Controls.Add(this.SpiritsPage);
            this.tabSettings.Controls.Add(this.RelicsPage);
            this.tabSettings.Controls.Add(this.RoomPage);
            this.tabSettings.Controls.Add(this.OddsPage);
            this.tabSettings.Location = new System.Drawing.Point(2, 44);
            this.tabSettings.Name = "tabSettings";
            this.tabSettings.SelectedIndex = 0;
            this.tabSettings.Size = new System.Drawing.Size(467, 511);
            this.tabSettings.TabIndex = 13;
            // 
            // SettingsPage
            // 
            this.SettingsPage.Controls.Add(this.ngCheckbox);
            this.SettingsPage.Controls.Add(this.levelRandom);
            this.SettingsPage.Controls.Add(this.open);
            this.SettingsPage.Controls.Add(this.checkfile);
            this.SettingsPage.Controls.Add(this.path);
            this.SettingsPage.Controls.Add(this.chooseFile);
            this.SettingsPage.Controls.Add(this.randomizeRelicsCheckbox);
            this.SettingsPage.Controls.Add(this.randomizeBossesCheckbox);
            this.SettingsPage.Location = new System.Drawing.Point(4, 22);
            this.SettingsPage.Name = "SettingsPage";
            this.SettingsPage.Padding = new System.Windows.Forms.Padding(3);
            this.SettingsPage.Size = new System.Drawing.Size(459, 485);
            this.SettingsPage.TabIndex = 3;
            this.SettingsPage.Text = "Settings";
            this.SettingsPage.UseVisualStyleBackColor = true;
            // 
            // ngCheckbox
            // 
            this.ngCheckbox.AutoSize = true;
            this.ngCheckbox.Location = new System.Drawing.Point(9, 29);
            this.ngCheckbox.Name = "ngCheckbox";
            this.ngCheckbox.Size = new System.Drawing.Size(61, 17);
            this.ngCheckbox.TabIndex = 16;
            this.ngCheckbox.Text = "NG+ AI";
            this.ngCheckbox.UseVisualStyleBackColor = true;
            // 
            // levelRandom
            // 
            this.levelRandom.AutoSize = true;
            this.levelRandom.Location = new System.Drawing.Point(242, 6);
            this.levelRandom.Name = "levelRandom";
            this.levelRandom.Size = new System.Drawing.Size(115, 17);
            this.levelRandom.TabIndex = 15;
            this.levelRandom.Text = "Randomize Rooms";
            this.levelRandom.UseVisualStyleBackColor = true;
            // 
            // randomizeRelicsCheckbox
            // 
            this.randomizeRelicsCheckbox.AutoSize = true;
            this.randomizeRelicsCheckbox.Checked = true;
            this.randomizeRelicsCheckbox.CheckState = System.Windows.Forms.CheckState.Checked;
            this.randomizeRelicsCheckbox.Location = new System.Drawing.Point(125, 6);
            this.randomizeRelicsCheckbox.Name = "randomizeRelicsCheckbox";
            this.randomizeRelicsCheckbox.Size = new System.Drawing.Size(111, 17);
            this.randomizeRelicsCheckbox.TabIndex = 14;
            this.randomizeRelicsCheckbox.Text = "Randomize Relics";
            this.randomizeRelicsCheckbox.UseVisualStyleBackColor = true;
            // 
            // randomizeBossesCheckbox
            // 
            this.randomizeBossesCheckbox.AutoSize = true;
            this.randomizeBossesCheckbox.Checked = true;
            this.randomizeBossesCheckbox.CheckState = System.Windows.Forms.CheckState.Checked;
            this.randomizeBossesCheckbox.Location = new System.Drawing.Point(9, 6);
            this.randomizeBossesCheckbox.Name = "randomizeBossesCheckbox";
            this.randomizeBossesCheckbox.Size = new System.Drawing.Size(110, 17);
            this.randomizeBossesCheckbox.TabIndex = 13;
            this.randomizeBossesCheckbox.Text = "Randomize Spirits";
            this.randomizeBossesCheckbox.UseVisualStyleBackColor = true;
            // 
            // SpiritsPage
            // 
            this.SpiritsPage.Controls.Add(this.randoPreview);
            this.SpiritsPage.Location = new System.Drawing.Point(4, 22);
            this.SpiritsPage.Name = "SpiritsPage";
            this.SpiritsPage.Padding = new System.Windows.Forms.Padding(3);
            this.SpiritsPage.Size = new System.Drawing.Size(459, 485);
            this.SpiritsPage.TabIndex = 0;
            this.SpiritsPage.Text = "Spirits";
            this.SpiritsPage.UseVisualStyleBackColor = true;
            // 
            // RelicsPage
            // 
            this.RelicsPage.Controls.Add(this.relicsDataView);
            this.RelicsPage.Location = new System.Drawing.Point(4, 22);
            this.RelicsPage.Name = "RelicsPage";
            this.RelicsPage.Padding = new System.Windows.Forms.Padding(3);
            this.RelicsPage.Size = new System.Drawing.Size(459, 485);
            this.RelicsPage.TabIndex = 2;
            this.RelicsPage.Text = "Relics";
            this.RelicsPage.UseVisualStyleBackColor = true;
            // 
            // relicsDataView
            // 
            this.relicsDataView.AllowUserToAddRows = false;
            this.relicsDataView.AllowUserToDeleteRows = false;
            this.relicsDataView.AllowUserToResizeColumns = false;
            this.relicsDataView.AllowUserToResizeRows = false;
            dataGridViewCellStyle10.BackColor = System.Drawing.SystemColors.ControlLight;
            this.relicsDataView.AlternatingRowsDefaultCellStyle = dataGridViewCellStyle10;
            this.relicsDataView.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.relicsDataView.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.relicsDataView.AutoSizeRowsMode = System.Windows.Forms.DataGridViewAutoSizeRowsMode.AllCells;
            this.relicsDataView.BackgroundColor = System.Drawing.SystemColors.Control;
            this.relicsDataView.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.relicsDataView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.DisableResizing;
            this.relicsDataView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.dataGridViewTextBoxColumn1,
            this.dataGridViewTextBoxColumn2});
            this.relicsDataView.Location = new System.Drawing.Point(3, 3);
            this.relicsDataView.Margin = new System.Windows.Forms.Padding(0);
            this.relicsDataView.MinimumSize = new System.Drawing.Size(0, 250);
            this.relicsDataView.Name = "relicsDataView";
            this.relicsDataView.ReadOnly = true;
            this.relicsDataView.RowHeadersVisible = false;
            this.relicsDataView.RowHeadersWidthSizeMode = System.Windows.Forms.DataGridViewRowHeadersWidthSizeMode.AutoSizeToAllHeaders;
            this.relicsDataView.RowTemplate.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.relicsDataView.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.relicsDataView.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.CellSelect;
            this.relicsDataView.Size = new System.Drawing.Size(453, 479);
            this.relicsDataView.TabIndex = 12;
            // 
            // dataGridViewTextBoxColumn1
            // 
            this.dataGridViewTextBoxColumn1.FillWeight = 98.47716F;
            this.dataGridViewTextBoxColumn1.HeaderText = "Emplacement";
            this.dataGridViewTextBoxColumn1.Name = "dataGridViewTextBoxColumn1";
            this.dataGridViewTextBoxColumn1.ReadOnly = true;
            // 
            // dataGridViewTextBoxColumn2
            // 
            this.dataGridViewTextBoxColumn2.FillWeight = 101.5228F;
            this.dataGridViewTextBoxColumn2.HeaderText = "Relic";
            this.dataGridViewTextBoxColumn2.Name = "dataGridViewTextBoxColumn2";
            this.dataGridViewTextBoxColumn2.ReadOnly = true;
            // 
            // RoomPage
            // 
            this.RoomPage.Controls.Add(this.startingRoomText);
            this.RoomPage.Controls.Add(this.label3);
            this.RoomPage.Location = new System.Drawing.Point(4, 22);
            this.RoomPage.Name = "RoomPage";
            this.RoomPage.Padding = new System.Windows.Forms.Padding(3);
            this.RoomPage.Size = new System.Drawing.Size(459, 485);
            this.RoomPage.TabIndex = 1;
            this.RoomPage.Text = "Rooms";
            this.RoomPage.UseVisualStyleBackColor = true;
            // 
            // startingRoomText
            // 
            this.startingRoomText.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.startingRoomText.Location = new System.Drawing.Point(104, 9);
            this.startingRoomText.Name = "startingRoomText";
            this.startingRoomText.Size = new System.Drawing.Size(35, 20);
            this.startingRoomText.TabIndex = 18;
            this.startingRoomText.Text = "12";
            // 
            // label3
            // 
            this.label3.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(6, 12);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(92, 13);
            this.label3.TabIndex = 19;
            this.label3.Text = "Starting Room N°:";
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
            // OddsPage
            // 
            this.OddsPage.Controls.Add(this.CalculateOdds);
            this.OddsPage.Controls.Add(this.label2);
            this.OddsPage.Controls.Add(this.OddsIteration);
            this.OddsPage.Controls.Add(this.oddGrid);
            this.OddsPage.Location = new System.Drawing.Point(4, 22);
            this.OddsPage.Name = "OddsPage";
            this.OddsPage.Padding = new System.Windows.Forms.Padding(3);
            this.OddsPage.Size = new System.Drawing.Size(459, 485);
            this.OddsPage.TabIndex = 4;
            this.OddsPage.Text = "Odds";
            this.OddsPage.UseVisualStyleBackColor = true;
            // 
            // oddGrid
            // 
            this.oddGrid.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)));
            this.oddGrid.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.AllCells;
            this.oddGrid.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.oddGrid.Location = new System.Drawing.Point(6, 34);
            this.oddGrid.Name = "oddGrid";
            this.oddGrid.RowHeadersWidth = 60;
            this.oddGrid.Size = new System.Drawing.Size(447, 448);
            this.oddGrid.TabIndex = 0;
            // 
            // OddsIteration
            // 
            this.OddsIteration.Location = new System.Drawing.Point(66, 8);
            this.OddsIteration.Name = "OddsIteration";
            this.OddsIteration.Size = new System.Drawing.Size(83, 20);
            this.OddsIteration.TabIndex = 1;
            this.OddsIteration.Text = "10000";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(7, 11);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(53, 13);
            this.label2.TabIndex = 10;
            this.label2.Text = "Iterations:";
            // 
            // CalculateOdds
            // 
            this.CalculateOdds.Location = new System.Drawing.Point(393, 6);
            this.CalculateOdds.Name = "CalculateOdds";
            this.CalculateOdds.Size = new System.Drawing.Size(60, 23);
            this.CalculateOdds.TabIndex = 11;
            this.CalculateOdds.Text = "Calculate";
            this.CalculateOdds.UseVisualStyleBackColor = true;
            this.CalculateOdds.Click += new System.EventHandler(this.button1_Click);
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
            ((System.ComponentModel.ISupportInitialize)(this.randoPreview)).EndInit();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.tabSettings.ResumeLayout(false);
            this.SettingsPage.ResumeLayout(false);
            this.SettingsPage.PerformLayout();
            this.SpiritsPage.ResumeLayout(false);
            this.RelicsPage.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.relicsDataView)).EndInit();
            this.RoomPage.ResumeLayout(false);
            this.RoomPage.PerformLayout();
            this.OddsPage.ResumeLayout(false);
            this.OddsPage.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.oddGrid)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.OpenFileDialog openFileDialog1;
        private System.Windows.Forms.TextBox path;
        private System.Windows.Forms.Button chooseFile;
        private System.Windows.Forms.Label checkfile;
        private System.Windows.Forms.Button Randomize;
        private System.Windows.Forms.DataGridView randoPreview;
        private System.Windows.Forms.Button open;
        private System.Windows.Forms.TextBox seedText;
        private System.Windows.Forms.CheckBox lockSeed;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.ComponentModel.BackgroundWorker backgroundWorker1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TabControl tabSettings;
        private System.Windows.Forms.TabPage SpiritsPage;
        private System.Windows.Forms.TabPage RoomPage;
        private System.Windows.Forms.TabPage RelicsPage;
        private System.Windows.Forms.DataGridView relicsDataView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.TabPage SettingsPage;
        private System.Windows.Forms.CheckBox levelRandom;
        private System.Windows.Forms.CheckBox randomizeRelicsCheckbox;
        private System.Windows.Forms.CheckBox randomizeBossesCheckbox;
        private System.Windows.Forms.TextBox startingRoomText;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.CheckBox ngCheckbox;
        private System.Windows.Forms.DataGridViewTextBoxColumn Nodes;
        private System.Windows.Forms.DataGridViewTextBoxColumn Keys;
        private System.Windows.Forms.DataGridViewTextBoxColumn aptitudes;
        private System.Windows.Forms.TabPage OddsPage;
        private System.Windows.Forms.Button CalculateOdds;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox OddsIteration;
        private System.Windows.Forms.DataGridView oddGrid;
    }
}