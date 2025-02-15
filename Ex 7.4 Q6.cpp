/*ex 7.4 q 
6. (Program) Write, compile, and run a C++ program that selects the values in a 4-by-5 array of
positive integers in increasing order and stores the selected values in a one-dimensional array
named sort. Use the data given in Exercise 5a to initialize the two-dimensional array*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	const int row = 4, col = 5, array[row][col] = { 1,2,3,4,7,
	4,5,4,3,8,
	5,67,76,5,54,
	54,44,65,45,3
	};
	int ele = row *col;
	int sort[ele];
	int min = array[0][0];
	for (int i = 0; i <ele; i ++)
	{
		for(int j = 0; j <4; j++)
		{
			for(int k = 0; k <5; k++)
			if ( array[j][k] < min)
			 {
			 	 min = array[j][k];
			 }
		}
		sort[i] = min;
	}
	for (int i = 0; i <ele; i ++)
		cout<<setw(3)<<sort[i]<<"  ";
	
	
	
}