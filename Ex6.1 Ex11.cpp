/*11. (Program) a. Write and test a C++ function named makeMilesKmTable() to display a table
of miles converted to kilometers. The arguments to the function should be the starting and
stopping values of miles and the increment. The output should be a table of miles and their
equivalent kilometer values. Use the relationship that 1 mile = 1.61 kilometers.
b. Modify the function written for Exercise 12a so that two columns are displayed.
For example, if the starting value is 1 mile, the ending value is 20 miles, and the increment is 1, the
display should look like the following:
	Miles = Kilometers       Miles = Kilometers
	  1        1.6             11       17.70
	  .          .             12       19.31
	  .                        .
	  .
	  .                        .         . 
	 10       16.09            20        32.18
(Hint : Find split = (start + stop) / 2. Let a loop execute from miles = start to split, and calculate
and print across one line the values of miles and kilometers for both miles and (miles - start +
split + 1).)*/
#include<iostream>
#include<iomanip>
using namespace std;
int  makeMilesKmTable(int st, int en, int j)
{
	//splitting input for display
	int split = (st + en)/ 2;
	// printing table 
	cout<<"\tMiles = \tKilometers \tMiles = \tKilometers";
	for(int i = st; i < split; i ++)
	{
		cout<<"\n"<<setw(5)<<i<<setw(5)<<i*1.61;
		for ( j= split; j <= en ; j ++)
		{
		cout<<setw(5)<<j<<setw(5)<<j*1.61<<endl;
		}
	}
	return 0;
	
	
}
int main(){
	int start, end, jump;
	cout<<"Enter starting value in miles: ";
	cin>>start;
	cout<<"Enter ending value in miles: ";
	cin>>end;
	cout<<"Enter the jumping gap: ";
	cin>>jump;
	
// for table

    makeMilesKmTable(start, end, jump);
    return 0;
 
}