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
        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int addition(int a, int b);

        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int substraction(int a, int b);

        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int multiply(int a, int b);

        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int modulo(int a, int b);

        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\shared_lib.dll", CallingConvention = CallingConvention.Cdecl)]
        static extern int showtext();
        [DllImport("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\shared_lib.dll")]
        public static extern IntPtr LoadLibrary();


        static void Main(string[] args)
        {
            Console.WriteLine("Enter first number for addition: ");
            string input1 = Console.ReadLine();
            int numfirst = int.Parse(input1);
            Console.WriteLine("Enter second number for addition: ");
            string input2 = Console.ReadLine();
            int numsecond = int.Parse(input2);

            addition(numfirst, numsecond);
            int sub = substraction(50, 45);
            Console.WriteLine("Substraction = " + sub);
            int mtp = multiply(3, 4);
            Console.WriteLine("Multiplication = " + mtp);
            int mod = modulo(15, 4);
            Console.WriteLine("Modulo = " + mod);
            showtext();
            
            Console.ReadLine();

        }
    }
}
