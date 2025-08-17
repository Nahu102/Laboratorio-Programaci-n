#include <iostream>
#include <vector>
using namespace std;
void cargarVector(vector<float>&);
float calcularPromedio(const vector<float>&);
void contarAlturas(const vector<float>&, float);
int main()
{
    vector<float> alturas(5,0);
    float promedio;
    cargarVector(alturas);
    promedio=calcularPromedio(alturas);
    contarAlturas(alturas, promedio);
    return 0;
}
void cargarVector(vector<float>& v) {
    for(int i=0; i<v.size(); i++) {
        cout<<"Ingrese la altura de la persona "<<i+1<<": ";
        cin>>v[i];
    }
}
float calcularPromedio(const vector<float>& v) {
    float suma=0;
    for(int i=0; i<v.size(); i++)
        suma+=v[i];
    return suma/=v.size();
}
void contarAlturas(const vector<float>& v, float promedio) {
    int masAltas = 0, masBajas = 0;
    for(int i=0; i<v.size(); i++) {
        if(v[i] > promedio)
            masAltas++;
        else if(v[i] < promedio)
            masBajas++;
    }
    cout<<"El promedio de las alturas es: "<<promedio<<endl;
    cout<<"Hay "<<masAltas<<" personas mas altas que el promedio y "<<masBajas<<" personas mas bajas que el promedio"<<endl;
}