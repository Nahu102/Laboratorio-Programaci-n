#include <iostream>
#include <string>
using namespace std;
class Empleado{
    private:
    string nombre;
    int sueldo;
    public:
    Empleado();
    void imprimir() const;
    void impuestos() const;
};
Empleado::Empleado() {
    cout<<"ingrese su nombre: ";
    getline(cin,nombre);
    cout<<"ingrese su sueldo: ";
    cin>>sueldo;
    cin.ignore(); //para limpiar el buffer en caso de que se utilize otro getline
}
void Empleado::imprimir() const{
    cout<<"\nNombre: "<<nombre<<"\nSueldo: "<<endl;
}
void Empleado::impuestos() const{
    if(sueldo>3000) cout<<"Debe pagar impuestos"<<endl;
    else            cout<<"No debe Pagar impuestos"<<endl;
}
int main() {
    Empleado obj1;
    obj1.imprimir();
    obj1.impuestos();
    return 0;
}