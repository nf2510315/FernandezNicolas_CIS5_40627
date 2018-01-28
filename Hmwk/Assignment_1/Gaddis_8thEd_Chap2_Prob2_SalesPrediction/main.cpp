/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 5, 2018, 12:40 PM
 * Purpose:  Sales Prediction
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
double sales_division (0.58);
int total_sales = 8600000;
int sales = sales_division * total_sales;

cout << left << setw(30) << "Company Annual Sales:" << right << setw(1) << " $" << setw(6) << total_sales << endl;
cout << left << setw(30) << "The East Coast Sales Total:" << right << setw(1) << " $" << setw(6) << sales << endl;

return 0;
}