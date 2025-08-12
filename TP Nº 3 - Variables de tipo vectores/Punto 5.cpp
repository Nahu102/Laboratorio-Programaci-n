#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    cout<<"ingrese el numero que busca: ";
    int num_bus;    cin>>num_bus;
    vector<int> num={2,4,3,6,7};
    int tam=num.size();
    for(int i=0;i<tam;i++)
    {
        if(num_bus==num[i])
        {
            cout<<"el numero si se encuentra en la lista, en la posicion "<<i+1<<endl;
            return 0;
        }
        else if(i==tam-1)
        {
            cout<<"el numero no se encuentra en la lista"<<endl;
            return 0;
        }
    }
    return 0;
}
