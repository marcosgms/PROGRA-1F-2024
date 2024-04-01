#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout << "Ingrese su año de nacimiento: ";
	cin >> numero;
		if (numero >= 2000){
			cout << "ES DEL SIGLO 21";
		}
		if (numero <= 1999){
			cout << "ES DEL SIGO 20";
		}
	return 0;
}

