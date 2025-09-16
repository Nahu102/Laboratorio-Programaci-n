#include <iostream>
using namespace std;
class Operaciones{
    private:
    int num1,num2;
    public:
    Operaciones(int,int);
    void suma() const           { cout<<"Resultado de la suma: "<<num1+num2<<endl; };
    void resta() const          { cout<<"Resultado de la resta: "<<num1-num2<<endl; };
    void multiplicacion() const { cout<<"Resultado de la multiplicacion: "<<num1*num2<<endl; };
    void division() const {
        if(num2==0) cout<<"Error no se pueden realizar divisiones por 0"<<endl;
        else        cout<<"Resultado de la dvision: "<<(double)num1/num2<<endl;
    }
};
Operaciones::Operaciones(int n1,int n2) {
    num1=n1;
    num2=n2;
}
int main() {
    int x, y;
    cout<<"Ingrese el primer numero: ";     cin>>x;
    cout<<"Ingrese el segundo numero: ";    cin>>y;
    Operaciones obj1(x,y);
    cout<<"\nResultados: "<<endl;
    obj1.suma();
    obj1.resta();
    obj1.division();
    obj1.multiplicacion();
    return 0;
}