/*2. (Practice) a. Write a function named check() that has three parameters. The first parameter
should accept an integer number, and the second and third parameters should accept a doubleprecision number. 
The function body should just display the values of data passed to the function when it’s called. 
(Note: When tracing errors in functions, having the function display values
it has been passed is helpful. Quite often, the error isn’t in what the function body does with
data, but in the data received and stored.)
b. Include the function written in Exercise 2a in a working program. Make sure your function
is called from main(). Test the function by passing various data to it.*/
#include<iostream>
#include<iomanip>
using namespace std;
double check(int, double, double);
double check(int v1, double v2, double v3){
	cout<<"\nfirst value: "<<v1;
	cout<<"\nsecond value: "<<v2;
	cout<<"\nthird value: "<<v3;	
}
int main(){
	int val1;
	double val2, val3;
	cout<<"Enter value 1: ";
	cin>>val1;
	cout<<"Enter value 2: ";
	cin>>val2;
	cout<<"Enter value 3: ";
	cin>>val3;
	check(val1, val2, val3);
	return 0;
}
