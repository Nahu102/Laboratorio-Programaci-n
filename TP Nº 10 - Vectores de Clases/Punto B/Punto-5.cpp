#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
// Clase Empleado
class Empleado{
    private:
    string nombre;
    int salario;
    string departamento;

    public:
    Empleado(string N, int S, string D) {nombre=N; salario=S; departamento=D;}
    int getSalario() {return salario;}
    void mostrar() {
        cout<<"Nombre:\t"<<nombre<<endl;
        cout<<"Salario:\t"<<salario<<endl;
        cout<<"Departamento: "<<departamento<<endl;
    }
};
int main() {
    // Vector de objetos de la clase Empleado
    vector<Empleado> Fabrica = {
        {"Lex", 2025, "Ciencias"},
        {"Norman", 2102, "Tecnologias"},
        {"Lopez", 2005, "Fisica"},
        {"Bruno", 2001, "Administracion"}
    };
    int cant=0;
    char rts;
    cout<<"Hay 3 empleados desea ingresar mas? [S/N] : ";
    cin>>rts;
    rts=tolower(rts);//transformamos a minuscula
    if(rts=='s') {
        cout<<"Ingrese la cantidad de empleados que desea añadir: ";
        cin>>cant;
        for(int i=0; i<cant; i++) {
            string name; int sal; string dep;
            cout<<"Empleado añadido numero "<<i+1<<endl;
            cout<<"Ingrese el nombre: "; cin>>name;
            cout<<"Ingrese el salario: "; cin>>sal;
            cout<<"Ingrese el departamento: "; cin>>dep;
            Fabrica.push_back({name,sal,dep});
        }
    }

    // Ordenamiento
    for(int i=0; i<Fabrica.size()-1; i++) {
        Empleado temp=Fabrica[i];
        int indexMax=i;
        for(int j=i+1; j<Fabrica.size(); j++) {
            if(Fabrica[j].getSalario() > Fabrica[indexMax].getSalario())
                indexMax=j;
        }
        if(indexMax!=i) {
            Fabrica[i]=Fabrica[indexMax];
            Fabrica[indexMax]=temp;
        }
    }

    // Mostramos
    for(Empleado emp : Fabrica) {
        cout<<"\t"<<endl;
        emp.mostrar();
        cout<<"\t"<<endl;
    }

    return 0;
}