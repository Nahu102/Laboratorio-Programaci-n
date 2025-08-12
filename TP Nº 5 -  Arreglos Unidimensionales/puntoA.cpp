#include <iostream>
#include <string>
#include <vector>
using namespace std;
void Intro(vector<int>& V, int& N){
	cout<<"ingrese la cantidad de datos: ";
	cin>>N;
	V.resize(N);
	for(int i=0;i<N;i++){
		cout<<"ingrese el valor de la posicion "<<i+1<<": ";
		cin>>V[i];
	}
}

void Encontrar(vector<int>& V, int& N, float& S, float& Prom, float& Pos, float& A, float& B, float& C, float& D, float& E){
	S=0;
	for(int i=0;i<N;i++){
		S+=V[i];
	}
	Prom=S/N;
	for(int i=1;i<N;i++){
		if(V[i]>Prom){
			A=Prom-V[i-1];
        	B=V[i]-Prom;
            C=V[i-1];
            D=V[i];
            Pos=i;
			i=N;
		}
	}
}

void Mostrar(float& Pos, float& Prom,float& A,float& B, float& C, float& D, float& E){
	if(A<B){
		E=C;
	}
	else{
		E=D;
	}
	cout<<"\nResultados:\n";
    cout<<"Promedio: "<<Prom<<endl;
    cout<<"E: "<<E<<endl;
    cout<<"Posicion: "<<Pos<<endl;
}
int main(){
	vector<int> V;
	float S;
	int N;
	float Prom,Pos;
	float A,B,C,D,E;
	Intro(V,N);
	Encontrar(V,N,S,Prom,Pos,A,B,C,D,E);
	Mostrar(Pos,Prom,A,B,C,D,E);
	return 0;
}
