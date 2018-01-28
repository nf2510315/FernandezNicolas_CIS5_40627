/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 27, 2018, 4:36 PM
 * Purpose: Membership Fees Increase
 */

#include <iostream>
using namespace std;

int main()
{
	const double RATE = 0.04,
				 CURRENT_CHARGE = 2500.0;
	int Year;
	double YrRate;

	cout << "\nCountry club projected rates\n"
		 << "    for the next six years\n"
		 << "-----------------------------\n"
		 << "      Year       Rate\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 6; Year++)
	{
		YrRate = CURRENT_CHARGE * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
	return 0;
}

