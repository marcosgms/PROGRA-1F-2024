#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letra;
	cout << "Ingrese una letra: ";
	cin >> letra;

	if(letra >= 'A' && letra <= 'Z') {
		cout << "La letra ingresada es mayuscula." << endl;
	} else if(letra >= 'a' && letra <= 'z') {
		cout << "La letra ingresada es minuscula." << endl;
	} else {
		cout << "El caracter ingresado no es una letra." << endl;
	}
	return 0;
}

