#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "ingrese el segundo número: ";
	cin >> num2;
	
	if (num1 > num2){
		cout << "El número 1 es mayor al número 2";
	} else {
		cout << " El número 2 es mayor al número 1";
	}
	return 0;
}

