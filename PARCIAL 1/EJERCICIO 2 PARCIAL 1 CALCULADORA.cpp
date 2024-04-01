#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	int operacion;
	int resultado, resultado2;
	 cout << "Ingrese el primer número: " << endl;
	 cin >> num1;
	 cout << "Ingrese el segundo número: " << endl;
	 cin >> num2;
	 cout << "Ingrese la operación: 1 o 2" << endl;
	 cout << "1. suma " << endl;
	 cout << "2. resta " << endl;
	 cin >> operacion;
	
		 resultado = num1 + num2;
		 resultado2 = num1 - num2;
	 if (operacion == 1){
		 cout << "El resultado es: " << resultado << endl; 
	 }
	 if (operacion == 2){
		 cout << "El resultado es: " << resultado2 << endl;
	 }
	return 0;
}

