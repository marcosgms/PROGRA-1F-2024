#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void menu1 (int menu){
		cout<<"Hola usuario"<<endl;
		cout<<"Seleccione la opción que desea"<<endl;
		cout<<"1. Ingresar coordenadas"<<endl;
		cout<<"2. Ingresar un número"<<endl;
		cout<<"3. Ingresar una palabra"<<endl;
		int opc;
		cin>>opc;
		
		switch (opc){
			
		case 1:
			int coordx, coordy;
			cout<<"Hola Usuario"<<endl;
			cout<<"Ingrese una coordenada para x"<<endl;
			cin>>coordx;
			cout<<"Ingrese una coordenada para y"<<endl;
			cin>>coordy;
			gotoxy(coordx, coordy);
			cout <<"Hola Mundo desde gotoxy"<<endl;
			break;
			
		case 2:
			cout<<"Hola Usuario"<<endl;
			cout<<"Ingrese un número"<<endl;
			double num;
			cin>>num;
			gotoxy(30, 30);
			cout <<num<<endl;
			break;
		case 3:
			int control1=0;
			cout<<"Hola usuario"<<endl;
			cout<<"ingrese una palabra"<<endl;
			string word;
			cin>>word;
			do{
				cout<<word<<endl;
				control1++;
			} while(control1<10);
			break;
		}
}

	void menu2 (int menu){
		cout<<"Hola usuario"<<endl;
		cout<<"Seleccione la opción que desea"<<endl;
		cout<<"1. Imprimir caracter Ascii"<<endl;
		cout<<"2. Recibir un saludo"<<endl;
		int opc;
		cin>>opc;
		
		switch (opc){
			
		case 1:
			cout<<"Hola usuario, este es el caracter ascci más raro: alt + 15"<<endl;
			gotoxy(30, 30);
			break;
			
		case 2:
			cout<<"Ingresa tu nombre"<<endl;
			string nombre;
			cin>>nombre;
			cout<<"Hola "<<nombre<<endl;
			break;
		}
	}

int main(int argc, char *argv[]) {	
	int i;
	do{
	int control;
	cout<<"Hola usuario"<<endl;
	cout<<"Seleccione una de las opciones"<<endl;
	cout<<"1. Primer menú"<<endl;
	cout<<"2. Segundo menú"<<endl;
	int menu;
	cin>>menu;
	
	if (menu==1){
		int control;
		do{
			menu1 (menu);
			cout<<endl<<"¿Desea continuar en el menú 1?"<<endl;
			cout<<"1. Si"<<endl;
			cout<<"2. No"<<endl;
			cin >> control;
			if (control != 1 && control != 2) {
				control == 1;
			}
		} while(control==1);
	}
	if (menu==2){
		int control;
		do{
			menu2 (menu);
			cout<<endl<<"¿Desea continuar en el menú 2?"<<endl;
			cout<<"1. Si"<<endl;
			cout<<"2. No"<<endl;
			cin >> control;
			if (control != 1 && control != 2) {
				control == 1;
			}
		} while(control==1);
	}
	
	cout<<endl<<"¿Desea regresar al seleccionador de menús?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cin >> i;
	if (i != 1 && i != 2) {
		i == 1;
	}
	} while(i==1);
	cout<<"Usted salió de los menús";
	return 0;
}
