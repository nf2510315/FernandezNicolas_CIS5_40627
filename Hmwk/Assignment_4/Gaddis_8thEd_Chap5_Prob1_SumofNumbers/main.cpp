/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 27, 2018, 3:40 PM
 * Purpose: Sum of Numbers
 */

#include <iostream>
using namespace std;

int main ()
{
	int sum = 0;
	int num;

	
	cout << "Enter a number greater than 0.\n";
		cin >> num;
	
		
	for (int counter = 0; counter <= num; counter++)
	
	{	
		
		sum = sum + num;
		
		counter++;
	}
	

	if (num < 1)
		
	{
			cout << "\n" << num << " is an invalid input.";
			cout << " The program will now terminate.\n";
		
	}
	
	else

	
	cout << "\nThe sum of numbers 1 - " << num
			 << " " << "is " << sum << endl;
		
	
	return 0;
	}