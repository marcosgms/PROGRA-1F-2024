#include <iostream>
using namespace std;

void limpiarPantalla(){
	{
system("cls");
	}
}
int main(int argc, char *argv[]) {
	
	int control;
	do {
		cout<<"Hola usuario"<<endl;
		cout<<"Ingrese el lado opuesto del triangulo"<<endl;
		double lado1;
		cin>>lado1;
		cout<<"Ingrese el lado adyacente del triangulo"<<endl;
		double lado2;
		cin>>lado2;
		
		double hip, calculo;
		hip=(lado1*(lado1))+(lado2*(lado2));
		calculo=hip;
		
		cout<<"La hipotenusa del triangulo es: "<<calculo<<endl;
		cout<<endl<<"¿Desea volver a la calculadora?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. No"<<endl;
		cin >> control;
		if (control != 1 && control != 2) {
			control == 1;
		}
		limpiarPantalla();
	} while(control==1);
	cout<<"Usted salió de la calculadora";
	
	return 0;
}

