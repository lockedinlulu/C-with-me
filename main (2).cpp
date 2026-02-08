/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

template <typename T>
T calculateTotalBill(T billAmount, T tipPercent){
    
    T tipAmount = billAmount * (tipPercent/100);
    T totalBill = billAmount + tipAmount;
    
    cout << "Bill amount $" << billAmount << endl;
    cout << "Tip (" << tipPercent << "%): $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill << endl;
    
    return totalBill;

}

int main()
{
    
   double bill = 100.00;
   double tipP = 15.0;
   
   calculateTotalBill(bill, tipP);

    return 0;
}