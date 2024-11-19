/*
11. (Program) a. A senior salesperson is paid $800 a week, and a junior salesperson, $500 a
week. Write a C++ program that accepts as input a salesperson’s status in the character variable
status. If status equals s, the senior salesperson’s salary should be displayed; otherwise,
the junior salesperson’s salary should be displayed.*/
#include <iostream>
using namespace std;

int main()
{
char status;
cout<<"Enter your status [s for senior] :";
cin>>status;
if(status == 's')
{
cout<<"\nSenior salesperson weekly salary status is 800"<<endl;
}
else
{
cout<<"\nJunior Salesperson's weekly salary is $500"<<endl;
}
return 0;
}

/*b. How many runs should you make for the program written in Exercise 11a to verify that it’s
operating correctly? What data should you input in each program run?

Answer:
at least two program runs are required to check if our code is running correctly.
In one run we put s as input and in other we put any other character that displays incorrect( executes else statement).*/
