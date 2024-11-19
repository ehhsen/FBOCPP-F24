/*3. (Practice) Write a C++ program that asks the user to input two numbers. If the first number
entered is greater than the second number, the program should print the message “The first
number is greater.”; else, it should print the message “The first number is smaller.” Test your
program by entering the numbers 5 and 8 and then using the numbers 11 and 2. What do you
think your program will display if the two numbers entered are equal? Test this case.*/
#include <iostream>
using namespace std;
int main()
{
int n1, n2;
cout << "The first number is: " << endl;
cin >> n1;
cout << "The second number is: " << endl;
cin >> n2;
if (n1 > n2)
    cout << "The first number is greater" <<endl;

else
    cout << "The first number is smaller" <<endl; 
return 0;
}

/*What do you
think your program will display if the two numbers entered are equal? Test this case.*/
/* Answer:
if the two numbers are equal then the else statement will be executed and "the first number is smaller" will be executed.*/

