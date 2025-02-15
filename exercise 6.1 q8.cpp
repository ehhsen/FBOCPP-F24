/*hapter 6 exerise 6.1
8. (Modify) a. Modify the function written for Exercise 7a to accept the starting value of the
table, the number of values to be displayed, and the increment between values. If the increment isn’t 
set explicitly, the function should use a default value of 1. Name your function
selTab(). A call to selTab(6,5,2); should produce a table of five lines, the first line 
starting with the number 6 and each succeeding number increasing by 2.
b. Include the function written in Exercise 8a in a working program. Make sure your function
is called from main(). Test the function by passing various data to it.*/
#include<iostream>
#include<iomanip>
using namespace std;
void numSqCube(int start, int end, int j = 1)
{
	cout<<"\nNUMBER"<<"		"<<"SQUARE"<<"		"<<"CUBE"<<endl;
	cout<<"___________________________________________"<<endl;
	for(int i = start; i <= end; i= i + j)
	{
		cout<<setw(4)<<i<<"		"<<setw(4)<<i*i<<"		"<<setw(4)<<i*i*i<<endl;
		
	}
}
int main(){
//	int st, en, jump ;
//	cout<<"enter starting value: ";
//	cin>>st;
//	cout<<"enter ending value: ";
//	cin>>en;
//	cout<<"enter jumping value: ";
//	cin>>jump;	
	numSqCube(1, 45, 2);
	numSqCube(2,10);
		
}
