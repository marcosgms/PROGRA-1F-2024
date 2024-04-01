#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double temp;
	cout<<"Hola usuario"<<endl;
	cout<<"Ingrese la temperatura"<<endl;
	cin>>temp;
	if (temp<2){
		cout<<"La temperatura es fría";
	} else if (temp>=2&&temp<10){
		cout<<"La temperatura es templada";
	} else{
		cout<<"La temperatura es caliente";
	}
	return 0;
}

