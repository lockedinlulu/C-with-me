//pointers

#include <iostream>
using namespace std;

int main()
{
  
  //step one: declare a variable
  int a;
  //step two: declare a pointer
  int *p;
  
  //step three: make the pointer point to 'a'
  // '&a' means the address of 'a'
  
  p = &a;
  
  //step 4: assign a value to 'a'
  a = 67;
  
  //step 5: print values and addresses
  
  cout << "p (address stored in p):" << p << endl; //address of 'a'
  cout << "&p (address of p):" << &p << endl; // address of 'p'
  cout << "&a (address of a):" << &a << endl; // address of 'a'
  cout << "*p (value pointed to by p: " << *p << endl; //the value of a
   
  //step 6: modify the value of 'a' using the pointer
  // '*p' means go to the address that p points to and change the value there
  *p = 14;
  
  //step 7: print 'a' again
  
  cout << "a (after *p ((pointer p)) = 14) " << a << endl;

    return 0;
}