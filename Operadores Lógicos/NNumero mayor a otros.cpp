#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2, num3;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>num2;
	cout<<"Ingrese el tercer numero"<<endl;
	cin>>num3;
	
	if (num1>num2&&num1>num3){
		cout<<"El primer n�mero: " <<num1<< ", es mayor que los dem�s n�meros";
	}else if (num2>num1&&num2>num3){
		cout<<"El segundo n�mero: " <<num2<< ", es mayor que los dem�s n�meros";
	}else if (num3>num1&&num3>num2){
		cout<<"El tercer n�mero: " <<num3<< ", es mayor que los dem�s n�meros";
	}else if (num1==num2&&num2==num3&&num3==num1){
		cout<<"Los n�meros son iguales";
	}
	return 0;
}

