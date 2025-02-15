//7. (Program) Write, compile, and run a C++ program to input eight integer numbers into an 
//array named grade. As each number is input, add the numbers to a total. After all numbers are 
//input, display the numbers and their average.

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
int g = 8, i, total;
int  grade[g];
	for (i = 0; i <8; i++)
	{
		cout<<"grade "<<i<<"  ";
		cin>>grade[i]; 
		total = total + grade[i];
	}
		for (i = 0; i < 8; i++)
	{

	    cout<<grade[i]<<setw(7)<<" ";
	
    }
    cout<<"\nAverage is "<<total/8;
}