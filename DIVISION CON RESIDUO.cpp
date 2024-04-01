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
	resultado = numero1 / numero2;
	cout << "El resultado es: " << resultado << "\n"; 
	
	int residuo;
	residuo = numero1 % numero2;
	cout << "El residuo es: " << residuo << "\n"; 
	return 0;
}

