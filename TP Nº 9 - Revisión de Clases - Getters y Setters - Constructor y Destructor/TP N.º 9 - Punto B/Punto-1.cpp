#include <iostream>
#include <string>
using namespace std;
class Alumno{
    private:
    string nombre;
    int edad;
    public:
    Alumno();
    void mostrar() const;
    void mayor_menor() const;
};
Alumno::Alumno() {
    cout<<"Ingrese su nombre: ";
    getline(cin,nombre);
    cout<<"Ingrese su edad: ";
    cin>>edad;
    cin.ignore(); //para limpiar el buffer en caso de que se utilize otro getline
}
void Alumno::mostrar() const{
    cout<<"\nNombre: "<<nombre<<"\nEdad: "<<edad<<endl;
}
void Alumno::mayor_menor() const{
    if(edad>=18)    cout<<"Si es mayor de edad"<<endl;
    else            cout<<"No es mayor de edad"<<endl;
}
int main() { 
    Alumno obj1;
    obj1.mostrar();
    obj1.mayor_menor();
    return 0;
}