/* 
 * File:   main.cpp
 * Author: Nicolas Fernandez
 * Created on February 4, 2018, 7:30 PM
 * Purpose:  Chips and Sales
 */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
string salsa_name[5]={"mild","medium","sweet","hot","zesty"};
int jar_sale[5]={0,0,0,0,0};

int i;
int total=0;
int high=0;
int high_index=0;
int low=0;
int low_index=0;
int temp=0;
for(i=0;i<5;i++)
{
while(temp<=0)
{
cout<<"enter the number of jars sold for "<<salsa_name[i]<<" ";
cin>>temp;
if(temp<=0)
cout<<"invalid data. please try again\n";

}
jar_sale[i]=temp;
temp=0;
}


cout<<"name\t jars sold\n";
cout<<"\n---------------------------\n";
for(i=0;i<5;i++)
{

cout<<" "<<salsa_name[i]<<"\t\t"<<jar_sale[i]<<"\n";

}
low=jar_sale[0];
for(i=0;i<5;i++)
{
total=total+jar_sale[i];
if(jar_sale[i] >= high)
{
high_index=i;
high=jar_sale[i];
}

if(jar_sale[i]<=low)
{
low_index=i;

low=jar_sale[i];
}
}

cout<<"\n total sale : "<<total;
cout<<"\n high seller : "<<salsa_name[high_index];
cout<<"\n low seller : "<<salsa_name[low_index];
}

