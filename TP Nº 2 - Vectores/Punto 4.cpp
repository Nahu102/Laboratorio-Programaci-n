#include <iostream>
using namespace std;
int main()
{
	int vector[10];
	int min,max;
	for(int i=0;i!=10;i++)
	{
		cout<<"ingrese el valor del vector numero "<<i<<endl;
		cin>>vector[i];
		cout<<"\n";
		if(i==0)
		{min=vector[i];}
		if(vector[i]>max)
		{max=vector[i];}
		if(vector[i]<min)
		{min=vector[i];}
	}
	cout<<"numero maximo = "<<max<<"\n\nnumero minimo = "<<min;
	return 0;
}
