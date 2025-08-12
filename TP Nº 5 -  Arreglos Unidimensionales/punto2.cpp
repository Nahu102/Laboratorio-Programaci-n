#include <iostream>
#include <cstdlib>//Es una libreria que vi el año pasado en este caso lo utilize para limpiar la pantalla y pausarlo
#include <string>
#include <vector>
using namespace std;

//separador solo para que se vea un poco mejor el programa visualmente
void sector(){
	cout<<"\n";
	for(int i=0;i<=50;i++)
		cout<<"-";
	cout<<"\n";
}

//funcion para verificar los codigos de los productos
int buscar_cp(const string& buscar,const vector<string>& cp){
	for(int i=0;i<cp.size();i++){
		if(buscar==cp[i])
		return i;//devuelve la posicion del producto
	}
	return -1;//devuelve -1 si no existe le producto
}

//muestra el contenido del producto
void mostrar(int pos,const vector<string>& cp,const vector<string>& pr,const vector<int> cs){
	cout<<"Codigo:\t"<<cp[pos]<<endl;
	cout<<"Nombre:\t"<<pr[pos]<<endl;
	cout<<"Stock:\t"<<cs[pos]<<endl;
}

int main()
{
	//Codigo del producto
	vector<string> cp={"100","101"};
	//Nombre del producto
	vector<string> pr={"Manzana","Pera"};
	//Cantidad en stock
	vector<int> cs={10,12};
	
	//Ciclo while
	bool salir=false;
	while(salir==false)
	{
		//limpiamos la pantalla
		system("cls");
		cout<<"Bienvenido al inventario de los productos"<<endl;
		for( int i=0;i<cp.size();i++ ){
			cout<<"\nProducto Numero "<<i+1<<":"<<endl;
			mostrar(i,cp,pr,cs);
		}
		sector();
		//Variables del Switch
		int opcion, temp_int;
		string temp_str;
		//Opciones del usuario
		cout<<"\nOpciones de Accion:\n1- Ingresar un codigo\n2- Buscar producto\n3- Salir\n\nSeleccione una opcion: ";
		cin>>opcion;
		sector();
		switch(opcion)
		{
			case 1:	//Ingresar un nuevo producto:
				cout<<"\ningrese el codigo:";
				cin>>temp_str;
				temp_int=buscar_cp(temp_str,cp);
				//verificamos si ya existe el codigo
				while(temp_int!=-1)
				{
					cout << "El codigo ingresado ya existe, Ingrese uno diferente: ";
					cin>>temp_str;
					temp_int=buscar_cp(temp_str,cp);
				}
				cp.push_back(temp_str);
				
				cout<<"ingrese el nombre del producto:";
				cin>>temp_str;
				pr.push_back(temp_str);
				cout<<"ingrese la cantidad de stock:";
				cin>>temp_int;
				cs.push_back(temp_int);
			break;
			
			case 2://Buscamos un Producto
				cout<<"\nIngrese el codigo del producto: ";
				cin>>temp_str;
				temp_int=buscar_cp(temp_str,cp);
				if(temp_int!=-1){
					cout<<"\nSe ha encontrado el producto:\n";
					mostrar(temp_int,cp,pr,cs);
					cs[temp_int]--;//le restamos 1 al stock del producto
				}
				else{
					cout<<"\nNo existe un producto con el codigo "<<temp_str<<endl;
				}
				sector();
				system("pause");
			break;
			
			case 3://Salimos del Programa y lo Terminamos
				salir=true;
			break;
		}
	}
	return 0;
}
