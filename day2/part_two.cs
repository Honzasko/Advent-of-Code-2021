using System;
using System.Collections.Generic;
using System.Linq;

namespace adventofcode2021_2 // Note: actual namespace depends on the project name.
{
    public class Program
    {
        public static void Main(string[] args)
        {
            int x = 0;
            int y = 0;
            int aim = 0;
            string[] lines = System.IO.File.ReadAllLines(@"");
            foreach (string line in lines)
            {
                string[] s = line.Split(' ');
                string command = s[0];
                int units = Int32.Parse(s[1]);
                if(command == "forward")
                {
                    x += units;
                    y += aim * units;
                }
                else if(command == "up")
                {
                    aim -= units;
                }
                else if(command == "down")
                {
                    aim += units;
                }
            }
            int result = 0;
            if(y == 0)
            {
                result = x;
            }
            else if(x == 0)
            {
                result = y;
            }
            else {
                result = y*x;
            }
            Console.WriteLine(result);
        }
    }
}
