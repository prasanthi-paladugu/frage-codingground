using System;

namespace Main
{
    class Program
    {
        static void Main(string[] args)
        {
            int a =  Int16.Parse(Console.ReadLine());
            int b = Int16.Parse(Console.ReadLine());
            int c = a + b;
            Console.WriteLine("The answer is {0} " , c );
        }
    }
}