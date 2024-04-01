#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un número: "<<endl;
	int num1;
	cin >> num1;
	int  residuo;
	residuo = num1%2;
	if (num1 <= 0){
		cout << "El número es negativo"<<endl;
	} else {
		cout <<"El número es positivo"<<endl;
	}
	if (residuo == 0){
		cout << "el número es par"<<endl;
	} else {
		cout <<"El número es impar"<<endl;
	}
	return 0;
}

