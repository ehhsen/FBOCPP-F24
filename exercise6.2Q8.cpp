/*8. (Program) a. Write a function named daycount() that accepts a month, day, and year as its 
input arguments; calculates an integer representing the total number of days from the turn of 
the century to the date that’s passed; and returns the calculated integer to the calling function. 
For this problem, assume each year has 365 days and each month has 30 days. Test your function by verifying that the date 1/1/00 returns a day count of 1.
b. Include the daycount() function written for Exercise 8a in a working program. The 
main() function should correctly call daycount() and display the integer returned by the 
function. Test the function by passing various data to it and verifying the returned value.*/
#include<iostream>
using namespace std;
int daycount(int m, int d, int y)
{
	if (m == 1)
		m = 0;
	int result = d + ( m*30) + (y*365);
	return result; 
}
int main()
{
	int month, day, year;
	cout<<"     [MM/DD/YEAR]    ";
	cout<<"\nEnter Months: ";
	cin>>month;
	cout<<"\nEnter Day: ";
	cin>>day;
	cout<<"\nEnter Year: ";
	cin>>year;
	int total_days = daycount(month, day, year);
	cout<<"\nTotal days are: "<<total_days;
	return 0;
}


