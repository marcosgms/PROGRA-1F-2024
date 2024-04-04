#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control = 1;
	do{
		cout<<"Hola usuario"<<endl;
		cout<<"¿Quiere realizar una operación?"<<endl;
		cout<<"1. Si"<<endl<<"2. No"<<endl;
		cin>>control;
		if (control == 1){
			cout<<"¿Qué operación desea realizar?"<<endl;
			cout<<"1. Suma"<<endl<<"2. Resta"<<endl<<"3. Multiplicación"<<endl<<"4. División"<<endl;
			float num, num1, num2;
			cin>>num;
			if (num == 1){
				cout<<"Ingrese el primer número"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo número"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1+num2;
				cout<<"El resultado de "<<num1<<"+"<<num2<<" es: "<<pro1<<endl;
			} else if (num == 2){
				cout<<"Ingrese el primer número"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo número"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1-num2;
				cout<<"El resultado de "<<num1<<"-"<<num2<<" es: "<<pro1<<endl;
			} else if (num == 3){
				cout<<"Ingrese el primer número"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo número"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1*num2;
				cout<<"El resultado de "<<num1<<"x"<<num2<<" es: "<<pro1<<endl;
			} else if (num == 4){
				cout<<"Ingrese el primer número"<<endl;
				cin>>num1;
				cout<<"ingrese el segundo número"<<endl;
				cin>>num2;
				float pro1;
				pro1 = num1/num2;
				cout<<"El resultado de "<<num1<<"/"<<num2<<" es: "<<pro1<<endl;
			} 
		};
	} while(control == 1);
	cout<<"Usted salió del menú";
	return 0;
}

