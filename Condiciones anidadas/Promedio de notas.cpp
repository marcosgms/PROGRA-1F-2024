#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double num1;
	double num2;
	double num3;
		cout << "Ingrese la primera nota: "<<endl;
		cin >> num1;
		cout << "Ingrese la segunda nota: "<<endl;
		cin >> num2;
		cout << "Ingrese la tercera nota: "<<endl;
		cin >> num3;
		if (num1 >= 61 && num2 >= 61 && num3 >= 61){
			double suma_notas;
			suma_notas = num1+num2+num3;
			double promedio;
			promedio = suma_notas/3;
			cout <<"El promedio de sus notas es: "<<promedio;
		} else {
			cout << "Debe tener sus cursos en limpio";
		
	return 0;
}

