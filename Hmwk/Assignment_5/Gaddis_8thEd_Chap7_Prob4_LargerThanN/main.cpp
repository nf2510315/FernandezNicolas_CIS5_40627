/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on February 4, 2018, 8:04 PM
 * Purpose:  Larger Than n
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void arrayFunction(int[], int, int); // Prototype for arrayFunction. int[] = array, int = size, int = n

int main()
{  
    int n; // Initialize user inputted value "n"
    cout << "Enter Value:" << endl;
    cin >> n;

    const int size = 20; // Constant array size of 20 integers.
    int arrayNumbers[size] = {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24}; // 20 assigned values for the array

    arrayFunction(arrayNumbers, size, n); // Call function
    return 0;
}    

/*  Description of code below:

The For statement scans each variable, if the array values are greater than the 
variable "n" inputted by the user the output is only those values greater than "n."
*/

void arrayFunction(int arrayN[], int arrayS, int number) // Function Definiton
{
    for (int i=0; i<arrayS; i++) 
    {    
        if (arrayN[i] > number)
        {

        cout << arrayN[i] << " ";
        cout << endl;

        }
    }    
}