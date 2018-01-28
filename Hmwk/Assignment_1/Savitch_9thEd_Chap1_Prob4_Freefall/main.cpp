/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 6, 2018, 1:17 PM
 * Purpose:  Freefall
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

int main(){  
    
double time = pow(time, 2.0);
double acceleration = 32; //feet per second
double distance = (acceleration * time)/2;

cout << "This is a program that calculates how far an object will fall in" << endl;
cout << "user specified seconds." << endl;
cout << "Enter the number of seconds." << endl;
cin >> time;
cout << endl << distance;

char letter;
cout << endl << "Enter a letter to end the program" << endl;
cin >> letter;

return (0);
}