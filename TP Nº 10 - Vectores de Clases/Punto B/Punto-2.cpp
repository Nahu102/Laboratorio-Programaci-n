#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Persona{
    private:
    string nombre;
    int edad;

    public:
    // Constructor  que inicializa nombre y edad
    Persona(string n, int e) {nombre=n;   edad=e;}
    // Metodo para mostrar los datos de la persona
    void mostrar() const {cout<<"Nombre: "<<nombre<<"\nEdad: "<<edad<<endl;}
    // Getter para obtener la edad
    int get_edad() const {return edad;}
};

int main() {
    // Creamos un vector de objetos Personas ya inicializados
    vector<Persona> grupo = {
        {"jose",29},
        {"lorena",21},
        {"antonio",36},
        {"pedro",12}
    };

    // Recorremos el vector desde el inicio hasta el penultimo
    for(int i=0; i<grupo.size()-1; i++) {
        int minIndex=i; // asumimos que el menor esta ubicado en la posicion i
        Persona temp=grupo[minIndex]; // guardamos temporalmente el valor de minIndex

        // Recorremos el resto del vector buscando un valor más pequeño
        for(int j=i+1; j<grupo.size(); j++) {
            if(grupo[j].get_edad() < grupo[minIndex].get_edad())
                minIndex=j; // actulizamos el indice al menor encontrado
        }

        // Si encontramos un valor menor, intercambiamos posiciones
        if(minIndex!=i) {
            grupo[i]=grupo[minIndex];
            grupo[minIndex]=temp;
        }
    }

    // Mostramos la lista ordenada
    for(Persona y : grupo) y.mostrar();
    return 0;
}