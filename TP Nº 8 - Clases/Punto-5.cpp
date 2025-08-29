#include <iostream>
#include <vector>
using namespace std;

class CNumeros{
    public: vector<int> Perfect(int);
};
vector<int> CNumeros::Perfect(int limit){
    vector<int> num;
    for(int i=1; i<=limit; i++) {
        int div=0;

        for(int j=1; j<=i/2; j++)
            if(i%j==0) div+=j;

        if(div==i) num.push_back(i);
    }
    return num;
}
int main()
{
    cout<<"Ingrese un Numero: ";
    int N;  cin>>N;
    CNumeros obj;

    cout<<"\nNumeros perfectos:"<<endl;

    vector<int> Nums=obj.Perfect(N);

    if(Nums.empty())
        cout<<"No se encontraron Numeros perfectos"<<endl;
    else
        for (int p : Nums) cout<<p<<endl;
    return 0;
}