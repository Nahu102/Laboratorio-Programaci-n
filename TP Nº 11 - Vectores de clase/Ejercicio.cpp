#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Alumno {
private:
    string nombre;
    double nota1;
    double nota2;
    double nota3;
    // Atributos agregados
    int edad;
    string estado;
public:
    // Constructor
    Alumno(string nombre, int edad, double nota1, double nota2, double nota3) : nombre(nombre), edad(edad), nota1(nota1), nota2(nota2), nota3(nota3) { actualizarEstado(); }
    // Getters
    string getNombre() const { return nombre; }
    double getNota1() const { return nota1; }
    double getNota2() const { return nota2; }
    double getNota3() const { return nota3; }
    
    // Getters agregados
    int getEdad() const { return edad; }
    string getEstado() const { return estado; }
    
    // Método para calcular el promedio
    double calcularPromedio() const { return (nota1 + nota2 + nota3)/ 3; }

    // Metodo para actualizar el Estado
    void actualizarEstado() {
        if( calcularPromedio() >= 7) estado="Aprobado";
        else estado="Desaprobado";
    }

    // Metodo para mostrar el objeto
    void mostrar() const{
        cout << "Nombre: " << nombre << "\n";
        cout << "Edad: " << edad << "\n";
        cout << "Nota 1: " << nota1 << "\n";
        cout << "Nota 2: " << nota2 << "\n";
        cout << "Nota 3: " << nota3 << "\n";
        nt_MinMax();
        cout << "Promedio: " << calcularPromedio() << "\n";
        cout << "Estado: " << estado << "\n"<<endl;
    }

    // Metodo para mostrar la nota mas alta
    void nt_MinMax() const{
        double notas[3] = {nota1,nota2,nota3};
        int nt_max=0, nt_min=0;
        for(int i=1; i<3; i++) {
            if(notas[nt_max] < notas[i]) nt_max=i;
            if(notas[nt_min] > notas[i]) nt_min=i;
        }
        cout<<"Nota maxima: "<<notas[nt_max]<<"\nNota minima: "<<notas[nt_min]<<endl;
    }
};

void buscarAlumno(const vector<Alumno> &lista, const string &buscar) {
    int index=-1;
    for(int i=0; i<lista.size(); i++)
        if(buscar==lista[i].getNombre()) {
            index=i; break;
        }

    if(index != -1) {
        cout<<"\nAlumno encontrado en la posicion "<<index+1<<"\n";
        lista[index].mostrar();
    } else {
        cout<<"Alumno no encontrado"<<endl;
    }
}

void promedio_lista(const vector<Alumno> &lista) {
    double total;
    for(const auto& alumno : lista) { total+=alumno.calcularPromedio(); }
    cout<<"El promedio total de los alumnos es: "<<total/lista.size()<<endl;
}

int main() {
    // Vector para almacenar los alumnos
    vector<Alumno> alumnos;
    // Ingresar datos de los alumnos y agregarlos al vector
    string nombre;
    int edad;
    double nota1, nota2, nota3;
    int numAlumnos;
    cout << "Ingrese el numero de alumnos: ";
    cin >> numAlumnos;
    for (int i = 0; i < numAlumnos; i++) {
        cout << "\nIngrese el nombre del alumno: ";
        cin >> nombre;
        cout << "Ingrese la edad del alumno:   ";
        cin >> edad;
        cout << "Ingrese la nota 1 del alumno: ";
        cin >> nota1;
        cout << "Ingrese la nota 2 del alumno: ";
        cin >> nota2;
        cout << "Ingrese la nota 3 del alumno: ";
        cin >> nota3;
        alumnos.push_back(Alumno(nombre, edad, nota1, nota2, nota3));
    }
    // Mostrar los datos de los alumnos y sus promedios
    cout << "\nDatos de los alumnos:" << endl;
    for (const auto& alumno : alumnos) {
        alumno.mostrar();
    }

    promedio_lista(alumnos);

    cout<<"\nDesea buscar algun alumno [1-si/2-no]: ";
    int num1; cin >> num1;

    if(num1==1) {
        cout<<"ingrese el nombre del alumno: ";
        cin>>nombre;
        buscarAlumno(alumnos, nombre);
    }
    return 0;
}