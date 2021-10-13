using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace compare
{
    public class Program
    {
        /*
        private bool GetCSVDiff(string firstFile, string secondFile, int columnIndex)
        {
            bool isColumnMatched = true;
            columnIndex = columnIndex - 1;
            int i = 0;
            foreach (var fileoneline in File.ReadAllLines(firstFile))
            {
                int j = 0;
                foreach (var line in File.ReadAllLines(secondFile))
                {
                    if (i == j)
                    {
                        var fields = line.Split(new char[] { ';' }, 2);
                        if (fileoneline.Split(';')[0].Split(',')[columnIndex].Trim() != fields[0].Split(',')[columnIndex].Trim())
                        {
                            isColumnMatched = false;
                            break;
                        }
                    }
                    j++;
                }
                i++;
            }
            return isColumnMatched;
        }

        */

        static void Main(string[] args)
        {
            Program p = new Program();
            var linesA = File.ReadAllLines(@"C:\Users\Bilal\Downloads\Logs_Sample1.txt");

            var linesB = File.ReadAllLines(@"C:\Users\Bilal\Downloads\Logs_Sample.txt");

            string linesC = @"C:\Users\Bilal\Downloads\result2.txt";


            var count = 0;
            foreach (string a in linesA)
            {
                count++;
            }

           // p.GetCSVDiff(@"C:\Users\Bilal\Downloads\output.csv", @"C:\Users\Bilal\Downloads\Logs_Sample1.txt", count);



            /*
           string B = File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample.txt");

           Console.WriteLine(B);


           var c = 0;


           string result = "";
           //previously, it was omitting the last line because of '<' so changed it to '<='

           var sb = new StringBuilder();
           string date = string.Empty;

           foreach (var line in linesA)
           {
               if (line.StartsWith("*"))
               {
                   date = line.Split()[6];
               }
               else
               {
                   var values = line.Split(new char[] { ' ', '\t' }, 6,
                       StringSplitOptions.RemoveEmptyEntries);

                   sb.Clear()

                       .Append(values[1]).Append(',')
                       .Append(values[0]).Append(',')
                       .Append(values[2]).Append(',')
                       .Append(values[3]).Append(',')
                       .Append(values[4]).Append(',')
                       .Append(values[5]);       

               }

           }


           for (int i=0; i<100; i++)
           {

                   if (linesA.Equals(linesB))
                   {
                       Console.WriteLine("Equals");
                       c++;
                   }

                   else
                   {
                       Console.WriteLine("Not Equal");
                       c++;
                       Console.WriteLine("Count= ", c);
                   }

           }

           

            var sb = new StringBuilder();
            string date = string.Empty;

            using (var output1 = new StreamWriter(@"C:\Users\Bilal\Downloads\Logs_Sample1.csv"))
            {
                
                foreach (var line in linesA)
                {
                    if (line.StartsWith("*"))
                    {
                        date = line.Split()[6];
                    }
                    else
                    {
                        var values = line.Split(new char[] { ' ', '\t' }, 6,
                            StringSplitOptions.RemoveEmptyEntries);

                        sb.Clear()

                            .Append(values[1]).Append(',')
                            .Append(values[0]).Append(',')
                            .Append(values[2]).Append(',')
                            .Append(values[3]).Append(',')
                            .Append(values[4]).Append(',')
                            .Append(values[5]);

                        output1.WriteLine(sb.ToString());
                    }
                }
            }


            var linesCSV = File.ReadAllLines(@"C:\Users\Bilal\Downloads\out111.csv");

            var outputCSV = File.ReadAllLines(@"C:\Users\Bilal\Downloads\output.csv");
            String path = @"C:\Users\Bilal\Downloads\output.csv";

            StringBuilder st = new StringBuilder();

            var c = 0;
            foreach (string a in linesCSV)
            {
                c++;
            }

            Console.WriteLine(c);

            string p = " ";

            if (new FileInfo(@"C:\Users\Bilal\Downloads\output.csv").Length == 0)
            {

                Console.WriteLine("File is Empty");
                Console.WriteLine("Continue to copy the Data.");

                File.AppendAllText(@"C:\Users\Bilal\Downloads\output.csv", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample1.csv"));

            }
            else
            {
                //Do something else here
                var csv = new StringBuilder();


                foreach (string line in linesCSV)
                {
                    var flag = 0;
                    foreach (string line1 in outputCSV)

                    {


                        if (line.Equals(line1))
                        {

                            flag = 1;

                            Console.WriteLine("Contents MAtched111");
                            Console.WriteLine("Therefore, do not copy. Thanks.111");
                            Console.ReadKey();
                            return;

                        }

                    }

                    if (flag==0)
                    {
                        Console.WriteLine("Contents do not MAtched111");
                        Console.WriteLine("Continue to copy the data. Thanks.111");
                        
                        Console.WriteLine(line);

                        p += line.Trim();
                        File.AppendAllText(path, line + Environment.NewLine);
                       


                        //File.WriteAllText(path, appendText);
                    }


                }
            }

                        /*

                       else if (!line.Equals(line1))
                       {
                           Console.WriteLine("Contents do not MAtched22222");
                           Console.WriteLine("Continue to copy the Data.222222");
                           flag = 3;

                       }

                       if (flag==3)
                       {
                           // string appendText = line;
                           // File.AppendAllText(path, appendText);

                           using (var reader = new eader(path))
                           {
                               CsvRow row = new CsvRow();
                               while (reader.ReadRow(row))
                               {
                                   foreach (string s in row)
                                   {
                                       Console.Write(s);
                                       Console.Write(" ");
                                   }
                                   Console.WriteLine();
                               }
                           }

                       }

                       else
                       {

                           if (line.Equals(null))
                           {
                               Console.WriteLine("File is Empty44444");
                           }
                       }

                   }

                   if (flag == 1)
                   {


                       Console.WriteLine("Contents MAtched434343");
                       Console.WriteLine("Therefore, do not copy. Thanks.434343");

                   }

                   else
                   {
                       if (!line.Equals(line))
                       {

                           File.AppendAllText(@"C:\Users\Bilal\Downloads\output.csv", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample1.csv"));


                       }

                   }

               }



           }



           var C = File.ReadAllLines(@"C:\Users\Bilal\Downloads\c.txt");
           var noDupText;


           foreach (string p in C)
           {
               var w = p.Split('\n');

              var noDup = new HashSet<string>(w);
               var noDupText = string.Join("\n", noDup);


           }

           Console.WriteLine(noDupText);


           var names = linesC.Distinct();

           foreach(string name in names)
           {
               linesC.AppendText(name + "\n");
           }




           string str = @"C:\Users\Bilal\Downloads\c.txt";
           string[] arr = str.Split(' ');
           Console.WriteLine(str);
           var a =
           from k in arr
           orderby k
           select k;
           Console.WriteLine("After removing duplicate words...");
           foreach (string res in a.Distinct())
           {
               Console.Write(" " + res.ToLower());
           }
           Console.ReadLine();


                       var sr = new StreamReader(File.OpenRead(@"C:\Users\Bilal\Downloads\c.txt"));
                       var sw = new StreamWriter(File.OpenWrite(@"C:\Users\Bilal\Downloads\c.txt"));
                       var lines = new HashSet<int>();
                       while (!sr.EndOfStream)
                       {
                           string line = sr.ReadLine();
                           int hc = line.GetHashCode();
                           if (lines.Contains(hc))
                               continue;

                           lines.Add(hc);
                           sw.WriteLine(line);
                       }
                       sw.Flush();
                       sw.Close();
                       sr.Close();


                               if (linesB.Equals(linesA))
                               {

                           Console.WriteLine("Error........! Same Files \n\n\n\n\n\n\n \n");
                           goto End;


                       }

                       else
                               {

                           Console.WriteLine("Files are different \n\n\n\n\n\n", result);
                           Console.WriteLine(linesA);
                           result += linesA.Trim();
                           c++;
                           goto t1;
                       }

                       t1:
                           File.AppendAllText(@"C:\Users\Bilal\Downloads\result2.txt", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample2.txt"));

                       Console.WriteLine(c);
                       */

            Console.ReadKey();
        }
    }
}
