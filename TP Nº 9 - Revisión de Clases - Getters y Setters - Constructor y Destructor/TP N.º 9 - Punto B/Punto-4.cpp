#include <iostream>
#include <vector>
using namespace std;
class Sumatoria{
    private:
    vector<int> num;
    public:
    Sumatoria() {
        int temp=0;
        do{
            if(temp!=0) num.push_back(temp);
            cout<<"ingrese un numero (0 para terminar el programa): ";
            cin>>temp;
        }while(temp!=0);
    }
    ~Sumatoria() {
        int rts=0;
        for(int y : num) rts+=y;
        cout<<"El resultado total es "<<rts<<endl;
    }
};
int main() {
    Sumatoria obj1;
    return 0;
}