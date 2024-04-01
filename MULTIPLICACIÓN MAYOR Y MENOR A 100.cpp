#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
	cout << "Ingrese el primer número: ";
	cin >> numero1;
	cout << "ingrese el segundo número: ";
	cin >> numero2;
	
	int resultado;
	resultado = numero1 * numero2;
	cout << "el resultado es: " << resultado; 
	if (resultado < 100) {
		cout << ". El resultado es menor a 100";
	}
	else {
		cout << ". El resultado es mayor a 100";
	}
	return 0;
}

