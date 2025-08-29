#include <iostream>
#include <string>
using namespace std;

class CEmpleados{
    private:
    string name;
    float salario;
    int hs_t;
    public:
    void Cargar();
    void Aumento();
    void Mostrar() const;
};
void CEmpleados::Cargar(){
    cout<<"Ingrese su nombre:  ";
    getline(cin,name);
    cout<<"Ingrese su salario: ";
    cin>>salario;
    cout<<"Ingrese sus horas que trabajadas por día: ";
    cin>>hs_t;
    cin.ignore();   // Para evitar problemas con el buffer
}
void CEmpleados::Aumento(){
    if(hs_t==8)         salario+=250000;
    else if(hs_t==10)   salario+=300000;
    else if(hs_t>=12)   salario+=350000;
}
void CEmpleados::Mostrar() const{
    cout<<"Nombre:  "<<name<<endl;
    cout<<"Salario: "<<salario<<endl;
}
int main() {
    CEmpleados obrero;
    obrero.Cargar();
    obrero.Aumento();
    obrero.Mostrar();
    return 0;
}