//Question2:
//An electrical manufacturer tests five generators by measuring their output voltages
//at three different times. Write a C++ program that uses a nested loop to enter
//each generator’s test results, and then computes and displays the average voltage for 
//each generator. Assume the following generator test results:
//             Testresult1    Testresult2	Testresult3
//1st generator:   122.5 		122.7 		 123.0
//2nd generator:   120.2 		127.0 		 125.1
//3rd generator:   121.7 		124.9  		126.0
//4th generator:   122.9 		123.8  		126.7
//5th generator:   121.5 		124.7  		122.6
//
//Also calculate and display the average voltage for all the generators. 
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int i,j;
	double data, average;
	for(i = 0; i< 5; i++){
		average = 0;
		for(j = 0; j < 3; j++){
			cout<<"Enter test value "<<j+1<<" for generator "<<i+1<<": ";
			cin>>data;
			average +=data;
		}
		average = average/3;
		cout<<"Average :"<<average<<endl;
	}return  0;
}
	
	
	