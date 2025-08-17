#include <iostream>
#include <vector>
using namespace std;
void cargarVector(vector<int>&);
void verificarOrden(vector<int>&);
int main()
{
    vector<int> numeros(10,0);
    cargarVector(numeros);
    verificarOrden(numeros);
    return 0;
}
void cargarVector(vector<int>& v) {
    for(int i=0; i<v.size(); i++) {
        cout<<"ingrese el valor del vector en la posicion "<<i+1<<":\t";
        cin>>v[i];
    }
}
void verificarOrden(vector<int>& v) {
    for(int i=1; i<v.size(); i++) {
        if(v[i]<v[i-1]) {
            cout<<"El vector no esta ordenado de menor a mayor"<<endl;
            return;
        }   
    }
    cout<<"El vector esta ordenado de menor a mayor"<<endl;
}