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
		cout<<"Hola usuario"<<endl;
		cout<<"Ingrese el primer angulo del triangulo"<<endl;
		double ang1;
		cin>>ang1;
		cout<<"Ingrese el segundo angulo del triangulo"<<endl;
		double ang2;
		cin>>ang2;
		double angulo, calculo;
		angulo= 180-(ang1+ang2);
	if((ang1+ang2)<=180){
		cout<<"El angulo faltante del triangulo es de: "<<angulo<<"°"<<endl;
	}else{
		cout<<"Los angulos no pueden calcularse para un angulo faltante en un triangulo"<<endl;
	}
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

