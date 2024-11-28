//Question1:
//Write a C++ program to convert meters to feet. The program should request the starting meter value,
//the number of conversions to be made, and the increment between metric values.
//The display should have appropriate headings and list the meters and the corresponding feet value. 
//If the number of iterations is greater than 10, have your program substitute a default increment of 10. 
//Use the relationship that 1 meter = 3.281 feet.
//

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int st, conv, inc;
//	taking input 
	cout<<"Enter starting meter value: ";
	cin>>st;
	cout<<"Enter number of conversions to be made: ";
	cin>>conv;
	cout<<"Enter increment between the metric value: ";
	cin>>inc;
//	checking for iterations to manipulate increment value
	if(conv>10)
	{
		inc = 10;
	}	
//	displaying headings
    cout<<"===================================================\n";
    cout<<setw(10)<<"METERS"<<setw(20)<<"FEETS\n";
//    displaying values
    for(int i = 0; i < conv; i++)
    {   
        
    	cout<<setw(10)<<st<<setw(20)<<st*3.281<<endl;
    	st = st + inc;
	}
	return 0;
}





