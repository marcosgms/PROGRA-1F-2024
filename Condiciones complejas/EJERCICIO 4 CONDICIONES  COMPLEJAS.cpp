#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese su edad: " << endl;
	cin >> num1;
	cout << "ingrese otra edad: " << endl;
	cin >> num2;
	
	if (num1 >= 18 && num2 >= 18){
		cout << "Ambos son mayores de edad";
	}
	if (num1 < 18 && num2 < 18){
		cout << "Ambos son menores de edad";
	}
	if (num1 >= 18 && num2 < 18){
		cout << "Solo el primero es mayor de edad";
	}
	if (num1 < 18 && num2 >=  18){
		cout << "Solo el segundo es mayor de edad";
	}
	return 0;
}

