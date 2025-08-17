#include <iostream>
#include <vector>
using namespace std;
void cargarVector(vector<int>&);
void mostrarVector(const vector<int>&);
int main() {
    vector<int> numeros(5,0);

    cout<<"ingrese los elementos del vector:"<<endl;
    cargarVector(numeros);

    cout<<"\nLos elementos del vector son:"<<endl;
    mostrarVector(numeros);
    return 0;
}
void cargarVector(vector<int>& v) {
    for(int i=0; i<5; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> v[i];
    }
}
void mostrarVector(const vector<int>& v) {
    int pos=1;
    for(int i : v) {
        cout<<"elemento "<<pos<<": "<<i<<endl;
        pos++;
    }
}