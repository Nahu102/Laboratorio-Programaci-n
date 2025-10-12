#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Rectangulo{
    private:
    int base, altura;
    public:
    void setBase()   {cin>>base;}
    void setAltura() {cin>>altura;}
    int perimetro() const {return 2*(altura+base);}
    int area() const {return altura*base;}
};

int main() {
    cout<<"Ingrese la cantidad de rectangulos que desea ingresar: ";
    int cant=0; cin>>cant;
    while(cant<=0) {cout<<"Error, solo debes ingresar numeros mayores a 0"<<endl;   cin>>cant;}
    vector<Rectangulo> lista(cant);
    for(int i=0; i<cant; i++) {
        cout<<"\nIngrese los datos del rectangulo numero "<<i+1<<":"<<endl;
        cout<<" - Ingrese la altura:\t";
        lista[i].setAltura();
        cout<<" - Ingrese la base:\t";
        lista[i].setBase();
    }
    for(int j=0; j<cant; j++) {
        cout<<"\nRectangulo Numero "<<j+1<<":"<<endl;
        cout<<" - Perimetro:\t"<<lista[j].perimetro()<<endl;
        cout<<" - Area:\t"<<lista[j].area()<<endl;
    }
    return 0;
}