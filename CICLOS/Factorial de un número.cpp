#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Crear un programa que calcule el factorial de 1 n�mero entero ingresado. 
	cout<<"Ingrese un n�mero: "<<endl;
	int num;
	cin>>num;
	if (num<0) {
		cout << "No se puede calcular el factorial de un n�mero negativo." << endl;
		return 1;
	}
	int factorial=1;
	int i=1;
	
	while (i<=num) {
		factorial *= i;
		i++;
	}
		cout <<"El factorial de "<<num<< " es: "<<factorial<< endl;
	
	return 0;
}
