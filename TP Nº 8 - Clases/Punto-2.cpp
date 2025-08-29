#include <iostream>
using namespace std;
class Entero_2{
    private:
        int v1,v2;
        int mayor(int a, int b){
            if(a>b) return a;
            else return b;
        }
    public:
        void cargar(){
            cout<<"Ingrese el primer valor entero: ";
            cin>>v1;
            cout<<"Ingrese el segundo valor entero: ";
            cin>>v2;
            cout<<"El mayor es: "<<mayor(v1,v2)<<endl;
        }
};
int main() {
    Entero_2 num;
    num.cargar();
    return 0;
}