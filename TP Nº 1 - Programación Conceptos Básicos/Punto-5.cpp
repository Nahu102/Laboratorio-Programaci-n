#include <iostream>
#include <string.h>
using namespace std;
void condicion(float a,float b);
int main()
{
	float cant,pregunta,contador1=0,contador2=0;
	
	cout<<"ingrese la cantidad de preguntas de la evaluacion: ";
	cin>>cant;
	cout<<"ingrese 1 si fue correcta y 0 si fue incorrecta:"<<endl;
	for(int i=0;i!=cant;i++)
	{
		cout<<"pregunta "<<i+1<<": ";
		cin>>pregunta;
		if(pregunta==1)
		{contador1++;}
		else if(pregunta==0)
		{contador2++;}
	}
	cout<<"hay "<<contador1<<" respuesta/s correcta/s y "<<contador2<<" respuesta/s incorrecta/s"<<endl;
	float rts=(contador1/cant)*100;
	condicion(rts,90);
	return 0;
}
void condicion(float a,float b)
{
	string nivel[4]={"nivel maximo","nivel medio","nivel regular","fuera de nivel"};
	for(int i=0;i<4;i++)
	{
		if(a>=(b-25*i))
		{
			cout<<"el resultado estuvo por "<<nivel[i+1]<<" porcentaje: "<<a<<"%";
			break;
		}
	}
}
