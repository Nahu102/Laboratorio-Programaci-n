#include <iostream>
#include <string.h>
using namespace std;
int condicion(int a);
int main ()
{
	float num1,contador=0;
	for(int i=1;i!=4;i++)
	{
		cout<<"\ningrese el numero "<<i<<": ";
		cin>>num1;
		if(num1>=10)
		{ contador++; }
	}
	condicion(contador);
	return 0;
}
int condicion(int a)
{
	if(a>=1)
	{ cout<<"\nhay "<<a<<" numero/s mayor/es a 10"<<endl; }
	else
	{ cout<<"\nTodos los numeros son menores a diez"<<endl; }
}
