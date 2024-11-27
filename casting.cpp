program to convert character into ascii
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    cout << "The ASCII value of '" << ch << "' is: " << int(ch) << endl;

    return 0;
}
