#include <iostream>

/*
  1. 'this' keyword store the address of the current object that you are working 
      with.
  2. 'this' pointer is not 
*/

class Hannah
{ 
  int h;

  public:

  Hannah(int num):h(num)
  {
    std::cout << "Value of 'this' Pointer = " << this << "\n";
    
    // error: lvalue required as unary '&' operand
    // std::cout << "Address of 'this' Pointer = " << (&this) << "\n";
  }

  void printCrap()
  {
    std::cout << "h = " << h << "\n";
    std::cout << "This -> h = " << this ->  h << "\n";
    std::cout << "*(this).h = " << (*this).h << "\n";
   }
};

int main()
{
  Hannah h0(23);
  h0.printCrap();

  return 0;
}

/*
  OUTPUT:
    Value of 'this' Pointer = 0x61fe1c
    h = 23
    This -> h = 23
    *(this).h = 23
*/