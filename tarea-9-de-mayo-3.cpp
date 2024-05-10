#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double numeros [5];
	double suma=0;
	double promedio;
	cout<<"Hola usuario, calcularemos el promedio de sus notas"<<endl;
	cout<<"Ingrese sus notas"<<endl;
	for (int i=0;i<5;i++){
		cout<<"Ingrese la nota "<<i+1<<endl;
		cin>>numeros[i];
		suma = suma + numeros[i];
	}
	promedio=suma/5;	
	cout<<"El promedio de sus notas es: "<<promedio<<endl;
	return 0;
}

