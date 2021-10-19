using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace EnderLilies.Randomizer
{
    public partial class EnderLiliesTracker : Form
    {
        public const int WM_NCLBUTTONDOWN = 0xA1;
        public const int HT_CAPTION = 0x2;

        [System.Runtime.InteropServices.DllImport("user32.dll")]
        public static extern int SendMessage(IntPtr hWnd, int Msg, int wParam, int lParam);
        [System.Runtime.InteropServices.DllImport("user32.dll")]
        public static extern bool ReleaseCapture();

        public EnderLiliesTracker()
        {
            InitializeComponent();
        }

        private void EnderLiliesTracker_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                ReleaseCapture();
                SendMessage(Handle, WM_NCLBUTTONDOWN, HT_CAPTION, 0);
            }
        }

        int i = 0;
        private void button1_Click(object sender, EventArgs e)
        {
            Button button = new Button();

            int x = i % 4;
            int y = i / 4;

            int width = 230;
            int height = 230;

            // Create a Bitmap object from a file.
            Image sourceImage = Image.FromFile("E:\\ENDER LILIES\\UViewer\\UEViewer\\UmodelExport\\Game\\_Zenith\\UI\\Textures\\Atlas-AptitudeIcons\\Textures\\Atlas-AptitudeIcons.png");

            // Create a drawing target
            Bitmap bitmap = new Bitmap(width, height, sourceImage.PixelFormat);
            Graphics graphics = Graphics.FromImage(bitmap);

            // Draw a portion of the source image.
            Rectangle sourceRect = new Rectangle(x * width, y * height, width, height);
            graphics.DrawImage(sourceImage, 0, 0, sourceRect, GraphicsUnit.Pixel);
            button.BackgroundImage = bitmap;

            button.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            button.FlatStyle = System.Windows.Forms.FlatStyle.Flat;
            button.Size = new System.Drawing.Size(50, 50);
            this.flowLayoutPanel1.Controls.Add(button);
            i++;
        }

        private void flowLayoutPanel1_MouseDown(object sender, MouseEventArgs e)
        {
            if (e.Button == MouseButtons.Left)
            {
                ReleaseCapture();
                SendMessage(Handle, WM_NCLBUTTONDOWN, HT_CAPTION, 0);
            }
        }
    }
}
