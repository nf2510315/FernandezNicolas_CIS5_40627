/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 27, 2018, 4:23 PM
 * Characters for the ASCII Codes
 */

#include <iostream>
using namespace std;
 
int main()
{
	// Constants
	const int CODES = 127;	// Number of ASCII codes
	const int CHARS	= 16;	// Number of characters per line
 
	char character;	// To hold the character for the ASCII code
 
	// Display the title of the programming challenge.
	cout << "Characters for the ASCII Codes\n";
 
	// Loop through the ASCII codes.
	for(int code = 0; code <= CODES; code++)
	{
		// Store the character for the ASCII code.
		character = code;
 
		// Display 16 characters per line.
//		(code % CHARS == 0) ? (cout << character << endl) : (cout << character);
		// or
		if (code % CHARS == 0)
        {
            (cout << character << endl);
        }
        else
            (cout << character);
 
	}
 
	// Skip a few lines when the loop has finished.
	cout << endl << endl;
 
	return 0;
}
 