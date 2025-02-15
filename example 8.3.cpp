// program to create a pointer to a variable of type int
#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	int number = 7;
	ptr = &number;\
	cout<<"value of variable number is: "<<number;
	cout<<"\nAddrress of variable number is: "<<ptr;
	cout<<"\nValue pointed by pointer ptr is: "<<*ptr;
}