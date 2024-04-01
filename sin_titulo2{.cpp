#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int years, edad;
	cout << "ingrese los años de servicio de la persona: ";
	cin >> years;
	cout << "ingrese la edad de la persona: ";
	cin >> edad;
	
	if (years >= 25 && edad > 65){
		cout << "Ya se puede jubilar, felicidades";
	} else {
		cout << "Aún no se puede jubilar";
	}
	return 0;
}
