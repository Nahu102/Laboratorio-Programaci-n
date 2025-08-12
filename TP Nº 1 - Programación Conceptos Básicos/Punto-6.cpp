#include <iostream>
using namespace std;
float condicion(float total,int cant);
int main ()
{
	float boleto=100,bol_total,cant,rts;
	cout<<"1 boletos = 100$\ndescuento del 10% por 2 boletos\ndescuento del 15% por 3 boletos\ndescuento del 20% por 4 boletos\nlimite de compras = 4"<<endl;
	cout<<"ingrese la cantidad de boletos a comprar: ";
	cin>>cant;
	if (cant<1 || cant>4) 
	{
        cout << "Cantidad no válida. Solo puede comprar entre 1 y 4 boletos." << endl;
        return 1;
    }
	bol_total=boleto*cant;
	rts=condicion(bol_total,cant);
	cout<<"el precio total es de "<<rts<<"$";
	return 0;
}
float condicion(float total, int cant)
{
	float descuento = 0;
    if (cant == 2)
        descuento = 0.10;
    else if (cant == 3)
        descuento = 0.15;
    else if (cant == 4)
        descuento = 0.20;
    return total * (1 - descuento);
}
