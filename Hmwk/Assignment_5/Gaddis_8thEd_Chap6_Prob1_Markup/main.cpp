/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on February 4, 2018, 5:55 PM
 * Purpose:  Markup
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double wholesaleCost, double markupPercent)
{

double retailPrice;
retailPrice = (wholesaleCost * markupPercent) + wholesaleCost;
return retailPrice;

}

int main()
{
double wholesaleCost;
double markupPercent;
double total;

double calculateRetail (double, double);

//Enter Wholesale Price
cout << "Enter wholesale Price: $";
cin >> wholesaleCost;

if( wholesaleCost < 0 )
{
cout << "Error invalid wholesale cost...Enter a postive number: $";
cin >> wholesaleCost;
}

//Enter Markup Percentage
cout << "Please Enter markup percent: ";
cin >> markupPercent;

if(markupPercent < 0)
{
cout << "Error invalid markup percentage...enter a postive number ";
cin >> markupPercent;
}

markupPercent = markupPercent * .01;

//This is the function call
total = calculateRetail(wholesaleCost, markupPercent);

cout << fixed << setprecision(2);
cout << "The retail price is $" << total << endl;
cout << endl;

system ("pause");
return 0;
} 