#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	int numero3 ;
	cout << "Ingrese el primer n�mero: " ;
	cin >> numero1;
	cout << "Igrese el segundo n�mero: " ;
	cin >> numero2;
	cout << "Igrese el tercer n�mero: " ;
	cin >> numero3;
	int resultado;
	resultado = numero1 + numero2 - numero3;
	cout << "El resultado de la resta es: " << resultado;
	return 0;
}

