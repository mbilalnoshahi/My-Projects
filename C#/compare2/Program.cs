using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.IO;
using DevExpress.XtraEditors;
using DevExpress.XtraGrid.Views.Grid;

namespace compare2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            gridControl1.DataSource = ParseFiles("test1.txt", "test2.txt");
        }

        BindingList<LineClass> ParseFiles(string path1, string path2)
        {
            BindingList<LineClass> list = new BindingList<LineClass>();
            try
            {
                int max = 0;
                using (StreamReader sr = new StreamReader(path1))
                {
                    String line;
                    while ((line = sr.ReadLine()) != null)
                    {
                        list.Add(new LineClass(line, ""));
                        max++;
                    }
                }

                int i = 0;
                using (StreamReader sr = new StreamReader(path2))
                {
                    String line;
                    while ((line = sr.ReadLine()) != null && i <= max)
                    {
                        list[i].SecondFileLine = line;
                        i++;
                    }
                }
            }
            catch (Exception e)
            {
                Console.WriteLine("The file could not be read:");
                Console.WriteLine(e.Message);
            }
            return list;
        }

        bool ValuesAreEqual(int rowHandle)
        {
            object value1 = gridView1.GetRowCellValue(rowHandle, gridColumnFirstFile);
            object value2 = gridView1.GetRowCellValue(rowHandle, gridColumnSecondFile);
            return (Convert.ToString(value1).Equals(Convert.ToString(value2)));
        }

        private void gridView1_RowStyle(object sender, DevExpress.XtraGrid.Views.Grid.RowStyleEventArgs e)
        {
            if (!ValuesAreEqual(e.RowHandle))
                e.Appearance.BackColor = Color.Red;
        }

        void Check()
        {
            for (int i = 0; i < gridView1.DataRowCount; i++)
            {
                if (!ValuesAreEqual(i))
                {
                    MessageBox.Show(String.Format("Error in  {0} line:\n[{1}]\n[{2}]", i, gridView1.GetRowCellValue(i, gridColumnFirstFile), gridView1.GetRowCellValue(i, gridColumnSecondFile)));
                    gridView1.FocusedRowHandle = i;
                    gridView1.FocusedColumn = gridColumnFirstFile;
                    gridView1.ShowEditor();
                    if (gridView1.ActiveEditor != null)
                    {
                        if (XtraMessageBox.Show("Correct this value?", "Question", MessageBoxButtons.YesNo) == DialogResult.Yes)
                        {
                            gridView1.ActiveEditor.Text = gridView1.GetRowCellValue(i, gridColumnSecondFile).ToString();
                        }
                        gridView1.ActiveEditor.SelectAll();
                    }
                    return;
                }
            }
        }


        private void button1_Click(object sender, EventArgs e)
        {
            Check();
        }

        private void gridView1_CustomColumnDisplayText(object sender, DevExpress.XtraGrid.Views.Base.CustomColumnDisplayTextEventArgs e)
        {
            GridView gv = sender as GridView;
            if (e.Column == gridColumnLineNumber) { e.DisplayText = gv.GetRowHandle(e.ListSourceRowIndex).ToString(); return; }
        }

    }
}