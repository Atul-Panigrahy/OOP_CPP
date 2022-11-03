
#include <iostream>

class Person{
  // by default memebers are private
  char name[20];
  int id;

  public:
    void getDetails(){
      // function body
      std::cout << "getDetails Function invoked.\n" ;
    }
};

int main()
{
  Person p1;
  p1.getDetails();

  return 0;
}