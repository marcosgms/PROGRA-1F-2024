#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1;
	cout<<"Ingrese su contraseña"<<endl;
	cin>>num1;
	
		if(num1>=10000&&num1%2!=0&&num1%3==0){
			cout<<"Contraseña correcta";
		} else {
			cout<<"Contraseña incorrecta";
		}
	return 0;
}

