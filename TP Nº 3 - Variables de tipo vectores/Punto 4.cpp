#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> num={2,4,3,6,7}; // Se declara un vector con números iniciales
    int tam=num.size(); // Se guarda el tamaño del vector
    int temp; // Variable temporal para el valor que se va a insertar
    int j; // Variable para recorrer los elementos anteriores al actual

    // Ciclo que recorre desde el segundo elemento hasta el final
    for (int i=1; i<tam; i++)
    {
    	// Guarda el valor actual que se va a insertar en su posición correcta
    	temp = num[i];
    	// Comienza a comparar desde el elemento anterior a i
    	j = i - 1;
    	// Mientras no se llegue al inicio y el valor anterior sea mayor que temp
    	while ( (num[j] > temp) && (j >= 0) )
    	{
    		// Desplaza el número hacia la derecha
    		num[j+1] = num[j];
    		// Se mueve una posición a la izquierda
			j--;
			// Inserta temp en la posición correcta
			num[j+1] = temp;
		}
	}

    // Ciclo para imprimir los elementos ordenados
    for(int x=0;x<num.size();x++)
    {
        // Imprime cada número seguido de un espacio
        cout<<num[x]<<" ";
    }
    return 0; // Fin del programa
}
