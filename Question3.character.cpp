/*Question3:
Print the decimal, octal, and hexadecimal values of all characters between the start
 and stop characters entered by a user. For example, if the user enters an 'a' and a 'z', 
 the program should print all the characters between a and z and their respective values. 
 Make sure the second character the user enters occurs later in the alphabet than the first character. 
 If it doesn’t, write a loop that asks the user repeatedly for a valid second character.*/
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	char start, stop, i;
	
//		taking starting ending points
	cout<<"Enter starting charatcter: ";
	cin>>start;
	do{
		cout<<"Enter ending character: ";
		cin>>stop;
		}
	while(int(stop)<int(start));
//prints heading
    cout<<setw(10)<<"CHARACTER"
		<<setw(10)<<"DECIMAL"
		<<setw(10)<<"OCTAL"
		<<setw(15)<<"HEXADECIMAL"<<endl;
		// print all CHARACTERS,their decimal values, octal values, hexaecimal values.
	for(i = start ; i <= stop; i++){
    cout<<setw(10)<<i
		<<setw(10)<<dec<<int(i)
		<<setw(10)<<oct<<int(i)
		<<setw(10)<<hex<<int(i)<<endl;	
	}		
}