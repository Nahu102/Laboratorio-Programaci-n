#include <iostream>
using namespace std;
int mcd(int a,int b);
int main()
{
	int num1,num2,num_max,div_max;
	cout<<"ingrese el primer numero: ";
	cin>>num1;		num_max=num1;
	cout<<"ingrese el segundo numero: ";
	cin>>num2;
	//se asegurarse de que los números sean positivos
    if (num1<= 0 || num2<=0) 
	{
        cout<<"recuerde que los numeros deben ser positivos"<<endl;
        return 0;
    }
    int resultado = mcd(num1,num2);
    cout<<"El maximo comun divisor de "<<num1<<" y "<<num2<<" es "<<resultado<<endl;
    return 0;
}
int mcd(int a,int b)
{
    while (b!=0) 
	{
        int resto=a % b;
        a=b;
        b=resto;
    }
    return a;
}
