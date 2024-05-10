#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros [15];
	cout<<"Ingrese los numeros"<<endl;
	for (int i=0;i<15;i++){
		cout<<"Ingrese un numero en la posición "<<i<<endl;
		cin>>numeros[i];
	}
	for (int i=0;i<15;i++){
		cout<<"Numero ingresado en la posicion "<<i<<": "<<numeros[i]<<endl;
	}
	
	return 0;
}

