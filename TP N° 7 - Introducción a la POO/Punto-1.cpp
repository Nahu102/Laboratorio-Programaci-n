#include <iostream>
#include <string>
using namespace std;
class Persona {
    private:
        char nombre[40];
        int edad;
    public:
        // funcion que no es const porque modifica los atributos de la clase
        void inicializar();
        // la palabra const al final de la declaracion de la funcion indica que no se modifican los atributos de la clase
        void imprimir() const;
        void esMayorEdad() const;
};
// es una funcion local de la clase persona
void Persona::inicializar() {
    cout <<"Ingrese edad:";
    cin >> edad;
    cin.ignore(); // Limpia el buffer de entrada después de cin >>
    cout <<"Ingrese nombre:";
    cin.getline(nombre, 40); // Usa la versión de getline para char[]
}
void Persona::imprimir() const {
    cout <<"Nombre: "<<nombre<<endl;
    cout <<"Edad: "<<edad<<endl;
}
void Persona::esMayorEdad() const {
    if (edad>=18)
        cout <<"Es mayor de edad."<<endl;
    else
        cout <<"No es mayor de edad."<<endl;
}
int main()
{
    Persona persona1,persona2;
    //usuario 1
    cout<<"Usuario 1:"<<endl;
    persona1.inicializar();
    //usuario 2
    cout<<"\nUsuario 2:"<<endl;
    persona2.inicializar();
    //usuario 1
    cout<<"\nUsuario 1:"<<endl;
    persona1.imprimir();
    persona1.esMayorEdad();
    //usuario 2
    cout<<"\nUsuario 2:"<<endl;
    persona2.imprimir();
    persona2.esMayorEdad();
    return 0;
}