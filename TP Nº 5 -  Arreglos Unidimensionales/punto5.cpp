#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
    int num1=0,cont1=0;
    vector<int> voto={0,0,0};
    const vector<string> producto={"Producto A","Producto B","Producto C"};
    //Le pedimos al usuario la cantidad de encuestados
    cout<<"ingrese la cantidad de encuestado: ";
    cin>>num1;
    system("cls");
    //Cantidad de encuestados constante
    const int encuestados=num1;
    //for para mostrar la encuesta
    for(int i=0;i<encuestados;i++){
        cout<<"\t*** ACCESO A ENCUESTA ***"<<endl;
        cout<<"\nDesea realizar encuesta? \n 1- si \n 2- no\ningrese su eleccion usando el numero adjunto a el: ";
        cin>>num1;
        if(num1==1)
        {
            cont1++;//si voto
            cout<<"\nPRODUCTOS PARTICIPANTES:"<<endl;
            for(int j=0;j<3;j++){
                cout<<j+1<<" - "<<producto[j]<<endl;
            }
            cout<<"Ingrese NUMERO Producto Favorito: ";
            cin>>num1;
            if(num1>=1 && num1<=3){//si se ingreso un numero del 1 al 3:
                voto[num1-1]++;
                cout<<"\nvoto registrado, gracias por participar en nuestra encuesta"<<endl;
            }
            else{//caso contrario el for acabara y mostrara:
                cout<<"\nerror numero fuera de rango, no se registro el voto"<<endl;
            }
        }
        system("pause");
        system("cls");
    }
    int mayor=0;
    for(int i=1;i<3;i++){//identificamos el producto con mayor votos
        if(voto[i]>voto[mayor]){
            mayor=i;
        }
    }
    vector<int>empatados;
    for(int j=0;j<3;j++){//revisamos si hay empate
        if(voto[j]==voto[mayor]){
            empatados.push_back(j);
        }
    }
    cout<<"El "<<producto[0]<<" tuvo "<<voto[0]<<" votos"<<endl;
    cout<<"El "<<producto[1]<<" tuvo "<<voto[1]<<" votos"<<endl;
    cout<<"El "<<producto[2]<<" tuvo "<<voto[2]<<" votos"<<endl;
    cout<<"Votaron "<<cont1<<" de "<<encuestados<<" personas"<<endl;
    if(empatados.size()==1){//si no hay empate
        cout<<"El Producto con mayor cantidad de votos es "<<producto[mayor];
    }
    else{//si hay empate
        cout<<"al parecer hay un empate entre los siguientes productor: ";
        for(int x=0;x<empatados.size();x++){
            cout<<"\n - "<<producto[empatados[x]];
        }
    }
    return 0;
}