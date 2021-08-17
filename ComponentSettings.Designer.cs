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
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
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
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.randomizeBossesCheckbox = new System.Windows.Forms.CheckBox();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.relicsDataView = new System.Windows.Forms.DataGridView();
            this.dataGridViewTextBoxColumn1 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.dataGridViewTextBoxColumn2 = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.randomizeRelicsCheckbox = new System.Windows.Forms.CheckBox();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.startingRoomText = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.levelRandom = new System.Windows.Forms.CheckBox();
            this.label1 = new System.Windows.Forms.Label();
            this.Randomize = new System.Windows.Forms.Button();
            this.backgroundWorker1 = new System.ComponentModel.BackgroundWorker();
            ((System.ComponentModel.ISupportInitialize)(this.randoPreview)).BeginInit();
            this.groupBox1.SuspendLayout();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage3.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.relicsDataView)).BeginInit();
            this.tabPage2.SuspendLayout();
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
            this.path.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.path.Location = new System.Drawing.Point(9, 35);
            this.path.Name = "path";
            this.path.Size = new System.Drawing.Size(343, 20);
            this.path.TabIndex = 0;
            // 
            // chooseFile
            // 
            this.chooseFile.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.chooseFile.Location = new System.Drawing.Point(354, 33);
            this.chooseFile.Name = "chooseFile";
            this.chooseFile.Size = new System.Drawing.Size(55, 24);
            this.chooseFile.TabIndex = 1;
            this.chooseFile.Text = "Browse";
            this.chooseFile.UseVisualStyleBackColor = true;
            this.chooseFile.Click += new System.EventHandler(this.chooseFile_Click);
            // 
            // checkfile
            // 
            this.checkfile.Dock = System.Windows.Forms.DockStyle.Top;
            this.checkfile.Location = new System.Drawing.Point(3, 16);
            this.checkfile.Name = "checkfile";
            this.checkfile.Size = new System.Drawing.Size(466, 18);
            this.checkfile.TabIndex = 2;
            this.checkfile.Text = "everything ok";
            // 
            // randoPreview
            // 
            this.randoPreview.AllowUserToAddRows = false;
            this.randoPreview.AllowUserToDeleteRows = false;
            this.randoPreview.AllowUserToResizeRows = false;
            this.randoPreview.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.randoPreview.AutoSizeColumnsMode = System.Windows.Forms.DataGridViewAutoSizeColumnsMode.Fill;
            this.randoPreview.BackgroundColor = System.Drawing.SystemColors.ControlLight;
            this.randoPreview.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.Nodes,
            this.Keys,
            this.aptitudes});
            this.randoPreview.Location = new System.Drawing.Point(3, 26);
            this.randoPreview.Margin = new System.Windows.Forms.Padding(0);
            this.randoPreview.MinimumSize = new System.Drawing.Size(0, 250);
            this.randoPreview.Name = "randoPreview";
            this.randoPreview.ReadOnly = true;
            this.randoPreview.RowHeadersVisible = false;
            this.randoPreview.RowTemplate.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.randoPreview.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.randoPreview.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.CellSelect;
            this.randoPreview.Size = new System.Drawing.Size(453, 413);
            this.randoPreview.TabIndex = 4;
            // 
            // Nodes
            // 
            this.Nodes.FillWeight = 98.47716F;
            this.Nodes.HeaderText = "Spirits";
            this.Nodes.Name = "Nodes";
            this.Nodes.ReadOnly = true;
            // 
            // Keys
            // 
            this.Keys.FillWeight = 101.5228F;
            this.Keys.HeaderText = "Weapons";
            this.Keys.Name = "Keys";
            this.Keys.ReadOnly = true;
            // 
            // aptitudes
            // 
            this.aptitudes.HeaderText = "Aptitudes";
            this.aptitudes.Name = "aptitudes";
            this.aptitudes.ReadOnly = true;
            // 
            // open
            // 
            this.open.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.open.Location = new System.Drawing.Point(411, 33);
            this.open.Name = "open";
            this.open.Size = new System.Drawing.Size(55, 24);
            this.open.TabIndex = 5;
            this.open.Text = "Open";
            this.open.UseVisualStyleBackColor = true;
            this.open.Click += new System.EventHandler(this.open_Click);
            // 
            // seedText
            // 
            this.seedText.Location = new System.Drawing.Point(43, 61);
            this.seedText.Name = "seedText";
            this.seedText.Size = new System.Drawing.Size(111, 20);
            this.seedText.TabIndex = 6;
            this.seedText.Text = "0";
            // 
            // lockSeed
            // 
            this.lockSeed.AutoSize = true;
            this.lockSeed.Location = new System.Drawing.Point(191, 64);
            this.lockSeed.Name = "lockSeed";
            this.lockSeed.Size = new System.Drawing.Size(46, 17);
            this.lockSeed.TabIndex = 7;
            this.lockSeed.Text = "lock";
            this.lockSeed.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.tabControl1);
            this.groupBox1.Controls.Add(this.path);
            this.groupBox1.Controls.Add(this.open);
            this.groupBox1.Controls.Add(this.chooseFile);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.checkfile);
            this.groupBox1.Controls.Add(this.lockSeed);
            this.groupBox1.Controls.Add(this.Randomize);
            this.groupBox1.Controls.Add(this.seedText);
            this.groupBox1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.groupBox1.Location = new System.Drawing.Point(3, 1);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(472, 558);
            this.groupBox1.TabIndex = 9;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Configuration";
            // 
            // tabControl1
            // 
            this.tabControl1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage3);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Location = new System.Drawing.Point(2, 87);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(467, 468);
            this.tabControl1.TabIndex = 13;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.randomizeBossesCheckbox);
            this.tabPage1.Controls.Add(this.randoPreview);
            this.tabPage1.Location = new System.Drawing.Point(4, 22);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(459, 442);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "Spirits";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // randomizeBossesCheckbox
            // 
            this.randomizeBossesCheckbox.AutoSize = true;
            this.randomizeBossesCheckbox.Checked = true;
            this.randomizeBossesCheckbox.CheckState = System.Windows.Forms.CheckState.Checked;
            this.randomizeBossesCheckbox.Location = new System.Drawing.Point(6, 6);
            this.randomizeBossesCheckbox.Name = "randomizeBossesCheckbox";
            this.randomizeBossesCheckbox.Size = new System.Drawing.Size(110, 17);
            this.randomizeBossesCheckbox.TabIndex = 12;
            this.randomizeBossesCheckbox.Text = "Randomize Spirits";
            this.randomizeBossesCheckbox.UseVisualStyleBackColor = true;
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.relicsDataView);
            this.tabPage3.Controls.Add(this.randomizeRelicsCheckbox);
            this.tabPage3.Location = new System.Drawing.Point(4, 22);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage3.Size = new System.Drawing.Size(459, 442);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "Relics";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // relicsDataView
            // 
            this.relicsDataView.AllowUserToAddRows = false;
            this.relicsDataView.AllowUserToDeleteRows = false;
            this.relicsDataView.AllowUserToResizeColumns = false;
            this.relicsDataView.AllowUserToResizeRows = false;
            dataGridViewCellStyle1.BackColor = System.Drawing.SystemColors.ControlLight;
            this.relicsDataView.AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
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
            this.relicsDataView.Location = new System.Drawing.Point(3, 26);
            this.relicsDataView.Margin = new System.Windows.Forms.Padding(0);
            this.relicsDataView.MinimumSize = new System.Drawing.Size(0, 250);
            this.relicsDataView.Name = "relicsDataView";
            this.relicsDataView.ReadOnly = true;
            this.relicsDataView.RowHeadersVisible = false;
            this.relicsDataView.RowHeadersWidthSizeMode = System.Windows.Forms.DataGridViewRowHeadersWidthSizeMode.AutoSizeToAllHeaders;
            this.relicsDataView.RowTemplate.Resizable = System.Windows.Forms.DataGridViewTriState.False;
            this.relicsDataView.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.relicsDataView.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.CellSelect;
            this.relicsDataView.Size = new System.Drawing.Size(453, 413);
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
            // randomizeRelicsCheckbox
            // 
            this.randomizeRelicsCheckbox.AutoSize = true;
            this.randomizeRelicsCheckbox.Checked = true;
            this.randomizeRelicsCheckbox.CheckState = System.Windows.Forms.CheckState.Checked;
            this.randomizeRelicsCheckbox.Location = new System.Drawing.Point(6, 6);
            this.randomizeRelicsCheckbox.Name = "randomizeRelicsCheckbox";
            this.randomizeRelicsCheckbox.Size = new System.Drawing.Size(111, 17);
            this.randomizeRelicsCheckbox.TabIndex = 11;
            this.randomizeRelicsCheckbox.Text = "Randomize Relics";
            this.randomizeRelicsCheckbox.UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.startingRoomText);
            this.tabPage2.Controls.Add(this.label3);
            this.tabPage2.Controls.Add(this.levelRandom);
            this.tabPage2.Location = new System.Drawing.Point(4, 22);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(459, 442);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "Rooms";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // startingRoomText
            // 
            this.startingRoomText.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.startingRoomText.Location = new System.Drawing.Point(418, 4);
            this.startingRoomText.Name = "startingRoomText";
            this.startingRoomText.Size = new System.Drawing.Size(35, 20);
            this.startingRoomText.TabIndex = 11;
            this.startingRoomText.Text = "12";
            // 
            // label3
            // 
            this.label3.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(320, 7);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(92, 13);
            this.label3.TabIndex = 12;
            this.label3.Text = "Starting Room N°:";
            // 
            // levelRandom
            // 
            this.levelRandom.AutoSize = true;
            this.levelRandom.Location = new System.Drawing.Point(6, 6);
            this.levelRandom.Name = "levelRandom";
            this.levelRandom.Size = new System.Drawing.Size(115, 17);
            this.levelRandom.TabIndex = 10;
            this.levelRandom.Text = "Randomize Rooms";
            this.levelRandom.UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(7, 64);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(35, 13);
            this.label1.TabIndex = 9;
            this.label1.Text = "Seed:";
            // 
            // Randomize
            // 
            this.Randomize.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.Randomize.BackgroundImage = global::EnderLilies.Randomizer.Properties.Resources._600px_Refresh_icon;
            this.Randomize.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.Randomize.Font = new System.Drawing.Font("Bahnschrift Light", 16F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Randomize.Location = new System.Drawing.Point(160, 59);
            this.Randomize.Name = "Randomize";
            this.Randomize.Size = new System.Drawing.Size(25, 25);
            this.Randomize.TabIndex = 3;
            this.Randomize.TextAlign = System.Drawing.ContentAlignment.TopCenter;
            this.Randomize.UseVisualStyleBackColor = true;
            this.Randomize.Click += new System.EventHandler(this.Randomize_Click);
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
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage1.PerformLayout();
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.relicsDataView)).EndInit();
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
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
        private System.Windows.Forms.CheckBox levelRandom;
        private System.Windows.Forms.TextBox startingRoomText;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.CheckBox randomizeBossesCheckbox;
        private System.Windows.Forms.CheckBox randomizeRelicsCheckbox;
        private System.Windows.Forms.DataGridView relicsDataView;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn1;
        private System.Windows.Forms.DataGridViewTextBoxColumn dataGridViewTextBoxColumn2;
        private System.Windows.Forms.DataGridViewTextBoxColumn Nodes;
        private System.Windows.Forms.DataGridViewTextBoxColumn Keys;
        private System.Windows.Forms.DataGridViewTextBoxColumn aptitudes;
    }
}