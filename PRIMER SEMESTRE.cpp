#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout << "Ingrese su número de cursos: ";
	cin >> numero;
		if (numero == 5){
			cout << "PRIMER SEMESTRE";
		}
		if (numero < 5){
			cout << "INGRESE UN NUMERO IGUAL O MAYOR A 5";
		}
		if (numero > 5){
			cout << "NO SE SABE EL SEMESTRE";
		}
	return 0;
}

