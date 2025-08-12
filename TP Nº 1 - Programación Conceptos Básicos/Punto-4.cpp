#include <iostream>
using namespace std;
int cifras(int a,int b);
int main ()
{
	int num1;
	cout<<"ingrese un numero: ";
	cin>>num1;
	cifras(num1,1);
}
int cifras(int a,int b)
{
	for(int i=0;i<=2;i++)
	{
		if(a < (b=b*10) && i<4)
		{cout<<"el numero tiene "<<i+1<<" cifras";	return 0;}
		else if (i==2)
		cout<<"el numero tiene mas de 3 cifras";
	}
}
