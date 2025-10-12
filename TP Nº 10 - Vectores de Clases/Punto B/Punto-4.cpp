#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Clase CuentaBancaria
class CuentaBancaria{
    private:
    int numCuenta;
    string titular;
    int saldo;

    public:
    CuentaBancaria(int n, string t, int s) {numCuenta=n; titular=t; saldo=s;}
    int getNum_Cuenta() const {return numCuenta;}
    int getSaldo() const {return saldo;}

    void setNum_Cuenta(int N) {numCuenta=N;}
    void setTitular(string T) {titular=T;}
    void setSaldo(int S) {saldo=S;}

    void mostrar() const;
    void depositar();
    void retirar();
};

void CuentaBancaria::mostrar() const{
    cout<<"Numero de cuenta: "<<numCuenta<<endl;
    cout<<" - Titular:\t"<<titular<<endl;
    cout<<" - Saldo:\t"<<saldo<<endl;
}
void CuentaBancaria::depositar() {
    cout<<"Cuanto desea depositar: ";
    int dep; cin>>dep;
    if(dep>0) saldo+=dep;
    else cout<<"error, recuerde que solo puede depositar montos mayores a 0";
}
void CuentaBancaria::retirar() {
    cout<<"Cuanto desea retirar: ";
    int ret; cin>>ret;
    if(ret<=0) cout<<"Error, el monto a retirar debe ser mayor a 0"<<endl;
    else if(ret>saldo) cout<<"error, saldo insuficiente"<<endl;
    else saldo-=ret;
}

// Verificamos si algun numero de cuenta en el vector coincide con el que estamos buscando 
int verificarCuenta(const vector<CuentaBancaria>& V, int B) { // V del vector en el que buscamos, B es lo que estamos buscando
    for(int i=0; i<V.size(); i++) {
        if(B == V[i].getNum_Cuenta())
            return i;// si lo encontramos devolvemos el indice
    }
    return -1;// caso contrario devolvemos un -1
}

int main() {
    vector<CuentaBancaria> Banco={
        {123,"jose",2345},
        {124,"tiago",6543},
        {125,"lautaro",4328}
    };

    bool exit=false;
    int cuenta=-1;
    int opcion;
    int temp_int[2];
    int numCuentaIngresada, idx;
    string temp_string;
    while(!exit) {
        cout<<"\n--------------------------------------------------\n"<<endl;//50
        if(cuenta==-1) {
            cout<<"\nUsuario Banco:\n\t1- Mostrar todas las cuentas\n\t2- Seleccionar una cuenta\n\t3- Ingresar cuenta\n\t4- Finalizar programa\nSeleccione una opcion dentro del rango: ";
            cin>>opcion;
            switch(opcion) {
                // Mostrar todas las cuentas
                case 1: for(const CuentaBancaria& cuenta : Banco) {cuenta.mostrar();} break;
                case 2: // Seleccionar una cuenta
                    cout<<"Ingrese el numero de la cuenta que desea seleccionar: "; 
                    cin>>numCuentaIngresada;
                    idx = verificarCuenta(Banco, numCuentaIngresada);
                    if(idx != -1) {
                        cout<<"Su cuenta seleccionada fue: "<<endl;
                        Banco[idx].mostrar(); cuenta=idx; // Guardamos índice
                    } else {cout<<"Error, cuenta no encontrada"<<endl; cuenta=-1;}
                break;

                case 3:
                    cout<<"Ingrese numero de cuenta: "; cin>>temp_int[0];
                    // Mientras el número sea inválido o ya exista
                    while(temp_int[0]<=0 || verificarCuenta(Banco, temp_int[0])!=-1) {
                        if(temp_int[0]<=0) cout<<"Error, el numero de cuenta debe ser mayor a 0, ingrese nuevamente: ";
                        else cout<<"Error, Numero de cuenta ya existente, ingrese otro: ";
                        cin>>temp_int[0];
                    }
                    cout<<"Ingrese el nombre del titular: ";
                    cin>>temp_string;
                    cout << "Ingrese el saldo de la cuenta: ";
                    cin >> temp_int[1];
                    while(temp_int[1] < 0) {
                        cout << "Error, el saldo no puede ser negativo, ingrese nuevamente: ";
                        cin >> temp_int[1];
                    }
                    Banco.push_back({temp_int[0], temp_string, temp_int[1]});
                break;

                case 4: cout<<"Cerrando Programa..."<<endl; exit=true; break; // Finalizar programa
                default:cout<<"Error, opcion fuera de rango"<<endl; break; // Opcion fuera de rango
            }
        } else {
            cout<<"\nUsuario Cuenta:\n\t1- Ver Datos\n\t2- Retirar\n\t3- Depositar\n\t4- Salir de la cuenta\nSelecione una opcion dentro del rango: ";
            cin>>opcion;
            switch(opcion) {
                case 1: Banco[cuenta].mostrar();    break;  // Ver datos
                case 2: Banco[cuenta].retirar();    break;  // Retirar
                case 3: Banco[cuenta].depositar();  break;  // Depositar
                case 4:cout<<"Cerrando cuenta..."<<endl; cuenta=-1; break;  // Salir de la cuenta
                default:cout<<"Error, opcion fuera de rango"<<endl; break;  // Opcion fuera de rango
            }
        }
    }
    return 0;
}