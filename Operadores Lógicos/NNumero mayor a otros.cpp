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
		cout<<"El primer número: " <<num1<< ", es mayor que los demás números";
	}else if (num2>num1&&num2>num3){
		cout<<"El segundo número: " <<num2<< ", es mayor que los demás números";
	}else if (num3>num1&&num3>num2){
		cout<<"El tercer número: " <<num3<< ", es mayor que los demás números";
	}else if (num1==num2&&num2==num3&&num3==num1){
		cout<<"Los números son iguales";
	}
	return 0;
}

