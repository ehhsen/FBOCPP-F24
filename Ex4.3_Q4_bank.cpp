/*4. (Program) The interest rate paid on funds deposited in a bank is determined by the amount
of time the money is left on deposit. For a particular bank, the following schedule is used:
Time on Deposit                                                 Interest Rate
Greater than or equal to 5 years                                .040
Less than 5 years but greater than or equal to 4 years          .035
Less than 4 years but greater than or equal to 3 years          .030
Less than 3 years but greater than or equal to 2 years          .025
Less than 2 years but greater than or equal to 1 year           .020
Less than 1 year                                                .015
Write, compile, and run a C++ program that accepts the time funds are left on deposit and
displays the interest rate corresponding with the time entered.
*/


#include <iostream>
using namespace std;
int main()
{
float t;
cout<<"Enter time period for which funds are left: "<<endl;
cin >>t;

if(t > 5)
    cout<<"Your interest rate is 0.040 "<<endl;
else if( t < 5 && t>= 4)
    cout<<"Your interest rate is 0.035 "<< endl;
else if(t < 4 && t >=3)
	cout <<"Your interest rate is 0.030 "<< endl;
else if(t <3 && t >=2)
	cout<<"Your interest rate is 0.025 "<< endl;
else if(t <2 && t >= 1)
	cout <<"Your interest rate is 0.020 "<<endl;
else if(t < 1)
	cout <<"Your interest rate is 0.015 "<< endl;
	
return 0;
}
