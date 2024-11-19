/* 5. (Program) a. If money is left in a particular bank for more than 5 years, the bank pays interest
at a rate of 4.5%; otherwise, the interest rate is 3.0%. Write a C++ program that uses the
cin object to accept the number of years in the variable numYears and display the correct
interest rate, depending on the value input into numYears.*/
#include <iostream>
using namespace std;
int main()
{
int numYears;
cout << "Enter number of years:"<<endl;
cin >> numYears;
if (numYears > 5)
    cout << "Interest rate is 4.5%" << endl;

else 
    cout << "Interest rate is 3.0% "<< endl;
return 0;
}
/*b. How many runs should you make for the program written in Exercise 5a to verify that it’s
operating correctly? What data should you input in each program run?
Answer
At least two runs should be made, one checking for greater than 5 and other checking for less than 5. 
The data input in both cases should be integer assume 3 and 7.*/


