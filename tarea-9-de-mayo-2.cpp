#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int numeros = 5;
	int arreglo[numeros];
	cout<<"Hola usuario, encontraremos el numero mayor"<<endl;
	cout<<"Ingrese los numeros"<<endl;
	for (int i=0;i<numeros;i++){
		cout<<"Ingrese el numero "<<i+1<<endl;
		cin>>arreglo[i];
	}
	int pos = arreglo[0];
	for(int i=0;i<numeros;i++){
		if (arreglo [i]>pos){
			pos = arreglo[i];
		}
	}
	cout<<"El número mayor es: "<<pos;
	return 0;
}

