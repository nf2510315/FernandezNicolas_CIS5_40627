/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 27, 2018, 3:40 PM
 * Purpose: Sum of Numbers
 */

#include <iostream>
#include <cstdlib>

const int ZERO = 0;
using namespace std;

int main()
{
int target;
int count;
int sum = 0;
cout << "This program asks the user for a positive integer value." <<endl
<< "then it will sum of all the integers from 1 up to the number entered."<<endl<<endl;

cout << "Enter a positive integer value: " <<endl;
cin >> target;

if (target > ZERO)
{
count = 1;
while (count <= target)
{
sum += count;
count++;
}
}

else
{
cout << "You did not enter a positive integer value. Restart and try again.";
exit(0);
}

cout << "The sum of all the integers from 1 up to " << target <<" is: " << sum << endl;

return 0;
}