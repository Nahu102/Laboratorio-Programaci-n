#include <iostream>
#include <vector>
using namespace std;
void cargarVector(vector<int>&);
void sumarVectores(const vector<int>&, const vector<int>&, vector<int>&);
void mostrarVector(const vector<int>&);
int main() {
    vector<int> num1(5,0);
    vector<int> num2(5,0);
    vector<int> num3(5,0);
    
    cout<<"Vector 1:\n";    cargarVector(num1);
    cout<<"\nVector 2:\n";  cargarVector(num2);

    sumarVectores(num1, num2, num3);

    cout<<"\nVector 1:\n";      mostrarVector(num1);
    cout<<"\nVector 2:\n";      mostrarVector(num2);
    cout<<"\nSuma de vector 1 y vector 2:\n";   mostrarVector(num3);
    return 0;
}

void cargarVector(vector<int>& v) {
    for(int i=0; i<v.size(); i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> v[i];
    }
}
void sumarVectores(const vector<int>& v1, const vector<int>& v2, vector<int>& v3) {
    for(int i=0; i<v1.size(); i++) {
        v3[i] = v1[i] + v2[i];
    }
}
void mostrarVector(const vector<int>& v) {
    int pos=1;
    for(int i : v) {
        cout<< "Elemento "<<pos<<": "<<i<< endl;
        pos++;
    }
}