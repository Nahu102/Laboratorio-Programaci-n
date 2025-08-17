#include <iostream>
#include <string>
using namespace std;
class empleado{
    private:
        string name;
        int sueldo;
    public:
        void inicializar();
        void imprimir() const;
        void impuestos() const;
};
void empleado::inicializar() {
    cout<<"Ingrese su sueldo: ";
    cin>>sueldo;
    cin.ignore(); // Ignora el caracter de nueva línea restante en el buffer
    cout<<"Ingrese su nombre: ";
    getline(cin,name);
}
void empleado::imprimir() const{
    cout<<name<<endl;
    cout<<sueldo<<endl;
}
void empleado::impuestos() const {
    if(sueldo>3000)
        cout<<"Debe pagar impuestos"<<endl;
    else
        cout<<"No debe pagar impuestos"<<endl;
}
int main()
{
    empleado num1;
    num1.inicializar();
    num1.imprimir();
    num1.impuestos();
    return 0;
}