#include "framework.h"
#include "Function.h"

double add(double a, double b) { return a + b; }
void text() 
{
    char ch;
    std::fstream fp;
    fp.open("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\text.txt", std::fstream::in);
    if (!fp)
    {
        std::cout << "\nError Occurred!";

    }
    std::cout << std::endl;
    while (fp >> std::noskipws >> ch)
        std::cout << ch;
    fp.close();
    std::cout << std::endl;
}
