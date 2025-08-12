#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
	float nota1,nota2,nota3;
	cout<<"ingrese la primera nota: ";
	cin>>nota1;
	cout<<"ingrese la segunda nota: ";
	cin>>nota2;
	cout<<"ingrese la tercera nota: ";
	cin>>nota3;
	float prom=(nota1+nota2+nota3)/3;
	if(prom>=7)
	{
		cout<<"promocionado"<<endl;
	}
	else if(prom>=4)
	{
		cout<<"regular"<<endl;
	}
	else
	{
		cout<<"desaprobado"<<endl;
	}
	return 0;
}
