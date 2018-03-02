#include <iostream>
using namespace std;

int main()
{
	double a=0.0;
	double b=0.0;

	cout<<"Enter first number"<<endl;
	cin >> a;
	cout<<"Enter second number"<<endl;
	cin >> b;
	
	cout<<"Average is: "<< avg(a,b) <<endl;
}

double avg(double x,double y)
{
	return (x+y)/2;
}
