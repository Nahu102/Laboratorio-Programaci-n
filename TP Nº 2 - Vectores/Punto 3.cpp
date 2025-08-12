#include <iostream>
using namespace std;
void mostrar(int vector[],int cant);
int main()
{
	//duplicar valores
	int vector[4] = {3,5,0,2};
	for(int i=0;i<4;i++)
	{
		vector[i]=vector[i]*2;
	}
	
	mostrar(vector,4);
	
	//agregar nuevo elemento
	int nuevo,posicion;
	cout<<"\ningrese un nuevo elemento: ";
	cin>>nuevo;
	cout<<"ingrese la posicion del elemento entre 1 y 5: ";
	cin>>posicion;
	
	int vector2[5];
	posicion--;
	
	for(int i=0, j=0; j<5; j++) 
	{
		if(j==posicion)
			vector2[j]=nuevo;
		else
		{
			vector2[j]=vector[i];
			i++;
		}
	}
	
	//borrar los 0 del vector
	int vector3[5];
	posicion=0;
	for(int x=0;x<5;x++)
	{
		if(vector2[x]!=0)
		{
			vector3[posicion] = vector2[x];
			posicion++;
		}
	}
	
	//resultado final
	cout<<"\nresultado final:\n";
	mostrar(vector3,posicion);
	
}
void mostrar(int vector[],int cant)
{
	for(int x=0; x<cant; x++) {
		cout<<x+1<<"-\t"<<vector[x]<<endl;
	}
}
