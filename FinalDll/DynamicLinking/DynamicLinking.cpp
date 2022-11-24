
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <tchar.h>
#include "Function.h"

int _tmain(int argc, _TCHAR* argv[])
{
    HINSTANCE lib = ::LoadLibrary(_TEXT("FinalDll.dll"));

    if (lib != NULL)
    {
        typedef double (*ptr)(double, double);
        typedef double (*ptr2)();
        ptr add = reinterpret_cast<ptr>(::GetProcAddress(lib, "add"));
        ptr2 text = reinterpret_cast<ptr2>(::GetProcAddress(lib, "text"));

        if (add != NULL && text != NULL)
        {
            double a, b;
            std::cout << "Dynamic DLL by Samciucov Valentin" << std::endl;
            std::cout << "Enter first number:" << std::endl;
            std::cin >> a;
            std::cout << "Enter second number:" << std::endl;
            std::cin >> b;
            std::cout << std::endl;
            std::cout << "Addition is: " << add(a, b) << std::endl;
            std::cout << "\nThe text is: " << std::endl;
            std::cout << text() << std::endl;
        }
    }
    else { std::cout << "Cannot load the DLL" << std::endl; }

    FreeLibrary((HINSTANCE)lib);
    std::system("pause");
}

