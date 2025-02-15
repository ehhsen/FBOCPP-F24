/*hapter 6 exerise 6.1
7. (Practice) a. Write a function that produces a table of the numbers from 1 to 10, their squares,
and their cubes. The function should produce the same display as Program 5.10.
b. Include the function written in Exercise 7a in a working program. Make sure your function
is called from main(). Test the function by passing various data to it*/
#include<iostream>
#include<iomanip>
using namespace std;
void numSqCube(int start, int end)
{
	cout<<"NUMBER"<<"		"<<"SQUARE"<<"		"<<"CUBE"<<endl;
	cout<<"___________________________________________"<<endl;
	for(int i = start; i <= end; i ++)
	{
		cout<<setw(4)<<i<<"		"<<setw(4)<<i*i<<"		"<<setw(4)<<i*i*i<<endl;
		
	}
}
int main(){
	int st, en;
	cout<<"enter starting value: ";
	cin>>st;
	cout<<"enter ending value: ";
	cin>>en;
	numSqCube(st, en);
		
}
