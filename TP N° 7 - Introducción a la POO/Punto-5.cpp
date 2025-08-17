#include <iostream>
#include <string>
#include <vector>
using namespace std;
// TP N° 6 - Introducción a la POO
class calculadora {
private:
    vector<float> numeros;
    vector<int> cont;
    float rts;

public:
    void inicializar();
    void procesar();
    void suma(int, int);
    void resta(int, int);
    void multiplicacion(int, int);
    void division(int, int);
    void mostrar();
};
// inicializa la calculadora pidiendo al usuario que ingrese los numeros y las operaciones
void calculadora::inicializar() {
    cout << "Ingrese la cantidad de numeros que desea ingresar: ";
    int cant;
    cin >> cant;
    numeros.resize(cant);

    for (int i = 0; i < cant; i++) {
        cout << "\nIngrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        if (i != cant - 1) {
            cout << "\n1- suma\n2- resta\n3- multiplicacion\n4- division\nSeleccione una operacion para el siguiente numero: ";
            int opcion;
            cin >> opcion;
            cont.push_back(opcion);
        }
    }
}
//logica simple de una calculadora que procesa operaciones basicas
void calculadora::procesar() {
    // Fase 1: Procesar multiplicaciones y divisiones
    int i = 0;
    while (i < cont.size()) {
        if (cont[i] == 3) { // Multiplicacion
            multiplicacion(i, i + 1);
            numeros.erase(numeros.begin() + i + 1);
            cont.erase(cont.begin() + i);
        } else if (cont[i] == 4) { // Division
            division(i, i + 1);
            numeros.erase(numeros.begin() + i + 1);
            cont.erase(cont.begin() + i);
        } else {
            i++;
        }
    }

    // Fase 2: Procesar sumas y restas restantes
    while (cont.size() > 0) {
        if (cont[0] == 1) { // Suma
            suma(0, 1);
        } else if (cont[0] == 2) { // Resta
            resta(0, 1);
        }

        numeros.erase(numeros.begin() + 1);
        cont.erase(cont.begin());
    }

    rts = numeros[0];
}
// operacion de suma
void calculadora::suma(int a, int b) {
    cout << "\nOperacion: " << numeros[a] << " + " << numeros[b] << endl;
    numeros[a] += numeros[b];
}
// operacion de resta
void calculadora::resta(int a, int b) {
    cout << "\nOperacion: " << numeros[a] << " - " << numeros[b] << endl;
    numeros[a] -= numeros[b];
}
// operacion de multiplicacion
void calculadora::multiplicacion(int a, int b) {
    cout << "\nOperacion: " << numeros[a] << " * " << numeros[b] << endl;
    numeros[a] *= numeros[b];
}
// operacion de division que maneja la division por cero
void calculadora::division(int a, int b) {
    if (numeros[b] != 0) {
        cout << "\nOperacion: " << numeros[a] << " / " << numeros[b] << endl;
        numeros[a] /= numeros[b];
    } else {
        cout << "\nError: division por cero. Se ignora esta operacion.\n";
    }
}
// muestra el resultado final de las operaciones realizadas
void calculadora::mostrar() {
    cout << "\nResultado final: " << rts << endl;
}

int main() {
    calculadora num1;
    num1.inicializar();
    num1.procesar();
    num1.mostrar();
    return 0;
}