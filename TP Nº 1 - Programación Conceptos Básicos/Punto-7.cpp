#include <iostream>
#include <stdlib.h>
using namespace std;
int total(int caso,int saldo);
int main()
{
	bool exit=false;
	int opcion,saldo=0;
	while(exit==false)
	{
		cout<<"Seleccione una opcion:\n1-Saldo\n2-Depositar\n3-Retirar\n4-exit"<<endl;
		cin>>opcion;
		switch(opcion)
		{
			//saldo
			case 1:
				cout<<"su saldo es de "<<saldo<<"$"<<endl;
			break;
			//depositar
			case 2:
				cout<<"ingrese la cantidad que desea depositar en su cuenta: ";
				saldo=total(opcion,saldo);
			break;
			//retirar
			case 3:
				cout<<"ingrese la cantidad que quiere retirar: ";
				saldo=total(opcion,saldo);
				
			break;
			//exit
			case 4:
				exit=true;
			break;
			default:
				 cout<<"no se pudo realizar ninguna accion, recuerde solo puede ingresar 1 de las opciones presentes"<<endl;
		}
		system("pause");
		system("cls");
	}
	return 0;
}
int total(int caso, int saldo)
{
	int a;
	cin>>a;
	if (caso==2)
	return saldo+a;
	else
	{
		if (a>saldo)
		{	cout << "Saldo insuficiente" << endl;	return saldo;	} 
		else if (a>0)
		return saldo-a;
	}
	return saldo; // caso por defecto
}
