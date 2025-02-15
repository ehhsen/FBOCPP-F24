#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int numG, i,numT;
	double arr[numT], average = 0;
	cout<<"enter number of generators: ";
	cin>>numG;
	cout<<"Enter number of test cases: ";
	cin>>numT;
	cout<< left << setw(15) << "Generator" 
        << setw(15) << "Test 1" 
        << setw(15) << "Test 2" 
        << setw(15) << "Test 3" 
        << setw(15) << "Average " <<endl;
    for(i = 0; i < numG; i++ ){
    	for(int j = 0; j<numT; j++){
    		average = 0;
    		
    		cout<<"generator "<<j+1<<setw(15);
    		cin>>arr[j];
    		average += arr[j];	 
		}
		double avg = average / numT;
		cout<<avg;
	}
  
}
