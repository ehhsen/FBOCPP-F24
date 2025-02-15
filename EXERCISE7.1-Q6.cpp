//6. (Program) a. Write, compile, and run a C++ program to input the following values into an 
//array named prices: 10.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, and 17.59. After the 
//data has been entered, have your program display the values.
//b. Repeat Exercise 6a, but after the data has been entered, have your program display it in the 
//following form:
//10.95 16.32 12.15
//ƒ8.22 15.98 26.22
//13.54 ƒ6.45 17.59

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	int arr_size = 9, i;
	double prices[arr_size];
	for (i = 0; i <9; i++)
	{
		cout<<"Price "<<i<<"  ";
		cin>>prices[i]; 
	
	}
	for (i = 0; i < 9; i++)
	{
		if(i == 3 || i == 6)
		{cout<<endl;
		}
	    cout<<setw(7)<<prices[i]<<" ";
	
    }
				
}