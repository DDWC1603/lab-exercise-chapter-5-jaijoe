#include <iostream>
using namespace std;


int main()
{
	masuk_tak();
}

void masuk_tak()
{
	char ans;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	ans=' ';
	while(ans!='y'  ans!='y'){
		cin>>ans;
		if(ans!='n'  ans!='n')
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
		}

	if(ans='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}


