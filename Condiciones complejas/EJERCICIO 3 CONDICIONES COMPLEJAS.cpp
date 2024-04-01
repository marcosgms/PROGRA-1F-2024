#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double num1, num2;
	cout << "Ingrese el primer número: " << endl;
	cin >> num1;
	cout << "ingrese el segundo número: " << endl;
	cin >> num2;
	
	if (num1 != num2){
		cout << "Los numeros son diferentes";
	} else {
		cout << "Los numeros no son diferentes";
	}
	return 0;
}

