/*
  Constructor:
    A member function of a class which initializes objects of class.
    It's different from a normal member function in following aspects:
    1. Has same name as class
    2. doesn't have a return type
    3. automatically invoked when the object is created.
    4. if we don't explicitly invoke constructor, compiler calls the default constructor.

    Types of constructor:
    1. Default (Takes no argument)
    2. Parametrized
    3. Copy
*/

# include <iostream>

int globalvariable;

class Employee{
  public:
   std::string id, name;
   int years;

    Employee()
    {  
      std::cout << "Class Number " << globalvariable << "\n";
      ++ globalvariable;
    }

    Employee(std::string id, std::string name, int year):id(id), name(name), years(years)
    {  
      std::cout << "Through member initializer list" << "\n"; 
      std::cout << "Class Number " << globalvariable << "\n";
      ++ globalvariable;
    }
   
};


int main()
{
  Employee e1, e2, e3("E1C56", "Sample Employee", 23);
  
  return 0 ;
}


/*
  OUTPUT:
  Class Number 0
  Class Number 1
  Through member initializer list
  Class Number 2
*/
