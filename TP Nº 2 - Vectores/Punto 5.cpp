#include <iostream>
using namespace std;
int main ()
{
	float estaturas[5] = { 1.64,1.72,1.58,1.8,1.72 };
	float promedio=0;
	for(int i=0;i<=4;i++)
	{
		promedio+=estaturas[i];
	}
	promedio=promedio/5;
	int mayor=0,menor=0;
	for(int x=0;x<=4;x++)
	{
		if(estaturas[x]>promedio)
			mayor++;
		if(estaturas[x]<promedio)
			menor++;
	}
	cout<<"el promedio de altura es: "<<promedio<<endl;
	cout<<"hay "<<mayor<<" personas mas altas que el promedio y "<<menor<<" personas mas bajas que el promedio"<<endl;
	return 0;
}
