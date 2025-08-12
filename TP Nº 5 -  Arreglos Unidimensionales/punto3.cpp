#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<float> mes;
	float temp_int,temp_max,temp_min,temp_prom=0,temp_f=0;
	for(int i=0;i<30;i++)
	{
		cout<<"ingrese la temperatura del dia "<<i+1<<": ";
		cin>>temp_int;
		mes.push_back(temp_int);
		temp_prom+=temp_int;
		if(i==0){
			temp_max=temp_int;
			temp_min=temp_int;
		}
		if(temp_int<temp_min)
		temp_min=temp_int;
		if(temp_int>temp_max)
		temp_max=temp_int;
		if(temp_int<10)
		temp_f++;
	}
	temp_prom/=30;
	cout << "\nResultados del Mes:\n";
	cout << "Temperatura promedio:\t"<<temp_prom<<" C"<<endl;
	cout << "Temperatura maxima:\t"<<temp_max<<" C"<<endl;
	cout << "Temperatura minima:\t"<<temp_min<<" C"<<endl;
	cout << "Dias frios (<10C):\t"<<temp_f<< " dias"<<endl;
	return 0;
}