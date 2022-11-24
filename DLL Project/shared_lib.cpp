#include "shared_lib.h"

void addition(int a, int b)
{
  int add = a+b;
  std::cout<< "Copyright Samciucov Valentin IS21Z" << endl;
  std::cout<< "Addition = "<< add << endl;
}

int substraction(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

int modulo(int a, int b)
{
  return a % b;
}
 

void showtext()
{
  char ch;
  fstream fp;
  fp.open("D:\\Documents\\GitHub\\Programarea-orientata-pe-obiect\\DLL Project\\text.txt", fstream::in);
    if(!fp)
    {
        cout<<"\nError Occurred!";
        
    }
    cout<<endl;
    while(fp>>noskipws>>ch)
        std::cout<<ch;
    fp.close();
    cout<<endl;
}
