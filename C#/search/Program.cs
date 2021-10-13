using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Text.RegularExpressions;

namespace search
{
    class Program
    {
        /*
        protected void Search(object sender, EventArgs e)
        {
            string searchValue = txtSearch.Text.Trim();
            // Set File path.
            string csvPath = Server.MapPath("~/Files/Sample.csv");
            //Create a DataTable.
            DataTable dt = new DataTable();
            dt.Columns.AddRange(new DataColumn[3] { new DataColumn("Id", typeof(int)),
            new DataColumn("Name", typeof(string)),
            new DataColumn("Country",typeof(string)) });
                    //Read the contents of CSV file.
            string csvData = File.ReadAllText(csvPath);
            //if (!string.IsNullOrEmpty(txtSearch.Text.Trim()))
            //{
            //Execute a loop over the rows.
            foreach (string row in csvData.Split('\n'))
            {
                if (!string.IsNullOrEmpty(row))
                {
                    bool searchValueExist = false;
                    //Execute a loop over the columns.
                    foreach (string cell in row.Split(','))
                    {
                        bool valueExist = cell.ToUpper().Contains(searchValue.ToUpper());
                        if (valueExist)
                        {
                            searchValueExist = true;
                            break;
                        }
                    }
                    if (searchValueExist)
                    {
                        dt.Rows.Add();
                        int i = 0;

                        //Execute a loop over the columns.
                        foreach (string cell in row.Split(','))
                        {
                            dt.Rows[dt.Rows.Count - 1][i] = cell;
                            i++;
                        }
                    }
                }
            }
            //}
            //Bind the DataTable.
            GridView1.DataSource = dt;
            GridView1.DataBind();
        }

        */

        static void Main(string[] args)
        {
            //Console.WriteLine(string.Join("", readRecord("Nov", @"C:\Users\Bilal\Downloads\out111.csv", 3)));

            /* string[] words = File.ReadAllText("new.txt").Split(',');
             for (int i=0; i<words.Length; i++)
             {
                 Console.WriteLine(words[i]);
             }

             */
            string fName = @"C:\Users\Bilal\Downloads\out111.csv";

            var Sample_LOg = File.ReadAllLines(@"D:\Test\GridView3.txt");
            //StreamReader testTxt = new StreamReader(fName);

            //string allRead = testTxt.ReadToEnd();
            //string [] a =null;

            //testTxt.Close();
            string regMatch = "101.50.105.7:8441";

            foreach (string line in Sample_LOg)
            {
                if (line.Contains(regMatch) == true)
                {
                    Console.WriteLine("Record Found : Following is the result\n");

                    Console.WriteLine(line);
                    Console.ReadKey();
                    return;
                }

                else
                {
                    Console.WriteLine("Not found\n");

                }

            }

                

            

            Console.WriteLine("Not found\n");


            /*

                        if (Regex.IsMatch(allRead, regMatch))

                        {

                            Console.WriteLine("found\n");



                        }

                        else

                        {

                            Console.WriteLine("not found\n");

                        }
            */
            Console.ReadLine();

            //"Nov"
            //"16:00:00"

        }

        
        
        public static string[] readRecord(string SearchTerm, string filePath, int PositionOfSearchTerm)
        {
            PositionOfSearchTerm--;
            string[] RecordNotFound = { "Hey Bilal, Record Not Found" };

            try
            {
                string[] lines = System.IO.File.ReadAllLines(@filePath);

                for(int i=0; i<lines.Length; i++)
                {

                    string[] fields = lines[i].Split(',');
                    if (recordMatches(SearchTerm, fields, PositionOfSearchTerm))
                    {
                        Console.WriteLine("Record Found");
                        return fields;
                    }

                }

               return RecordNotFound;

            }

            catch(Exception ex)
            {
                Console.WriteLine("THis Program did an Oopsie");
                return RecordNotFound;
                throw new ApplicationException("This Program did an Oopsie: ",ex);
            }

        }

        public static bool recordMatches(string SearchTerm, string[] record, int PositionOfSearchTerm)
        {
            if (record[PositionOfSearchTerm].Equals(SearchTerm))
            {
                return true;
            }
            return false;
        }


        /* String GetAddress(String searchName)
         {
             var strLines = File.ReadLines(@"C:\Users\Bilal\Downloads\out111.csv");

             foreach (string line in strLines)
             {
                 if (line.Split(',')[1].Equals(searchName))
                 {
                     Console.WriteLine("Target Matched");
                     return line.Split(',')[2];

                 }

                 else
                 {
                     Console.WriteLine("Target do not Matched");
                 }
             }
             Console.ReadKey();

             return "";
         }*/

    }
}
