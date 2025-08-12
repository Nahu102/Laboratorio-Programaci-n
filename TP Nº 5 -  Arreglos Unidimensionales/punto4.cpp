#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
/*
no estaba seguro de si podia usarlo en esta tarea
pero lo use para que sea un poco mas facil manejarlo
*/
class datos{
	public:
		int libro;
		int edad;
		int educacion;
};
//separador solo para que se vea un poco mejor el programa visualmente
void sector(){
	cout<<"\n";
	for(int i=0;i<=50;i++)
		cout<<"-";
	cout<<"\n"<<endl;
}
int main(){
	vector<datos> encuesta;
	datos temp;
	const int Total_Encuestados=50;
	//encuesta
	for(int i=0;i<Total_Encuestados;i++)
	{
		cout<<"Bievenido Encuestado Numero "<<i+1<<"\nA continuacion le haremos un par de preguntas por favor responda como le es indicado\n"<<endl;
		//tipo de libro 1 o 0
		cout<<"ingrese el tipo de libro que le gusta:\n1-ficcion\n2-no ficcion\nrecuerde solo puede ingresar 1 o 2: ";
		cin>>temp.libro;
		while(temp.libro!=1 && temp.libro!=2){//en caso de ser incorrecto 
			cout<<"error, ingrese 1 o 2: ";
			cin>>temp.libro;
		}
		sector();
		//ingrese su edad
		cout<<"ingrese su edad: ";
		cin>>temp.edad;
		sector();
		//ingreese su nivel de educacion
		cout<<"Cual es su nivel de educacion?\n1-primaria\n2-secundaria incompleta\n3-secundaria completa\n4-terciaria\n5-universitaria\nIngrese su nivel de educacion: ";
		cin>>temp.educacion;
		while(temp.educacion<1 || temp.educacion>5){//en caso de ser incorrecto 
			cout<<"error, ingrese entre 1 a 5: ";
			cin>>temp.educacion;
		}
		//pasar los valores al vector
		encuesta.push_back(temp);
		system("cls");
	}
	
	//revisar datos
	int contador_18=0,cont1=0,cont2=0;
	int educ_res[5]={0};
	for(int x=0;x<Total_Encuestados;x++)
	{
		//a) Numero total de respuestas de encuestados mayores a 18 a�os.
		if(encuesta[x].edad>18)
			contador_18++;
		//b) Porcentaje de lectores para cada tipo de libros
		if(encuesta[x].libro==1)
			cont1++;
		else if(encuesta[x].libro==2)
			cont2++;
		//c) Para cada tipo de Educaci�n indicar cantidad de respuestas
		educ_res[encuesta[x].educacion - 1]++;
	}
	int total=cont1+cont2;
	int porcentaje1=0,porcentaje2=0;
	if(total!=0)
	{
		porcentaje1=(cont1*100)/total;
		porcentaje2=(cont2*100)/total;
	}
	// Mostrar datos recolectados
	cout <<"El numero total de respuestas de encuestados mayores a 18 a�os es de "<<contador_18<<" personas"<<endl;
	sector();
	cout <<"El Porcentaje de lectores para cada tipo de libros es:"<<endl;
	cout <<"1 - Ficcion:     "<<porcentaje1<<"%"<<endl;
	cout <<"2 - No ficcion:  "<<porcentaje2<<"%"<<endl;
	sector();
	cout <<"Niveles de educacion de los encuestados:"<<endl;
	cout <<"1 - Primaria:              "<<educ_res[0]<<" personas"<<endl;
	cout <<"2 - Secundaria incompleta: "<<educ_res[1]<<" personas"<<endl;
	cout <<"3 - Secundaria completa:   "<<educ_res[2]<<" personas"<<endl;
	cout <<"4 - Terciaria:             "<<educ_res[3]<<" personas"<<endl;
	cout <<"5 - Universitaria:         "<<educ_res[4]<<" personas"<<endl;
	return 0;
}
