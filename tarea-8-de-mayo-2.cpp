#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	const int tamanio = 2;
	int arreglo[tamanio];
	cout<<"Hola usuario este es el primer arreglo"<<endl;
	for (int i = 0; i < 2; i++) {
		cout<<"Ingrese un numero: "<<endl;
		cin >> arreglo[i];
		cout<<"El numero ingresado es: "<<arreglo[i]<<endl;
	}
	cout<<"Usted terminó de ingresar datos al primer arreglo"<<endl;
	
	
	cout<<endl<<"Hola usuario este es el segundo arreglo"<<endl;
	const int tamanio1= 10;
	int arreglo1[tamanio1];
	
	for (int i = 0; i < 10; i++) {
		cout<<"Ingrese un numero: "<<endl;
		cin >> arreglo1[i];
		cout<<"El numero ingresado es: " <<arreglo1[i]<<endl;
	}
	cout<<"Usted terminó de ingresar datos al segundo arreglo"<<endl;
	
	cout<<endl<<"Hola usuario este es el tercer arreglo"<<endl;
	const int tamanio2=5;
	int arreglo2[tamanio2];
	
	for (int i=0; i<5; i++){
		cout<<"Ingrese un numero: "<<endl;
		cin>>arreglo2[i];
		cout<<"El numero ingresado es: "<<arreglo2[i]<<endl;
	}
	cout<<"Usted terminó de ingresar datos al tercer arreglo"<<endl;
	
	cout<<endl<<"Hola usuario este es el cuarto arreglo"<<endl;
	const int tamanio3=7;
	int arreglo3[tamanio3];
	
	for (int i=0; i<7; i++){
		cout<<"Ingrese un numero: "<<endl;
		cin>>arreglo3[i];
		cout<<"El numero ingresado es: "<<arreglo3[i]<<endl;
	}
	cout<<"Usted terminó de ingresar datos al cuarto arreglo"<<endl;
	
	cout<<endl<<"Hola usuario este es el quinto arreglo"<<endl;
	const int tamanio4=3;
	int arreglo4[tamanio4];
	
	for (int i=0; i<3; i++){
		cout<<"Ingrese un numero: "<<endl;
		cin>>arreglo4[i];
		cout<<"El numero ingresado es: "<<arreglo4[i]<<endl;
	}
	cout<<"Usted terminó de ingresar datos al quinto arreglo"<<endl;
	return 0;
}

