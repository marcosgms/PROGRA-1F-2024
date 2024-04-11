#include <iostream>
#include <string>
using namespace std;
void mostrarMensaje(int op){
	if (op==1){
		cout<<"Ingrese un número: "<<endl;
		double num;
		cin>>num;
		cout<<"Ingresó el número: "<<num;
	}
	if (op==2){
		cout<<"Ingrese una palabra: "<<endl<<endl;
		string word;
		cin>>word;
		cout<<"Ingresó la palabra: "<<word<<endl;
	}
	if (op==3){
		cout<<"Ingrese una letra: "<<endl<<endl;
		char letra;
		cin>>letra;
		cout<<"Ingresó la letra: "<<letra<<endl;
	} else{
		cout<<"Ingresó una opción invalida"<<endl;
	}
}
int main(int argc, char *argv[]) {
	int control=1;
	do{
		cout<<"Hola usuario, bienvenido al menú"<<endl;
		cout<<"Seleccione la opicón que desea:"<<endl;
		cout<<"1. Imprimir número"<<endl;
		cout<<"2. Imprimir palabra"<<endl;
		cout<<"3. Imprimir letra"<<endl;
		int op;
		cin>>op;
		mostrarMensaje(op);
		cout<<endl<<"Desea continuar?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. No"<<endl;
		cin >> control;
		if (control != 1 && control != 2) {
			control == 1;
		}
	} while(control==1);
	cout<<"Usted salió del menú";
	return 0;
}

