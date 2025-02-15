/*9. (Program) a. The time in hours, minutes, and seconds is to be passed to a function named
totsec(). Write totsec() to accept these values, determine the total number of seconds in
the passed data, and display the calculated value.
b. Include the totsec() function written for Exercise 9a in a working program. The main()
function should correctly call totsec() and display the value the function returns. Use
the following test data to verify your program’s operation: hours = 10, minutes = 36, and
seconds = 54. Make sure to do a hand calculation to verify the result your program displays*/

#include<iostream>
#include<iomanip>
using namespace std;
int totsec(int, int, int);

totsec(int h, int m, int s)
{
	return (h*3600 + m*60 + s);
}
int main()
{
	int hours, minutes, seconds;
	// input time
	cout<<"Enter hours: ";
	cin>>hours;
	cout<<"Enter minutes: ";
	cin>>minutes;
	cout<<"Enter seconds: ";
	cin>>seconds;
	cout<<"Total seconds in the given time are: "<<totsec(hours, minutes, seconds); 
	cout<<"The End";
	return 0;
	
}
