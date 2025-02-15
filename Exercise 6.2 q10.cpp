#include <iostream>
using namespace std;

int ReadOneChar(char); // the function prototype
int main()
{
	char one;
	cout << "Enter your character  ";
	cin >> one;
	cout << "The key pressed was " << ReadOneChar(one) << endl;
	return 0;
	
}
int ReadOneChar(char reads)
{
		return reads;
}