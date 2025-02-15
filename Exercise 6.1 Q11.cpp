#include <iostream>
#include<iomanip>
using namespace std;

void makeMilesKmTable(int start, int max, int increment){
	cout << "Miles" << "  =   " << "Kilometers\t\tMiles" << "    =     " << "Kilometers" << endl;
	double split = ((start + max) / 2);
	
	for (int miles = start, miles2 = split + 1; miles <= split; miles = miles + increment, miles2 = miles2 + increment )
	{
		double kilo = miles * 1.61;
		cout << miles << setw(20) << kilo <<"\t\t"<<miles2<<setw(20)<<miles2*1.61<<endl;
	}

}
	
	int main(){
		
	   makeMilesKmTable(1,20,1);


		system("PAUSE");
		return 0;
	}