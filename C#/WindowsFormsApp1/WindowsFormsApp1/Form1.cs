using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void button2_Click(object sender, EventArgs e)
        {
            string id = textBox1.Text;
            string pw = textBox2.Text;
            MessageBox.Show("ID: " + id + ", PW: " + pw);
        }
        private void button5_Click(object sender, EventArgs e)
        {
            this.Dispose();
        }
    }
}
