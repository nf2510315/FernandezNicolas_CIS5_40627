/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on January 27, 2018, 5:17 PM
 *  Purpose: Time Machine
 */

#include<iostream>
#include<iomanip>
using namespace std;
        
//function that calculates the total minutes
int calmin(int stime, int etime){
if(stime<etime) 

//start time and end time on same day
return ((etime/100-stime/100)*60 + etime%100 - stime%100);
else //start time and end time on consecutive days
return ((2400/100-stime/100)*60 - stime%100 + etime/100 *60 + etime%100);

}

int main(){
   int stime,etime;
   cout<<"Enter start and end time";
   cin>>stime>>etime;
   cout<<"The time difference between "<<setfill('0')<<setw(4)<<stime<<" and "<<setfill('0')<<setw(4)<<etime<<" is "<<calmin(stime,etime)<<" minutes";
   return 0;
}


