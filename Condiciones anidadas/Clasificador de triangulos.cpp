#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double lado1;
	double lado2;
	double lado3;
	cout <<"Ingrese la longitus del primer lado del triangulo: "<<endl;
	cin >> lado1;
	cout <<"Ingrese la longitus del segundo lado del triangulo: "<<endl;
	cin >> lado2;
	cout <<"Ingrese la longitus del tercer lado del triangulo: "<<endl;
	cin >> lado3;
	if (lado1==lado2&&lado1==lado3&&lado2==lado3){
		cout <<"el triangulo es equilatero";
	}
	else if (lado1!=lado2&&lado1!=lado3&&lado2!=lado3){
		cout <<"el triangulo es escaleno";
	}
	else {
		cout <<"El triangulo es isóceles";
	}
	return 0;
}

