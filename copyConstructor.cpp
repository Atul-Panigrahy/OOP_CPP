#include <iostream>

/*

    COPY CONSTRUCTOR:
      1. it is a member function that intializes an object using another object of the same class.
          className(const className & anotherObject)

      2. Copy constructor, in general is not required to be defined by the user, as the compiler
         automatically provides a default copy constructor.
      3. However this default copy constructor performs a shallow copy only. (i.e. copy only the values.)
         This results in pointer variables pointin to the same instances upon copy.

         |
         |
         |

*/

class Array
{
public:
  int n;
  int *ref;

  Array(int n) : n(n)
  {
    ref = new int[n];
    std::cout << "The Address allocated to the ref = ref = " << ref << "\n";
    std::cout << "Address where ref is stored = &ref = " << &ref << '\n';
    for (int i = 0; i < n; i++)
    {
      *(ref + i) = 1;
    }
  }

  // custom copy constructor for deep copying
  Array(const Array &arrObj) : n(arrObj.n)
  {
    std::cout << "Custom deep copy constructor called" << "\n";
    ref = new int[n];
    for (int i = 0; i < n; i++)
    {
      *(ref + i) = *(arrObj.ref + i);
    }
  }
};

int main()
{
  Array arr1(10);
  Array arr2 = arr1; // copy constructor called at this point
  arr2.n = 5;        // changing n value in 2nd instance

  for (int i = 0; i < 10; i++)
  {
    *(arr1.ref + i) = 2; // changing array value to 2 in second instance
  }

  std::cout << "n value of 1st instance " << arr1.n << "\n";
  std::cout << "Array values of 1st instance After changing arr2 instance"
            << "\n";

  for (int i = 0; i < arr1.n; i++)
  {
    std::cout << *(arr1.ref + i) << " ";
  }
  std::cout << "\n";
  /*
  OUTPUT Without custom deep copy constructor:

  The Address allocated to the ref = ref = 0x7212a0
  Address where ref is stored = &ref = 0x61fe08
  n value of 1st instance 10
  Array values of 1st instance After changing arr2 instance
  2 2 2 2 2 2 2 2 2 2
*/

  /*
    EXPLANATION:
    1. In the above code,w efind the value of memeber n for instance 1 is not modified as it is not a pointer vlaue.
       Thus upon copying new instance of n got created for instance 2, Any changes to n in arr1 didnt change for arr2.
    2. However, arr1.ref is a pointer. so, upon copy constructor call, the address value copied to arr2.ref. And thus
       any changes to arr2.ref gets reflected at arr1.ref, because both of them pointing to same array. This is an example
       of SHALLOW COPY.
  */

  Array arr3(arr1);

  /*

    OUPUT AFTER CUSTOM DEEP COPY CONSTRUCTOR:

    The Address allocated to the ref = ref = 0xd212a0        
    Address where ref is stored = &ref = 0x61fe08
    Custom deep copy constructor called
    n value of 1st instance 10
    Array values of 1st instance After changing arr2 instance
    2 2 2 2 2 2 2 2 2 2 
    Custom deep copy constructor called
  */

  return 0;
}
