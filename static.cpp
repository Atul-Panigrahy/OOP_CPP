#include <iostream>

/*
  STATIC DATA MEMBER:
     1. Declaring a data meber in a class as static gives it scope. i.e. the variable no longer remains
       specific and bound to one particular object instance. Thereafter, chaning the value from one instance
       reflects over all instances.
    2. They are created for one class and for every object shares them.

  STATIC MEMBER FUNCTIONS:
    1.  similar to static data members. They are allowed to access only other static fields (data and members)
    2. can't access non-static members
    3. Have no this pointer
    4. no concept of static constructor
*/

// // STATIC DATA MEMBER 
class Test
{
private:
  static int privateStaticVariable;

public:
  static int publicStaticVariable;

  Test()
  {
    privateStaticVariable = 0;
    publicStaticVariable = 0;
  }
};

int Test::publicStaticVariable = 1;
int Test::privateStaticVariable = 3; // gives no error 

int main()
{
  Test t1, t2;
  std::cout << "PUBLIC:"
            << "\n";
  std::cout << "Before Update: \n";
  std::cout << "Access from instance " << t1.publicStaticVariable << "\n";
  std::cout << "Access from class directly " << Test::publicStaticVariable << "\n";
  Test::publicStaticVariable = 5;

  std::cout << "After Update: \n";
  std::cout << "Access from instance " << t1.publicStaticVariable << "\n";
  std::cout << "Access from class directly " << Test::publicStaticVariable << "\n";

  // // INACCESSIBLE member
  std::cout << "PRIVATE:"
            << "\n";
  // std::cout << Test::privateStaticVariable << "\n";
  return 0;
}

/*
OUTPUT:

Before Update:
Access from instance 1
Access from class directly 1
After Update:
Access from instance 5
Access from class directly 5
*/