#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1;
		cout << "Ingrese un n�mero: " << endl;
		cin >> num1;
		
		if (num1 < 0){
			cout << "El n�mero: " << num1 << " es negativo" << endl;
		}
		if (num1 >= 0){
			cout << "El n�mero: " << num1 << " es positivo" << endl;
		}
	return 0;
}

