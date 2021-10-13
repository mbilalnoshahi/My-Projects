using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace readtext
{
    class Program
    {
        static void Main(string[] args)
        {
            var input = File.ReadLines(@"C:\Users\Bilal\Downloads\Logs_Sample.txt")
                .Where(s => s != string.Empty && !s.StartsWith(" "));
            
            var input1 = File.ReadLines(@"C:\Users\Bilal\Downloads\Logs_Sample1.txt")
                .Where(y => y != string.Empty && !y.StartsWith(" "));

            var input2 = File.ReadLines(@"C:\Users\Bilal\Downloads\Logs_Sample2.txt")
                .Where(x => x != string.Empty && !x.StartsWith(" "));




            string result = "";
            foreach (string line in input)
            {
                Console.WriteLine(line);
                result += line.Trim();

            }

            Console.WriteLine("First File \n", result);

            string result1 = "";
            foreach (string line in input1)
            {
                Console.WriteLine(line);
                result1 += line.Trim();

            }

            Console.WriteLine("Second File \n", result1);

            string result2 = "";
            foreach (string line in input2)
            {
                Console.WriteLine(line);
                result2 += line.Trim();

            }

            Console.WriteLine("Third File\n", result2);


            using (new StreamWriter(@"C:\Users\Bilal\Downloads\output1.txt"))
            {

            }

            File.AppendAllText(@"C:\Users\Bilal\Downloads\output1.txt", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample.txt"));

            var input3 = File.ReadLines(@"C:\Users\Bilal\Downloads\output1.txt")
              .Where(z => z != string.Empty && !z.StartsWith(" "));

            string result3 = "";
            foreach (string line in input3)
            {
                Console.WriteLine(line);
                result3 += line.Trim();

            }

            Console.WriteLine("Output1 File \n", result3);


        
                File.AppendAllText(@"C:\Users\Bilal\Downloads\output1.txt", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample1.txt"));

            



            File.AppendAllText(@"C:\Users\Bilal\Downloads\output1.txt", File.ReadAllText(@"C:\Users\Bilal\Downloads\Logs_Sample2.txt"));


            var input4 = File.ReadLines(@"C:\Users\Bilal\Downloads\output1.txt")
              .Where(x => x != string.Empty && !x.StartsWith(" "));

            string result4 = "";

            foreach (string line in input4)
            {
                Console.WriteLine(line);
                result4 += line.Trim();

            }

            Console.WriteLine("Third File\n", result4);

            var sb = new StringBuilder();
            string date = string.Empty;

            using (var output = new StreamWriter(@"C:\Users\Bilal\Downloads\output.csv"))
            {
                output.WriteLine("Nayatel Ip_Address,Date,Month,Time,Date (M/D/Y),Time with SYS_LOGs,Other Ip_Addresses");

                foreach (var line in input3)
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

                            .Append(values[3]).Append(',')
                            .Append(values[1]).Append(',')
                            .Append(values[0]).Append(',')
                            .Append(values[2]).Append(',')
                            
                            .Append(values[4]).Append(',')
                            .Append(values[5]);

                        output.WriteLine(sb.ToString());
                    }
                }
            }

            Console.ReadKey();

        }

        private static bool CompareFileSizes(IEnumerable<string> input3, IEnumerable<string> input1)
        {
            throw new NotImplementedException();
        }

        
    }
}