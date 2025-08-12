#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cout<<"Bienvenido le aclaramos que solo hay 5 cursos cada uno con una capacidad maxima de 20 alumnos"<<endl;
	
	//cursos
	vector<int> curso1;
	vector<int> curso2;
	vector<int> curso3;
	vector<int> curso4;
	vector<int> curso5;
	//variable para switch
	int curso;
	vector<int> contador={0,0,0,0,0};
	
	//Arreglo con 15 alumnos inscriptos
	vector<int> inscripciones;
	inscripciones.resize(15);
	
	for(int i=0;i<inscripciones.size();i++)
	{
		//el usuario ingresa el curso del alumno
		cout<<"\ningrese el curso del alumno numero "<<i+1<<":\t";
		cin>>inscripciones[i];
		
		//verifica si el curso existe
		while(inscripciones[i]<1 || inscripciones[i]>5 || contador[inscripciones[i] - 1] >= 20)
		{
			//notificamos el error
			cout<<"\nparece que hubo un error";
			
			//verifica cual es el error
			if(inscripciones[i]<1 || inscripciones[i]>5)  //si el curso ingresado no existe se muestra por pantalla:
				cout<<" recuerde que solo hay 5 cursos no puede ingresar mas de 5 o menos de 1"<<endl;
			else if(contador[inscripciones[i] - 1] >= 20) //si el curso solicitado esta lleno se muestra por pantalla:
				cout<<" al parecer el curso seleccionado esta lleno, seleccione otro"<<endl;
			
			//le pide al usuario que ingrese otro curso
			cout<<"ingrese nuevamente el curso del alumno numero "<<i+1<<": ";
			cin>>inscripciones[i];
		}
		
		//agrega el valor a el curso correspondiente;
		curso=inscripciones[i];
		switch(curso)
		{
			case 1:
				curso1.push_back(i+1);
				contador[0]++;
			break;
			case 2:
				curso2.push_back(i+1);
				contador[1]++;
			break;
			case 3:
				curso3.push_back(i+1);
				contador[2]++;
			break;
			case 4:
				curso4.push_back(i+1);
				contador[3]++;
			break;
			case 5:
				curso5.push_back(i+1);
				contador[4]++;
			break;
		}
	}
	
	for(int j=0;j<5;j++)
	{
		cout<<"\nen el Curso numero "<<j+1<<" hay "<<contador[j]<<" alumnos"<<endl;
	}
}
