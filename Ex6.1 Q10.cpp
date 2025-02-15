/*10. (Program) a. The volume, V, of a sphere is given by this formula, where r is the sphere’s
radius:
Volume = 3
3 4π r
 Using this formula, write, compile, and run a C++ function named spherevol() that accepts
a sphere’s radius and then calculates and displays its volume.
b. Include the function written in Exercise 10a in a working program.Make sure your function
is called from main(). Test the function by passing various data to it.*/

#include<iostream>
#include<cmath>
using namespace std;
float spherevol(float);
float spherevol(float r)
{
	float volume = (( 4*3.14)*  pow(r, 3))/3; 
	return volume; 
}
int main(){
	float radius; 
	cout<<"Enter radius: ";
	cin>>radius;
	cout<<"Volume of sphere with radius "<<radius<<" is: "<<spherevol(radius)<<" cubic meters";
	return 0;
}