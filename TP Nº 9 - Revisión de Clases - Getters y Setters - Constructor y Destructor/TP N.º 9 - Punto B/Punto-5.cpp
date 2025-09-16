#include <iostream>
#include <string>
using namespace std;
class Estudiante{
    private:
    string nombre;
    int edad;
    float calificacion;
    public:
    //Setters
    void setNombre(const string& n) { nombre = n; }
    void setEdad(int e)             { edad = e; }
    void setCalificacion(float c)   { calificacion = c; }
    //Getters
    string getNombre() const        { return nombre; }
    int getEdad() const             { return edad; }
    float getCalificacion() const   {  return calificacion; }
};
int main()
{
    Estudiante obj1;
    string name;
    int years_old;
    float cal;
    cout<<"Ingrese su nombre: ";        getline(cin,name);
    cout<<"Ingrese su edad: ";          cin>>years_old;
    cout<<"Ingrese su calificacion: ";  cin>>cal;

    obj1.setNombre(name);
    obj1.setEdad(years_old);
    obj1.setCalificacion(cal);

    cout<<"\nNombre: "<<obj1.getNombre()<<endl;
    cout<<"Edad: "<<obj1.getEdad()<<endl;
    cout<<"Calificacion: "<<obj1.getCalificacion()<<endl;
    return 0;
}