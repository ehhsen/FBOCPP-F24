//12. (Program) Define an array named peopleTypes that can store a maximum of 50 integer 
//values entered at the keyboard.
// Enter a series of 1s, 2s, 3s, and 4s in the array to represent 
//people at a local school function; 1 represents an infant, 2 represents a child, 3 represents a 
//teenager, and 4 represents an adult.
// No other integer value should be accepted as valid input, 
//and data entry should stop when a negative value is entered. Your program should count the 
//number of each 1, 2, 3, and 4 in the array and display a list of how many infants, children, 
//teenagers, and adults were at the school function.

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int peopleTypes[50], ones = 0, twos = 0, threes = 0, fours = 0;
	cout<<"[1 = infant,  2 = child, 3 = teenager, 4 = adult]"<<endl;
	for(int i = 0; i < 50; i ++){
	
		cout<<"ENTER VALUE "<<i<<" ";
		cin>>peopleTypes[i];
		if (peopleTypes[i] < 0)    //negative value will break loop
		{
		break;
	    }

		// lets count them, 	

		switch(peopleTypes[i])
		{
			case 1: ones +=1; break;
			case 2: twos +=1; break;
			case 3: threes +=1; break;
			case 4: fours +=1;  break;
			default: cout<<"invalid not acceptable"<<endl; break;
		}
	}
	cout<<"Infants: "<<ones<<endl
		<<"Child: "<<twos<<endl
		<<"Teenagers: "<<threes<<endl
		<<"Adults: "<<fours<<endl;
	return 0;
}

