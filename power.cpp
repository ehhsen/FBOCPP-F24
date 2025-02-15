/* write a program to find power of a number
input:
	number , power
output:
	number raised to power
process:
	iterate loop variable upto power times*/

#include<iostream>
#include<iomanip>
using namespace std;

int num, pow, loop, result = 1 ;
int power(int , int );
int power(int n1, int n2){
	int loop; 
	for(loop = pow; loop > 0 ; loop --)
	{
		result = result*n1;
	}
	return result;
	
}
int main(){
	
	cout<<"\nEnter a number: ";
	cin>>num;
	cout<<"\nEnter a number as exponent: ";
	cin>>pow;	
	cout<<"\n"<<num<<" raised to power "<<pow<<" is "<<power(num, pow);

		
}
	
