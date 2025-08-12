#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
//funcion para buscar al menor de la lista
int menor(const vector<int>& lista, int tam, int inicio)
{
	//inicio es la posicion en la que se encuentra i en el for
    int menor=inicio;
    for(int j=inicio+1; j<tam; j++) 
    {
    	//si el vector en la posicion j es menor al vector en la posicion menor:
        if(lista[j]<lista[menor])
        {
        	//menor es la ubicacion del menor numero en la lista
            menor=j;
        }
    }
    //devuelve la posicion del menor numero
    return menor;
}
int main()
{
    vector<int> num={2,4,3,6,7};
    int tam=num.size();
    //ubicacion del menor numero en la lista
    int pos_men;
    //se utiliza para realizar los cambios realizar los intercambios
    int temp;
    // Recorre desde el primer hasta el penúltimo elemento del vector
    for (int i=0;i<tam-1;i++)
	{
		// Recorre desde el primer hasta el penúltimo elemento del vector
	    pos_men=menor(num,tam,i);
	    // Guarda temporalmente el valor actual de num[i], para no perderlo en el intercambio
	    temp=num[i];
	    // Coloca en la posición i el número menor encontrado
	    num[i]=num[pos_men];
	    // Coloca en la posición donde estaba el menor el valor original de num[i] (intercambio completado)
	    num[pos_men]=temp;
	}
    //muestra el contenido de la funcion
    for(int x=0;x<num.size();x++)
    {
        cout<<num[x]<<" ";
    }
	return 0;
}
