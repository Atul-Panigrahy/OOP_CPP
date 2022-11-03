#include <iostream>

/*
  DESTRUCTOR:
  1.  It is a member function which invoked when destruction or deletetion of object.
  2. A destrtuctor is automatically called when the object goes out of scope.
      i.e. when
      1. when function contains the object ends
      2. the program ends
      3. A block containing local variable ends
      4. A delete operator is called

  3. Destructors are different from normal functions. 
      1. They have same name as the class preced by ~
      2. they dont take any arguments and dont return anything
  4. There can be only one destructor in a class.
  5. Accessing a data member depends solely on the access control of that data member. This access 
      control is given by access modifiers [ public, private, protected ].

  6. Can be used to free the heap memory allocated by member funtions.
*/

int globalvariable ; // global variable by default initialized to 0 value

class Employee{
  public:
   std::string name;
   int years, id;

    Employee()
    {  
      std::cout << "Class Number " << globalvariable << "\n";
      id = globalvariable;
      ++ globalvariable;
    }

    ~Employee()
    {
      std::cout << "Destructor is called for class " << id << "\n"; 
    }   
};



int main()
{
  std::cout << "Main function Starting" << "\n";

  Employee e1,e2;

  {
    std::cout << "Block Scope start" << "\n";
    Employee e3;
    std::cout << "Block scope end" << "\n" ;
  }

  std::cout << "Main function ending" << "\n";
  return 0; 
}

/*
  OUTPUT: 
    Main function Starting
    Class Number 0
    Class Number 1
    Block Scope start
    Class Number 2
    Block scope end
    Destructor is called for class 2
    Main function ending
    Destructor is called for class 1
    Destructor is called for class 0
*/