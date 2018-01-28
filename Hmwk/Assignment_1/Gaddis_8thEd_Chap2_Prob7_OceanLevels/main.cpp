/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 5, 2018, 1:20 PM
 * Purpose:  Annual Pay
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double rate (1.5), year5 (rate * 5), year7 (rate * 7), year10 (rate * 10);

cout << setprecision(1) << fixed;
cout << "In 5 years the ocean level will be: \t" << year5 << " millimeters higher" << endl;
cout << "In 7 years the ocean level will be: \t" << year7 << " millimeters higher" << endl;
cout << "In 10 years the ocean level will be: \t" << year10 << " millimeters higher" << endl;

return 0;
}