/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


// find the maximum value
template <typename T>
T myMax(T a, T b){
    
    return (a > b) ? a : b;

}

int main()
{
   
   cout << "int: " << myMax(3,7) << endl;
   cout << "double: " << myMax(3.14, 2.71) << endl;
   cout << "char: " << myMax('a','z') << endl;
   cout << "char: " << myMax('a','Z') << endl;

   
   return 0;

}