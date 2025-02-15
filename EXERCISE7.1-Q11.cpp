//11. (Program) Write, compile, and run a C++ program that specifies three one-dimensional arrays 
//named price, amount, and total. Each array should be capable of holding 10 elements. 
//Using a for loop, input values for the price and amount arrays. The entries in the total
//array should be the product of the corresponding values in the price and amount arrays (so 
//total[i] = price[i] * amount[i]). After all the data has been entered, display the following output, 
//with the corresponding value under each column heading:
//total    price    amount
//-----    -----    ------
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int i, price[10], amount[10], total[10];
	for(i = 0; i<10; i ++)
	{
		cout<<"price: ";
		cin>>price[i];
		cout<<"amount: ";
		cin>>amount[i];		
		total[i] = amount[i] * price[i];
		
	}
	cout<<left<<setw(10)<<"total"
		<<setw(10)<<"price"
		<<setw(15)<<"amount"<<endl;
		
		
		

	for(i = 0; i<10; i ++)
	{

		cout<<left<<setw(10)<<total[i]
			<<setw(10)<<price[i]
			<<setw(15)<<amount[i]<<endl;
		
		
	}
}
	

