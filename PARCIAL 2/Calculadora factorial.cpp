#include <iostream>
using namespace std;
void limpiarPantalla(){
	{
	system("cls");
}
}
int main(int argc, char *argv[]) { 
	int control;
	do{	
	cout<<"Ingrese un número: "<<endl;
	int num;
	cin>>num;
	if (num<0) {
		cout << "No se puede calcular el factorial de un número negativo." << endl;
		return 1;
	}
	int factorial=1;
	int i=1;
	
	while (i<=num) {
		factorial *= i;
		i++;
	}
		cout <<"El factorial de "<<num<< " es: "<<factorial<<endl;
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
