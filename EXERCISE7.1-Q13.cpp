//13. (Program) a. Write, compile, and run a C++ program that reads a list of double-precision 
//grades from the keyboard into an array named grade. The grades are to be counted as they’re 
//read, and entry is to be terminated when a negative value has been entered. After all grades 
//have been input, your program should find and display the sum and average of the grades. The 
//grades should then be listed with an asterisk (*) placed in front of each grade that’s below the 
//average.
//b. Extend the program written for Exercise 13a to display each grade and its letter equivalent, 
//using the following scale:
//Greater than or equal to 90 = A
//Greater than or equal to 80 and less than 90 = B
//Greater than or equal to 70 and less than 80 = C
//Greater than or equal to 60 and less than 70 = D
//Less than 60 = f

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double arr[100], sum = 0, average;
	int i, total = 0 ;
	// loop to enter values in double precision array
	for (i = 0; i<100; i++)
	{
		cout<<"Enter grade: ";
		cin>>arr[i];
		if (arr[i] < 0)                   //negative value will break loop
			break;
		sum = sum + arr[i];
		total +=1;	    
	}
	                                     //display average and sum of grades
	cout<<"sum of grades: "<<sum<<endl;
	average = sum/total;
	cout<<"average of grades: "<<average<<endl;
	                                      // formatted output of grades
	for (i = 0; i<total; i++)
	{
		if(arr[i]<average)
		{
			if  (arr[i]>=90)
				cout<<"*"<<arr[i]<<"\tA"<<endl;
		    else if (arr[i]>=80 && arr[i]<90)
				cout<<"*"<<arr[i]<<"\tB"<<endl;
		    else if (arr[i]>=70 && arr[i]<80)
				cout<<"*"<<arr[i]<<"\tC"<<endl;
		    else if (arr[i]>=60 && arr[i]<70)
				cout<<"*"<<arr[i]<<"\tD"<<endl;
			else 
				cout<<"*"<<arr[i]<<"\tF"<<endl;						
		}
	    
		else 
		{	if  (arr[i]>=90)
					cout<<arr[i]<<"\tA"<<endl;
			else if (arr[i]>=80 && arr[i]<90)
					cout<<arr[i]<<"\tB"<<endl;
			else if (arr[i]>=70 && arr[i]<80)
					cout<<arr[i]<<"\tC"<<endl;
			else if (arr[i]>=60 && arr[i]<70)
					cout<<arr[i]<<"\tD"<<endl;
			else if (arr[i]<60)
					cout<<arr[i]<<"\tF"<<endl;						
		}
	}
				

	
	return 0;
}
	


