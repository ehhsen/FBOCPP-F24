#include<iostream>
#include<iomanip>
using namespace std;
double  calculator(int, int, char);
double calculator(int val1, int val2, char operatr)
{  double ans;
	switch(operatr){
		case '+': 
			ans = val1+val2; break;
		case '-':
			ans = val1-val2; break;
		case '*': 
			ans = val1*val2; break;
		case '/': 
			ans = val1/val2; break;
		case '%': 
			ans = val1%val2; break;	
	}
	return ans;
}
int main(){
	int num1, num2;
	char ch;
	cout<<"==========================CALCULATOR===========================";
	cout<<"\nEnter Value 1:";
	cin>>num1;
	cout<<"Enter Value 2:";
	cin>>num2;
	cout<<"\nEnter operator:[-, +, *, /, % ]  ";
	cin>>ch;
	double result = calculator(num1, num2, ch);
	cout<<"\n"<<num1<<" "<<ch<<" "<<num2<<" = "<<result;
	return 0;	
}
