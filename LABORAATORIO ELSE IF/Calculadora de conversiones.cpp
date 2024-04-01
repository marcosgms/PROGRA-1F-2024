#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int conversion;
	cout<<"Elja el tipo de conversión que desea 1-5"<<endl;
	cout<<"1. Kilometros a metros"<<endl;
	cout<<"2. Metros a kilometros"<<endl;
	cout<<"3. Pies a Pulgadas"<<endl;
	cout<<"4. Pulgadas a pies"<<endl;
	cout<<"5. Kilometros a millas"<<endl;
	cin>>conversion;
	double num1;
	cout<<"Ingrese la cantidad a convertir"<<endl;
	cin>>num1;
	
	if (conversion==1){
		double op1;
		op1=num1*1000;
		cout<<"La conversion es: "<<op1<<" metros";
	}
	else if (conversion==2){
		double op2;
		op2=num1/1000;
		cout<<"La conversion es: "<<op2<<" kilometros";
	}
	else if (conversion==3){
		double op3;
		op3=num1*12;
		cout<<"La conversion es: "<<op3<<" pulgadas";
	}
	else if (conversion==4){
		double op4;
		op4=num1/12;
		cout<<"La conversion es: "<<op4<<" pies";
	}
	else if (conversion==5){
		double op5;
		op5=num1/1.609344;
		cout<<"La conversion es: "<<op5<<" millas";
	}
	
	return 0;
}

