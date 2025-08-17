#include <iostream>
using namespace std;
class cuadrado {
    private:
        float lado;
    public:
        void inicializar();
        void perimetro();
        void superficie();
};
void cuadrado::inicializar() {
    cout<<"Ingrese el lado del cuadrado: ";
    cin>>lado;
    while(lado<=0){
        cout<<"Error: el lado del cuadrado tiene que ser positivo"<<endl;
        cout<<"Ingrese nuevamente el lado del cuadrado: ";
        cin>>lado;
    }
}
void cuadrado::perimetro() {
    cout<<"El perimetro del cuadrado es: "<<lado*4<<endl;
}
void cuadrado::superficie() {
    cout<<"La superficie del cuadrado es: "<<lado*lado<<endl;
}
int main()
{
    cuadrado num1;
    num1.inicializar();
    num1.perimetro();
    num1.superficie();
    return 0;
}