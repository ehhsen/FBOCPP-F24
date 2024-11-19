/*
5. (Program) Fluid flowing through a pipe can flow in a smooth, constant manner, called laminar
flow; in a chaotic manner, called turbulent flow; or in an intermediate stage between smooth
and turbulent flow, which is called transitional flow. In practice, a value known as the Reynolds
number can be used to determine the type of flow. For a Reynolds number below 2000, the
flow is laminar, and for a Reynolds number above 3000, the flow is turbulent. For a Reynolds
number between 2000 and 3000, the flow is transitional.
Using this information, write, compile, and run a C++ program that accepts a Reynolds number
as user input and displays a message indicating whether the flow is laminar, turbulent,
or transitional.
*/
#include <iostream>
using namespace std;
int main()
{
float rn;
cout<<"Enter Reynolds number: ";
cin>> rn;
if( rn < 2000)
	cout<<"\nThe fluid has laminar flow"<<endl;
	
else if(rn >= 2000 && rn <= 3000)
	cout <<"The fluid has transitional flow"<<endl;
	
else if (rn > 3000)
	cout << "The fluid has turbulent flow"<< endl;
	
return 0;}
