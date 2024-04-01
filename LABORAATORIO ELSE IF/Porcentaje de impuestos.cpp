#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double salario;
	cout<<"Ingrese su salario"<<endl;
	cin>>salario;
	if (salario<=15000){
		cout<<"Usted debe pagar el 5% de impuestos";
	}
	else if(salario>=15001&&salario<30001){
		cout<<"Usted debe pagar el 12% de impuestos";
	}
	else if(salario>=30001){
		cout<<"Usted debe pagar el 21% de impuestos";
	}
	return 0;
}

