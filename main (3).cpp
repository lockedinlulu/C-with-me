/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

//one general template:
template <typename T>
T applyPercentage(T amount, T percent, bool add){

T change = amount * (percent / 100);


if(add)
    return amount + change; // tip or tax
else 
    return amount - change; // discount 


}

int main(){
    double bill = 100.0;
    
    //1. tip
    
    double totalWithTip = applyPercentage(bill, 15.0, true);
    cout << "Total with tip: $" << totalWithTip << endl;
    
    //2. Tax
    double totalWithTax = applyPercentage(bill, 8.875, true);
    cout << "Total with tax: $" << totalWithTax << endl;
    
    //3. discounted bill
    double discountedBill = applyPercentage(bill, 10.0, false);
    cout << "Total with discount: $" << discountedBill << endl;
    
    //4. using integer
    
    int intbill = 50;
    
    int roundedTotal = applyPercentage(intbill, 10, true);
    cout << "Rounded total: $" << roundedTotal << endl;
    
    
    
    return 0;
    
}



















