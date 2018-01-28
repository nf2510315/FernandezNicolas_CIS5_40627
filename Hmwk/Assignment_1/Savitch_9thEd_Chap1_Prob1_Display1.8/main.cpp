/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 6, 2018, 1:00 PM
 * Purpose:  Display 1.8
 */

//System Libraries
#include <iostream>
using namespace std;

//main function
int main( ) {
//Variable declaration
int first_num,second_num,sum,product;

//Prompt the user to enter input
cout << "Enter first number: ";
cin >> first_num;
cout << "Enter second number: ";
cin >> second_num;

//Sum calculation
sum=first_num+second_num;
cout << "Sum of two numbers:"<<sum<<endl;

//Product calculation
product=first_num*second_num;
cout << "Product of two numbers:"<<product<<endl;

return 0;
}