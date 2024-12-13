/*3. (Practice) a. Write a function named findAbs() that accepts a double-precision number
passed to it, computes its absolute value, and displays the absolute value. A number’s absolute
value is the number itself if the number is positive and the negative of the number if the
number is negative.
b. Include the function written in Exercise 3a in a working program. Make sure your function
is called from main(). Test the function by passing various data to it.*/
#include<iostream>
#include<iomanip>
using namespace std;
double findAbs(double num){
	if(num>0){
		return num;
	}
	else {
		double abs = num*(-1);
		 return abs;		
	}
}
int main(){
	double number;
		cout<<"\nEnter a double precision number: ";
		cin>>number;
		cout<<"\nAbsolute value of number: "<<findAbs(number);
		return 0;
}
