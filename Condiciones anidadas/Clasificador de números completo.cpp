#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un n�mero: "<<endl;
	int num1;
	cin >> num1;
	int  residuo;
	residuo = num1%2;
	if (num1 <= 0){
		cout << "El n�mero es negativo"<<endl;
	} else {
		cout <<"El n�mero es positivo"<<endl;
	}
	if (residuo == 0){
		cout << "el n�mero es par"<<endl;
	} else {
		cout <<"El n�mero es impar"<<endl;
	}
	return 0;
}

