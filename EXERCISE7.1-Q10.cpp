//10. (Program) a. Write, compile, and run a C++ program to input the following integer numbers 
//into an array named grades: 89, 95, 72, 83, 99, 54, 86, 75, 92, 73, 79, 75, 82, and 73. As each 
//number is input, add the numbers to a total.
// After all numbers are input and the total is obtained, calculate the average of the numbers
//, and use the average to determine the deviation of each value from the average.
// Store each deviation in an array named deviation. Each 
//deviation is obtained as the element value less the average of all the data. Have your program 
//display each deviation with its corresponding element from the grades array.
//b. Calculate the variance of the data used in Exercise 10a. The variance is obtained by squaring 
//each deviation and dividing the sum of the squared deviations by the number of deviations.

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int i, total = 0,sum = 0, grades[14];
	float average, deviation[14], variance;
	for(i = 0; i<14; i ++)
	{
		cout<<"Enter number: ";
		cin>>grades[i];
		total = total + grades[i];
	}
	average = total/14;
	cout<<"Deviation"<<setw(10)<<"Element"<<endl;
	for(i = 0; i<14; i ++)
	{
		deviation[i] = grades[i] - average;
		sum = sum + (deviation[i]*deviation[i]);
		
		cout<<deviation[i]<<setw(15)<<grades[i]<<endl;
		
	}
	variance = sum/14;
	cout<<"Variance is : "<<variance;
	
}
	
	
