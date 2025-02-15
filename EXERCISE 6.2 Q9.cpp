/*9. (Program) a. A clever and simple method of preparing to sort dates into ascending (increasing) or 
descending (decreasing) order is to convert a date in the form month/day/year into an 
integer number with the formula date = year × 10000 + month × 100 + day. For example, using 
this formula, the date 12/6/1999 converts to the integer 19991206, and the date 2/28/2011 converts to the
integer 20110228. Sorting the resulting integer numbers puts dates into the correct 
order automatically. Using this formula, write a function named convertdays() that accepts 
a month, day, and year; converts the passed data into a single date integer; and returns the 
integer to the calling function.
b. Include the convertdays() function written for Exercise 9a in a working program. The 
main() function should call convertdays() correctly and display the integer the function 
returns. Test the function by passing various data to it and verifying the returned value.*/
#include<iostream>
using namespace std;
int convertdays(int, int, int);
int main(){
	int month, day, year;
	cout<<"Enter month: ";
	cin>>month;
	cout<<"Enter Date: ";
	cin>>day;
	cout<<"Enter Year: ";
	cin>>year;
	int date = convertdays(month, day, year);
	cout<<"date new format: "<<date;
	return 0;
}
int convertdays(int m, int d, int y){
	int date = (  y * 10000) + ( m * 100) + d;
	return date;
}