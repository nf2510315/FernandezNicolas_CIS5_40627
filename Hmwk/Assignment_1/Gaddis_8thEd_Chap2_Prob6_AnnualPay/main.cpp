/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 5, 2018, 1:00 PM
 * Purpose:  Annual Pay
 */

//System Libraries
 #include <iostream>
using namespace std;

int main(){
int payAmount(2200.0), payPeriods(26), annualPay(payAmount * payPeriods);

cout << "Annual Pay Total: $" << annualPay << endl;

return 0;
}