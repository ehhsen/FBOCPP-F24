//8. (Program) a. Write, compile, and run a C++ program to input 10 integer numbers into an 
//array named fmax and determine the maximum value entered. Your program should contain 
//only one loop, and the maximum should be determined as array element values are being 
//input.
//(Hint: Set the maximum equal to the first array element, which should be input before 
//the loop used to input the remaining array values.)

//b. Repeat Exercise 8a, keeping track of both the maximum element in the array and the index 
//number for the maximum. After displaying the numbers, display these two messages 
//(replacing the underlines with the correct values):
//Theノaximumプalueナs:ダ___
//Thisナsテlementハumberダ__ナnフheネistバfハumbers

//c. Repeat Exercise 8b, but have your program locate the minimum value of the data entered.

#include<iostream>
using namespace std;
int main()
{   int i = 0, maxi, size = 8, fmax[size], max_index;
	cout<<"Enter integer at index "<<i<<" ";
	cin>>fmax[i];
	maxi = fmax[i];
	for(i = 1;i<8;i++)
	{
		cout<<"Enter integer at index "<<i<<" ";
		cin>>fmax[i];
		if(fmax[i] > maxi)
		{
			maxi = fmax[i];
			max_index = i;
		}	
	}
	cout<<"Maximum number from array is : "<<maxi<<endl;
	cout<<"This is element number "<<max_index<<" in the list of number";
	return 0;
}
