using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace factorialReplacing
{
    class Program
    {
        static void Main(string[] args)
        {
            int n1 = 0, n2 = 1, n3, i, number;
            Console.Write("Enter the number of elements: ");
            number = int.Parse(Console.ReadLine());
            Console.Write("The result after replacing: ");
            Console.Write(n1 + " " + n2 + " ");
            for (i = 2; i < number; ++i)
            {
                n3 = n1 + n2;
                if (n3 % 5 == 0 || n3 % n3  == 0)   
                {
                    Console.Write(0 + " ");
                }
                else
                {
                    Console.Write(n3 + " ");
                }
                n1 = n2;
                n2 = n3;
            }
        } 
    }
}
            

        
