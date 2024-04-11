#include <iostream>
using namespace std;
void numeros(double num1, double num2, double num3){
	double resultado;
	resultado=num1+num2+num3;
	cout<<"El resultado es: "<<resultado;
}
	
	int main(int argc, char *argv[]) {
		double num1, num2, num3;
		int control=1;
		do {
			cout<<"Ingrese una numero con decimales"<<endl;
			cin>>num1;
			cout<<"Ingrese una numero con decimales"<<endl;
			cin>>num2;
			cout<<"Ingrese una numero con decimales"<<endl;
			cin>>num3;
			numeros(num1, num2, num3);
			cout << endl << "Desea continuar? 1. Si, 2. No";
			cin >> control;
			if (control != 1 && control != 2) {
				control == 1;
				cout << "Por favor siga instrucciones";
			}
		}while(control==1);
		
		return 0;
	}
	
	
