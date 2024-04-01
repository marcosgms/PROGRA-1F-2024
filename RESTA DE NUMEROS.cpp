#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero1;
	int numero2;
		cout << "Ingrese el primer número: " ;
		cin >> numero1;
		cout << "Igrese el segundo número: " ;
		cin >> numero2;
			
	int resultado;
		resultado = numero1 - numero2;
			cout << "El resultado de la resta es: " << resultado;
			
		if (resultado < 0) {
			cout << ". El resultado es negativo";
		}
		else { 
			cout << ". El resultado es positivo";
		}
	return 0;
}

