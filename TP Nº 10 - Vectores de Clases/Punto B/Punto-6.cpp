#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Libro{
    private:
    string titulo;
    string autor;
    vector<int> fecha;

    public:
    Libro(string T, string A, const vector<int> &F) {titulo=T, autor=A, fecha=F;};

    int getYear() const {return fecha[2];}
    int getMonth() const {return fecha[1];}
    int getDay() const {return fecha[0];}

    void mostrar() const {
        cout<<"\nFecha de Publicacion: "<<fecha[0]<<"/"<<fecha[1]<<"/"<<fecha[2]<<endl;
        cout<<"Titulo: "<<titulo<<endl;
        cout<<"Autor:  "<<autor<<endl;
    }
};

void ordenar(vector<Libro> &fecha) {
    for(int i=0; i<fecha.size()-1; i++) {
        int minIndex=i;
        for(int j=i+1; j<fecha.size(); j++) {
            if(fecha[j].getYear() < fecha[minIndex].getYear())
                minIndex=j;
            else if(fecha[j].getYear() == fecha[minIndex].getYear() && fecha[j].getMonth() < fecha[minIndex].getMonth())
                minIndex=j;
            else if(fecha[j].getYear() == fecha[minIndex].getYear() && fecha[j].getMonth() == fecha[minIndex].getMonth() && fecha[j].getDay() < fecha[minIndex].getDay())
                minIndex=j;
        }
        if(minIndex!=i) {
            Libro temp=fecha[i];
            fecha[i]=fecha[minIndex];
            fecha[minIndex]=temp;
        }
    }
}
int Dias_Mes(int Mes) { // Cantidad de dias en mes x
    if(Mes==2) return 28;
    else if(Mes==4 || Mes==6 || Mes==9 || Mes==11) return 30;
    else return 31;
}

int main() {
    vector<Libro> Biblioteca={
        {"El Inventor de Juegos", "Pablo de santis", {18,11,2003}},
        {"La Chica del Tren", "Paula Hawkins", {1,11,2015}},
        {"El Ruiseñor", "Kristin Hannah", {3,2,2015}}
    };
    int num1;
    cout<<"Ahora mismo hay 3 libros desea añadir mas? [1-si / 2-no] : ";
    cin>>num1;
    if(num1==1) {
        string temp_str[2];
        int temp_int[3];
        cout<<"cuantos desea ingresar: ";
        cin>>num1;
        for(int i=0; i<num1; i++) {
            cin.ignore();

            cout<<"Añadir Libro Numero "<<i+1<<endl;
            cout<<"Ingrese el titulo del libro: ";
            getline(cin,temp_str[0]);
            cout<<"Ingrese el Nombre del Autor: ";
            getline(cin,temp_str[1]);

            // Fecha Año
            cout<<"Ingrese el año de Publicacion: ";
            cin>>temp_int[2];

            // Fecha Mes
            cout<<"Ingrese el mes de Publicacion: "; cin>>temp_int[1];
            // Comprobacion
            while(temp_int[1]>12 || temp_int[1]<1) {
                cout<<"Error, mes fuera de rango ingrese el mes correspondiente: "; cin>>temp_int[1];
            }

            // Fecha Dia
            cout<<"Ingrese el dia de Publicacion: ";
            cin>>temp_int[0];
            // Comprobacion
            int cond=Dias_Mes(temp_int[1]);
            while(temp_int[0]<1 || temp_int[0]>cond) {
                cout<<"Error, dia fuera de rango ingrese el dia correspondiente: "; cin>>temp_int[0];
            }

            Biblioteca.push_back({temp_str[0],temp_str[1],{temp_int[0],temp_int[1],temp_int[2]}});
        }
    }

    ordenar(Biblioteca);

    for(Libro unidad : Biblioteca)
        unidad.mostrar();

    return 0;
}