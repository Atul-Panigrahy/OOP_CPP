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

class Test
{
  public:
    static int x;
    
};

int Test::x = 1;

int main()
{
  Test t1,t2;
  std::cout << "Before Update: \n";
  std::cout << "Access from instance " << t1.x << "\n";
  std::cout << "Access from class directly " << Test::x << "\n";
  Test::x = 5;


  std::cout << "After Update: \n";
  std::cout << "Access from instance " << t1.x << "\n";
  std::cout << "Access from class directly " << Test::x << "\n";

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