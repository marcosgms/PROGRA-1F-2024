#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "ingrese el segundo n�mero: ";
	cin >> num2;
	
	if (num1 > num2){
		cout << "El n�mero 1 es mayor al n�mero 2";
	} else {
		cout << " El n�mero 2 es mayor al n�mero 1";
	}
	return 0;
}

