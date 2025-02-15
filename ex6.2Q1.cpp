/*1. (Modify) Rewrite Program 6.4 so that the findMax() function accepts two double-precision 
arguments and returns a double-precision value to main(). Make sure to modify main() to 
pass two double-precision values to findMax() and to accept and store the double-precision 
value returned by findMax().*/
#include<iostream>
using namespace std;
double findMax(double, double);
double findMax(double a, double b)
{
	if (a>b)
		return a;
	else 
		return b;
}
int main()
{
	double num1, num2, max;
	cout<<"Enter a number: ";
	cin>>num1;
	cout<<"Enter a number: ";
	cin>>num2;
	max = findMax(num1, num2);
	cout<<"Maximum of these number is: "<<max;
	return 0;	
	
}