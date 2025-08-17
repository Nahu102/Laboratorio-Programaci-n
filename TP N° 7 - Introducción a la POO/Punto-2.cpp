#include <iostream>
using namespace std;

class triangulo {
private:
    int base, ld1, ld2;

public:
    void inicializar();
    void ladoMayor() const;
    void equilatero() const;
};

void triangulo::inicializar() {
    cout<<"Ingrese la base del triangulo: ";
    cin>>base;
    cout<<"Ingrese el lado izquierdo: ";
    cin>> ld1;
    cout<<"Ingrese el lado derecho: ";
    cin>>ld2;
}
void triangulo::ladoMayor() const{
    if (base>ld1 && base>ld2)
        cout<<"La base es el lado mas grande del triangulo"<<endl;
    else if (ld1>base && ld1>ld2)
        cout<<"El lado izquierdo es el lado mas grande del triangulo"<<endl;
    else if (ld2>base && ld2>ld1)
        cout<<"El lado derecho es el lado mas grande del triangulo"<<endl;
    else
        cout<<"Hay lados iguales"<<endl;
}
void triangulo::equilatero() const {
    if (base==ld1 && ld1==ld2)
        cout<<"Es un triangulo equilatero"<<endl;
    else
        cout<<"No es un triangulo equilatero"<<endl;
}

int main() {
    triangulo num1;
    num1.inicializar();
    num1.equilatero();
    num1.ladoMayor();
    return 0;
}