#include <iostream>
using namespace std;

class CNumeros{
    private:
    int n1, n2, n3;
    public:
    void Cargar_nums();
    void min_max(int &min, int &max);
    void Mostrar(int min, int max) const;
};
void CNumeros::Cargar_nums() {
    cout<<"ingrese el primer numero: ";
    cin>>n1;
    cout<<"ingrese el segundo numero: ";
    cin>>n2;
    cout<<"ingrese el tercer numero: ";
    cin>>n3;
}
void CNumeros::min_max(int &min, int &max) {
    //Minimo
    if(n1<n2 && n1<n3)  min=n1;
    else if(n2<n3)      min=n2;
    else                min=n3;
    //Maximo
    if(n1>n2 && n1>n3)  max=n1;
    else if(n2>n3)      max=n2;
    else                max=n3;
}
void CNumeros::Mostrar(int min,int max) const {
    cout<<"\nEl primer numero "<<n1<<endl;
    cout<<"El segundo numero "<<n2<<endl;
    cout<<"El tercer numero "<<n3<<endl;
    cout<<"\nMaximo: "<<max<<endl;
    cout<<"Minimo: "<<min<<endl;
}

int main() {
    int minimo,maximo;
    CNumeros num1;
    num1.Cargar_nums();
    num1.min_max(minimo,maximo);
    num1.Mostrar(minimo,maximo);
    return 0;
}