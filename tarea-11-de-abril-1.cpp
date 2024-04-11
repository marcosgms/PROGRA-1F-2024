#include <iostream>
using namespace std;
void mostrarMensaje (int op){
	if (op == 1){
		cout<<"1 elefante se columpiaba sobre la tela de una araña";
	}
	if (op == 2){
		cout<<"2 elefantes se columpiaba sobre la tela de una araña";
	}
	if (op == 3){
		cout<<"3 elefantes se columpiaba sobre la tela de una araña";
	}
	if (op == 4){
		cout<<"4 elefantes se columpiaba sobre la tela de una araña";
	}
	if (op == 5){
		cout<<"5 elefantes se columpiaba sobre la tela de una araña";
	}
	if (op == 6){
		cout<<"Me repites ese numerín? Elija un número valido";
	}
	else{
		cout<<"Ningun elefante se columpiaba sobre la tela de una araña, elija un número valido";
	}
}
int main(int argc, char *argv[]) {
 int op;
 cout<<"Hola usuario"<<endl;
 cout<<"Elija una de las opciones:"<<endl;
 cout<<"1. Opción 1"<<endl;
 cout<<"2. Opción 2"<<endl;
 cout<<"3. Opción 3"<<endl;
 cout<<"4. Opción 4"<<endl;
 cout<<"5. Opción 5"<<endl;
 cin>>op;
 mostrarMensaje(op);
 return 0;
}

