/*
10. (Program) Many states base yearly car registration fees on an automobile’s model year and
weight, using a schedule similar to the following:
Model Year           Weight                  Weight Class   Registration Fee
1990 or earlier      Less than 2700 lbs      1              26.50
                     2700 to 3800 lbs        2              35.50
                     More than 3800 lbs      3              56.50
1991 to 1999         Less than 2700 lbs      4              35.00
                     2700 to 3800 lbs        5              45.50
                     More than 3800 lbs      6              62.50
2000 or later        Less than 3500 lbs      7              49.50
                     3500 or more lbs        8              62.50
Using this information, write, compile, and run a C++ program that accepts an automobile’s
year and weight and determines and displays its weight class and registration fee.
*/

#include <iostream>
using namespace std;
int main() 
{
  int y;
  float w;
cout<<"Enter year of car: "<< endl;
cin>>y;
cout<<"Enter weight of car: "<< endl;
cin>>w;
if( y <= 1990)
{	if(w < 2700)
		cout<<"\nweight class is 1 \nregistration fee is 26.50";
	else if(w >2700 && w < 3800)
		cout<<"\nweight class is 2 \nregistration fee is 35.50";
	else if (w >3800)
		cout<<"\nweight class is 3 \nregistration fee is 56.50";
}
else if ( y > 1990 && y < 1999)
{
	if(w < 2700)
		cout<<"\nweight class is 4 \nregistration fee is 35.00";
	else if(w >2700 && w < 3800)
		cout<<"\nweight class is 5 \nregistration fee is 45.50";
	else if (w >3800)
		cout<<"\nweight class is 6 \nregistration fee is 62.50";
		
}
else if( y>2000)
{
	if(w<3500)
		cout<<"\nweight class is 7 \nregistration fee is 49.50";
	else if(w>=3800)
		cout<<"\nweight class is 8 \nregistration fee is 62.50";
}
}
 // good bye :)

