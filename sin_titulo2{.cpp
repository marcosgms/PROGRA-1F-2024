#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int years, edad;
	cout << "ingrese los a�os de servicio de la persona: ";
	cin >> years;
	cout << "ingrese la edad de la persona: ";
	cin >> edad;
	
	if (years >= 25 && edad > 65){
		cout << "Ya se puede jubilar, felicidades";
	} else {
		cout << "A�n no se puede jubilar";
	}
	return 0;
}
