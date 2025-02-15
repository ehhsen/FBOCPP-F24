#include <iostream>
using namespace std;

double daycount(int, double,double); // the function prototype
int main()
{
	double num,num2,num3;
	cout << "Enter your month" << endl;
	cin >> num;
	cout << "Enter your day " << endl;
	cin >> num2;
	cout << "Enter the year" << endl;
	cin >> num3;
	cout << "The total number of day passed sence the first of the year " << daycount(num,num2,num3) << endl;
	
	system("PAUSE");
	return 0;
	
}
double daycount(int month, double day, double year)
{
	if (month % 30 == 0){
		month = 30;
	}
	else if (month == 1){
		month = 0;
	}
	else{ month = (month-1) * 30;} // only one I needed *facepam* lol

	double value = (day)+(month)+(year*365);

		return value;
}