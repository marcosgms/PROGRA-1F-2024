#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double peso, altura;
	cout<<"Ingrese su peso en kilogramos:"<<endl;
	cin>>peso;
	cout<<"Ingrese su altura en metros:"<<endl;
	cin>>altura;
	double op1;
	double altura2;
	altura2=altura*altura;
	op1=peso/altura2;
	if (op1<18.5){
		cout<<"Su masa corporal es: "<<op1<<" tiene un peso bajo";
	}
	else if (op1>=18.5 && op1<=25){
		cout<<"Su masa corporal es: "<<op1<<" tiene un peso normal";
	}
	else if (op1>=25 && op1<=30){
		cout<<"Su masa corporal es: "<<op1<<" tiene sobrepeso";
	}
	else if (op1>30){
		cout<<"Su masa corporal es: "<<op1<<" tiene obesidad";
	}
	return 0;
}

