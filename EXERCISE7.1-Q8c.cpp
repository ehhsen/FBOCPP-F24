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
{   int i = 0, mini, size = 8, fmin[size], min_index;
	cout<<"Enter integer at index "<<i<<" ";
	cin>>fmin[0];
	mini = fmin[0];
	for(i = 1;i<8;i++)
	{
		cout<<"Enter integer at index "<<i<<" ";
		cin>>fmin[i];
		if(fmin[i]  < mini)
		{
			mini = fmin[i];
			
		}	
	}
	cout<<"Minimum number from array is : "<<mini<<endl;
	
	return 0;
}
