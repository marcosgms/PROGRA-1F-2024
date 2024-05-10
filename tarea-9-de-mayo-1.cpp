#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros [5];
	int suma=0;
	cout<<"Hola usuario, sumaremos 5 números"<<endl;
	cout<<"Ingrese los numeros"<<endl;
	for (int i=0;i<5;i++){
		cout<<"Ingrese el numero "<<i+1<<endl;
		cin>>numeros[i];
		suma = suma + numeros[i];
	}
	
	cout<<"la suma de los números ingresados es: "<<suma<<endl;
	return 0;
}

