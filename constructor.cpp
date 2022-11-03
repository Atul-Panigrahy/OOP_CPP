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

// Member initialzer list
class Employee{
  public:
   std::string id, name;
   int years;

   Employee(std::string id, std::string name, int year):id(id), name(name), years(years)
   {  
     std::cout << "Member initializer list." << "\n";
   }

   /*
      // equivalent to
      Employee(std::string id, std::string name, int years)
      {  
        this -> id = id;
        this -> name = name;
        this -> years = years;
        std::cout << "Member initializer list." << "\n";
      }
   */
};


int main()
{
  Employee e1("E1C56", "Sample Employee", 23);
  
  return 0 ;
}


