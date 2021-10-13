using System;
using System.IO;

class CompareTwoCSVFile
{
    public static void Main()
    {
        using (StreamReader reader = new StreamReader(@"C:\Users\Bilal\Downloads\Logs_Sample.txt"))
        {
            string line = null;
            while (null != (line = reader.ReadLine()))
            {
                string[] values = line.Split(',');
                var date = float.Parse(values[0]);
                float[] numbers = new float[values.Length - 1];
                for (int i = 1; i < values.Length - 1; i++)
                    numbers[i - 1] = float.Parse(values[i]);

                // do stuff with date and numbers
            }
        }

        Console.ReadKey();
    }
}