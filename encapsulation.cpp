#include <iostream>
/*
  ENCAPSULATION:  
    1. binding togather the data and the member functions that manipulates them.
        Ex: Company -|- Account section
                     |- Finance Section
                     |- Sales Section
*/

class Encapsulation
{
  private:
    int x;
  public:
    void setter(int a)
    {
      x = a;
    }

    int getter()
    {
      return x;
    }
}; 

int main()
{
  Encapsulation obj;
  obj.setter(5);
  std:: cout << obj.getter() << "\n";

  /* 
    OUTPUT: 
     5
  */
  return 0 ;
}