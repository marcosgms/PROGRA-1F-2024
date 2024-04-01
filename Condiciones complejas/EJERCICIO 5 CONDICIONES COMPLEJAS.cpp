#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1;
	cout << "Ingrese un número: " << endl;
	cin >> num1;
		
		if (num1 >= 500 && num1 <= 1000) {
			cout << "Si, el número esta en el rango de 500 a 1000";
	} else { 
			cout << "No, el número esta fuera del rango de 500 a 100";
		}
		
return 0;
}

