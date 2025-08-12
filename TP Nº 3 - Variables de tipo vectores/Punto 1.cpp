//Recodatorio de ingresar en Herramientas-->Opciones de copilador--> -std=c++11 para que funcione la biblioteca <Vector>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> paises = {"colombia", "italia", "brasil", "argentina", "uruguay"};
    string temp;

    // Algoritmo de ordenamiento burbuja (Bubble Sort)
    for (int i = 0; i < paises.size() - 1; i++) {
        for (int j = 0; j < paises.size() - 1 - i; j++) {
            // Compara dos palabras: si la actual es mayor alfabéticamente que la siguiente, se intercambian
            if (paises[j] > paises[j + 1]) {
                temp = paises[j];
                paises[j] = paises[j + 1];
                paises[j + 1] = temp;
            }
        }
    }

    // Mostrar palabras ya ordenadas
    cout << "Paises ordenados alfabeticamente:" << endl;
    for (int i = 0; i < paises.size(); i++) {
        cout << paises[i] << endl;
    }

    return 0;
}

