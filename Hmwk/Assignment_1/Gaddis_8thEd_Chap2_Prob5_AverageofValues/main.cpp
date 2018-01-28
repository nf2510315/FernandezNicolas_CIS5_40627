/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 5, 2018, 1:00 PM
 * Purpose:  Average of Values
 */

//System Libraries
#include<iostream>
using namespace std;

const int a = 28;
const int b = 32;
const int c = 37;
const int d = 24;
const int e = 33;

// It is simpler to take the size of the array as an argument than to try and
// find the number of variables in an array pointer.
// The name int_sum prevents conflicts with the variable, sum.
int int_sum(int nums[], int size) {
  // sum is declared as 0 so I can add to it in the for loop without any extra
  // code.
  int sum = 0;

  for(int i = 0; i < size; i++) {
    sum = sum + nums[i];
  }

  return sum;
}

int main() {
  int constants[6] = {a, b, c, d, e};
  // sizeof returns the size of the argument in bytes. So, I am dividing the
  // size of the array constants by the size of a constant stored in the array.
  int size = sizeof(constants) / sizeof(constants[0]);

  int sum = int_sum(constants, size);
  double average = sum / 5;

  cout << average << '\n';

  // Necessary to prevent warnings from the g++ compiler.
  // I'm not keeping the program running in a paused state because I am running
  // it from a CLI, so letting it close is most convenient.
  return 0;
}