#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> num={2,4,3,6,7};
    int tam=num.size();
    //se utiliza para realizar los intercambios
    int temp;
    
    // Ciclo externo que controla el n�mero de pasadas (de 1 hasta tam - 1)
    for (int i=1; i<tam; i++)
    {
        // Ciclo interno que compara e intercambia elementos adyacentes
        for(int j=0 ; j<tam - 1; j++)
        {
            // Compara el elemento actual con el siguiente
            if (num[j] > num[j+1])
            {
                // Guarda el valor actual en una variable temporal
                temp = num[j];
                // Asigna el siguiente valor en la posici�n actual
                num[j] = num[j+1];
                // Coloca el valor temporal en la siguiente posici�n
                num[j+1] = temp;
            }
        }
    }
    // Ciclo para imprimir los elementos del vector ya ordenado
    for(int x=0;x<num.size();x++)
    {
    	cout<<num[x]<<" ";
    }
    return 0;
}

