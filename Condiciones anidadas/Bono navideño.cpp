#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double salario;
	double tiempo;
		cout <<"Bienvenido"<<endl<<"ingrese su salario: "<<endl;
		cin >> salario;
		cout <<"ingrese sus a�os de estancia en la empresa: "<<endl;
		cin >> tiempo;
		if (tiempo >= 5){
			double bono;
			bono = (salario*10)/100;
			cout <<"Su bono navide�o es de: "<<bono;
		}else {
			double bono2;
			bono2 = (salario*5)/100;
			cout <<"Su bono navide�o es de: "<<bono2;
		}
	return 0;
}

