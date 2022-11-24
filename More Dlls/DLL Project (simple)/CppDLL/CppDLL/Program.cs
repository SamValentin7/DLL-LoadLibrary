using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace CppDLL
{
    internal class Program
    {

        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\Project copies\\DLL Project\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int addition(int a, int b);

        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\Project copies\\DLL Project\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int showtext();
        


        static void Main(string[] args)
        {
            Console.WriteLine("Dati primul numar: ");
            string input1 = Console.ReadLine();
            int numfirst = int.Parse(input1);
            Console.WriteLine("Dati al doilea numar: ");
            string input2 = Console.ReadLine();
            int numsecond = int.Parse(input2);

            int add = addition(numfirst, numsecond);
            Console.WriteLine("Adunarea = " + add);
            showtext();
            
            Console.ReadLine();

        }
    }
}
