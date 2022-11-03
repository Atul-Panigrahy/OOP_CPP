#include <iostream>

/*
  1. Constructor chaining is the process of resuing constructors by other constructors
     to avoid repeating code
  2. This is done by calling one contructor to set common values by others. 
*/

class Employee{
  public:
    std::string id,name;
    int years;

    Employee(std::string id): id(id)
    {
      std::cout << "Constructor with only id provided as parameter" << "\n";
    }

    Employee(std::string id, std::string name): Employee(id)
    {
      this -> name = name;
      std::cout << "Constructor with id & name provided as parameter" << "\n";
    } 

    Employee(std::string id, std::string name, int years): Employee(id, name)
    {
      this -> years = years;
      std::cout << "Constructor with id, name & years provided as parameter" << "\n";
    }
};

int main()
{ 
  Employee e1("P43igosf", "Employee One", 45);

  return 0;
}


/*
  OUTPUT:
  
  Constructor with only id provided as parameter
  Constructor with id & name provided as parameter
  Constructor with id, name & years provided as parameter
*/