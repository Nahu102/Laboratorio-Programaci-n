#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> elementos;  elementos.resize(8,0);
    vector<int> acumulados; acumulados.resize(3,0);
    
    for(int i=0; i<8; i++) {
        cout<<"ingrese el elemento "<<i+1<<": ";
        cin>>elementos[i];
        //la suma de todos los elementos
        acumulados[0]+=elementos[i];
        //la suma de los elementos mayores a 36
        if(elementos[i] > 36)
            acumulados[1]+=elementos[i];
        //la cantidad de elementos mayores a 50
        if(elementos[i] > 50)
            acumulados[2]++;
    }
    cout<<"\nel valor acumulado de todos los elementos del vector es: "<<acumulados[0]<<endl;
    cout<<"el valor acumulado de los elementos del vector que son mayores a 36 es: "<<acumulados[1]<<endl;
    cout<<"la cantidad de valores mayores a 50 es: "<<acumulados[2]<<endl;
    return 0;
}