using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace sorting
{
    class Program
    {
        static void Main(string[] args)
        {
            string pathToLog = @"C:\Users\Bilal\Downloads\out111.csv";
            DataView dv = dt.DefaultView;
            dv.Sort = "IPAddress asc";
            dt = dv.ToTable();

        }
    }
}
