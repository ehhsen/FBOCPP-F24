//9. (Program) Write, compile, and run a C++ program that creates an array of five integer
// numbers and displays these numbers in reverse order

#include<iostream>
using namespace std;
int main()
{   int i, arr[5];
	for(i = 0; i < 5 ; i ++)
	{
		cout<<"Enter element: ";
		cin>>arr[i];
	}
    for(i = 4; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
}
	
