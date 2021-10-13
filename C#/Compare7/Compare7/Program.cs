using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Compare7
{
    public class Program
    {
        static void Main(string[] args)
        {

            var linesA = File.ReadAllLines(@"C:\Users\Bilal\Downloads\Logs_Sample1.txt");

            var linesB = File.ReadAllLines(@"C:\Users\Bilal\Downloads\Logs_Sample.txt");

            string linesC = @"C:\Users\Bilal\Downloads\result2.txt";

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

           */

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


            var linesCSV = File.ReadAllLines(@"C:\Users\Bilal\Downloads\Logs_Sample1.csv");

            var outputCSV = File.ReadAllLines(@"C:\Users\Bilal\Downloads\output.csv");

            var c = 0;
            foreach (string a in linesCSV)
            {
                c++;

            }
            Console.WriteLine(c);





            Console.WriteLine("File is Empty");
            Console.WriteLine("Continue to copy the Data.");

            File.AppendAllText(@"C:\Users\Bilal\Downloads\output.csv", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample1.csv"));
            var b = 4;


            if (b == 4)
            {
                foreach (string line in linesCSV)
                {
                    var flag = 0;
                    foreach (string line1 in outputCSV)

                    {


                        if (line.Equals(line1))
                        {

                            flag = 1;

                            Console.WriteLine("Contents MAtched");
                            Console.WriteLine("Therefore, do not copy. Thanks.");

                        }

                        else if (!line.Equals(line1))
                        {
                            Console.WriteLine("Contents do not MAtched");
                            Console.WriteLine("Continue to copy the Data.");
                            flag = 3;
                            if (!line.Equals(line))
                            {

                                File.AppendAllText(@"C:\Users\Bilal\Downloads\output.csv", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample1.csv"));


                            }

                            else
                            {
                                Console.WriteLine("Contents MAtched");

                            }
                        }

                        else
                        {

                            if (line.Equals(null))
                            {
                                Console.WriteLine("File is Empty");
                            }

                        }

                    }

                    if (flag == 1)
                    {


                        Console.WriteLine("Contents MAtched");
                        Console.WriteLine("Therefore, do not copy. Thanks.");

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


            /*
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