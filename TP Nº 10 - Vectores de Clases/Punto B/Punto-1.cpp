#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;
class Alumno{
    private:
    string nombre;
    int nota1,nota2,nota3;

    public:
    Alumno(string name,int n1,int n2,int n3) {
        nombre=name;
        nota1=n1; nota2=n2; nota3=n3;
    }

    void setNombre(string N) {nombre=N;}
    void setNota1(int N1) {nota1=N1;}
    void setNota2(int N2) {nota2=N2;}
    void setNota3(int N3) {nota3=N3;}

    const void mostrar() {
        cout<<"\nAlumno: "<<nombre<<endl;
        cout<<"- nota 1: "<<nota1<<"\n- nota 2: "<<nota2<<"\n- nota 3: "<<nota3<<endl;
    }
};
int main() {
    //Declaramos un vector de la Clase Alumno
    vector<Alumno> Aula_A;

    //agregamos al vector los objetos
    Aula_A.push_back(Alumno("Jose",5,6,8));
    Aula_A.push_back(Alumno("Rodrigo",5,9,8));
    Aula_A.push_back(Alumno("Tiago",7,1,5));

    cout<<"Cuantos Alumnos desea ingresar: ";
    int cant; cin>>cant;

    for(int i=0; i<cant; i++) {
        // Variables temporales
        string temp_string; int temp_int;
        // Inicializamos el objeto
        Alumno obj("",0,0,0);
        // Pedimos los datos al usuario
        cout<<"Alumno Numero "<<i+1<<endl;
        cout<<"Ingrese el Nombre: ";
        cin.ignore(); getline(cin,temp_string);
        obj.setNombre(temp_string);
        cout<<"Ingrese la Nota 1: ";
        cin>>temp_int; obj.setNota1(temp_int);
        cout<<"Ingrese la Nota 2: ";
        cin>>temp_int; obj.setNota2(temp_int);
        cout<<"Ingrese la Nota 3: ";
        cin>>temp_int; obj.setNota3(temp_int);
        // Añadimos al vector el nuevo objeto
        Aula_A.push_back(obj);
        system("pause");
        system("cls");
    }
    for(Alumno alumnos : Aula_A) alumnos.mostrar();
    return 0;
}