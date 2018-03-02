#include<iostream>
#include<iomanip>
using namespace std;
void ombakOmbak (int, int, int, int);
void ombakKeluar();
int i;
void ombakOmbak (int repeat=3, int height=5, int up=2, int down=2)
{
	while(repeat>0)
	{
		for(i=1;i<=up;i++)
		{
			cout<<setw(height)<<right<<"+"<<endl;
		}
		for(i=1;i<=down;i++)
		{
			cout<<"+"<<endl;
		}
		repeat--;
	}
}
void ombakKeluar()
{
	cout<<"\nwaveDemo\n";
	ombakOmbak();
}
int main(void)
{
	ombakKeluar();
}
