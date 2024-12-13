#include<iostream>
#include<iomanip>
using namespace std;
void calculator(int, int, char);
void calculator(int val1, int val2, char operatr)
{
	switch(operatr){
		case '+': cout<<"/nSum is: "<<val1+val2; break;
		case '-': cout<<"/nsubtract is: "<<val1-val2; break;
		case '*': cout<<"/nproduct is: "<<val1*val2; break;
		case '/': cout<<"/nquotient is: "<<val1/val2; break;
		case '%': cout<<"/nmodulus is: "<<val1%val2; break;	
	}
}
int main(){
	int num1, num2;
	char ch;
	cout<<"==========================CALCULATOR===========================";
	cout<<"\nEnter Value 1:";
	cin>>num1;
	cout<<"Enter Value 2:";
	cin>>num2;
	cout<<"\nEnter operator:";
	cin>>ch;
	calculator(num1, num2, ch);
	return 0;	
}
