//function to find maximum of two numbers
#include<iostream>
using namespace std;
int findMax(int, int);
int findMax(int a, int b)
{
	if (a>b)
		return a;
	else 
		return b;
}
int main()
{
	int num1, num2;
	cout<<"Enter a number: ";
	cin>>num1;
	cout<<"Enter a number: ";
	cin>>num2;
	cout<<"Maximum of these number is: "<<findMax(num1, num2);
	return 0;	
}