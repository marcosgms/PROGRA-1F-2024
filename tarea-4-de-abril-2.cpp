#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control = 1;
	do{
		cout<<"Hola usuario"<<endl;
		cout<<"�Quiere realizar una operaci�n?"<<endl;
		cout<<"1. Si"<<endl<<"2. No"<<endl;
		cin>>control;
		if (control == 1){
			cout<<"�Qu� operaci�n desea realizar?"<<endl;
			cout<<"1. Suma"<<endl<<"2. Resta"<<endl<<"3. Multiplicaci�n"<<endl<<"4. Divisi�n"<<endl;
			float num, num1, num2;
			cin>>num;
			if (num == 1){
				cout<<"Ingrese el primer n�mero"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo n�mero"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1+num2;
				cout<<"El resultado de "<<num1<<"+"<<num2<<" es: "<<pro1<<endl;
			} else if (num == 2){
				cout<<"Ingrese el primer n�mero"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo n�mero"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1-num2;
				cout<<"El resultado de "<<num1<<"-"<<num2<<" es: "<<pro1<<endl;
			} else if (num == 3){
				cout<<"Ingrese el primer n�mero"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo n�mero"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1*num2;
				cout<<"El resultado de "<<num1<<"x"<<num2<<" es: "<<pro1<<endl;
			} else if (num == 4){
				cout<<"Ingrese el primer n�mero"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo n�mero"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1/num2;
				cout<<"El resultado de "<<num1<<"/"<<num2<<" es: "<<pro1<<endl;
			} 
		};
	} while(control == 1);
	cout<<"Usted sali� del men�";
	return 0;
}

