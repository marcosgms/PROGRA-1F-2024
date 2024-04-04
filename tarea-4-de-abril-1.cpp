#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control = 1;
	do{
		cout << "Hola usuario"<<endl;
		cout << "¿Quiere seguir dentro del menú?"<<endl;
		cout<<"1. Si"<<endl<<"2. No"<<endl;
		cin>>control;
	} while(control == 1);
	cout<<"Usted salió del menú";
	return 0;
}

