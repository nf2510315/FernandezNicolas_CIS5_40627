/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 6, 2018, 1:20 PM
 * Purpose:  Making a C
 */

//System Libraries
#include <iostream>

int main(){
//Declare Variables
char input;  //char since you want characters and not numbers

std::cin >> input;  //read users input

//Print a big C consisting of single "X"
std::cout << " X X X\n";
std::cout << " X X\n";
std::cout << "X\n";
std::cout << "X\n";
std::cout << "X\n";
std::cout << "X\n";
std::cout << "X\n";
std::cout << " X X\n";
std::cout << " X X X\n";
std::cout << "\n\n\n";
	
//Print a big C consisting of the users input
std::cout << input << input << input << "\n";
std::cout << input << input << "\n";
std::cout << input << "\n";
std::cout << input << "\n";
std::cout << input << "\n";
std::cout << input << "\n";
std::cout << input << "\n";
std::cout << input << input << "\n";
std::cout << input << input << input << "\n";
        
return 0;
}   