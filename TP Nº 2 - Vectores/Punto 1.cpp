#include <iostream>
using namespace std;
int main ()
{
	int cant, rts=0, num[cant];
	cout<<"ingrese la cantidad de numeros que quiera sumar: ";
	cin>>cant;
	for(int i=0;i!=cant;i++)
	{
		cout<<"ingrese un numero: ";
		cin>>num[i];
		rts+=num[i];
	}
	cout<<"\nel resultado es "<<rts<<endl;
	return 0;
}
