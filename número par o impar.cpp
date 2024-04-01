#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout <<"Ingrese número par o inmpar: ";
	 	
	cin >> numero;
	
	if (numero % 2 == 0){
		cout << "Es numero ingresado es par";
	} 
	else {
		cout << "Es numero ingresado es impar";
	}
	
	return 0;
}

