#include <iostream>
using namespace std;
class Entero{
    private:
        int valor;
    public:
        void cargar(){
            cout<<"Ingrese un valor entero: ";
            cin>>valor;
        }
        void mostrar(){
            for(int i=1;i<valor;i++){
                cout<<i<<endl;
            }
            cout<<valor<<endl;
        }
};
int main() {
    Entero num;
    num.cargar();
    num.mostrar();
    return 0;
}