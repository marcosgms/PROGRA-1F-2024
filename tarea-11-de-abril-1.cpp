#include <iostream>
using namespace std;
void mostrarMensaje (int op){
	if (op == 1){
		cout<<"1 elefante se columpiaba sobre la tela de una ara�a";
	}
	if (op == 2){
		cout<<"2 elefantes se columpiaba sobre la tela de una ara�a";
	}
	if (op == 3){
		cout<<"3 elefantes se columpiaba sobre la tela de una ara�a";
	}
	if (op == 4){
		cout<<"4 elefantes se columpiaba sobre la tela de una ara�a";
	}
	if (op == 5){
		cout<<"5 elefantes se columpiaba sobre la tela de una ara�a";
	}
	if (op == 6){
		cout<<"Me repites ese numer�n? Elija un n�mero valido";
	}
	else{
		cout<<"Ningun elefante se columpiaba sobre la tela de una ara�a, elija un n�mero valido";
	}
}
int main(int argc, char *argv[]) {
 int op;
 cout<<"Hola usuario"<<endl;
 cout<<"Elija una de las opciones:"<<endl;
 cout<<"1. Opci�n 1"<<endl;
 cout<<"2. Opci�n 2"<<endl;
 cout<<"3. Opci�n 3"<<endl;
 cout<<"4. Opci�n 4"<<endl;
 cout<<"5. Opci�n 5"<<endl;
 cin>>op;
 mostrarMensaje(op);
 return 0;
}

