#include<iostream>
using namespace std;
int sum(int x, int y)
{
	int result;
	result=x+y;
	cout<<"result: "<<result;
}
int main()
{
	int x, y;
	
	cout<<"Enter first integer: ";
	cin>>x;
	cout<<"Enter second integer: ";
	cin>>y;
	sum(x, y);
	
	return 0;
}
