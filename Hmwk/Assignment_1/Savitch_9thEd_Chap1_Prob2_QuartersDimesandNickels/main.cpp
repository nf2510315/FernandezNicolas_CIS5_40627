/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 6, 2018, 1:00 PM
 * Purpose:  Quarters, Dimes, and Nickels
 */

//System Libraries
#include <iostream>
using namespace std;

//main function
int main (){
//Variable declaration
int number_of_quarters, number_of_dimes;
int number_of_nickels, total;
int quarters = 25;
int dimes = 10;
int nickels = 5;

//Prompt and read input from the keyboard
cout << "Enter the number of quarters:";
cin >> number_of_quarters;
cout << "Enter the number of dimes:";
cin >> number_of_dimes;
cout << "Enter the number of nickels:";
cin >> number_of_nickels;
	
//Calculation
total = (quarters*number_of_quarters) +(dimes*   
number_of_dimes) + (nickels* number_of_nickels);

//Display the result
cout << "Monetary value is " << total << " cents.\n";
	
return 0;
}