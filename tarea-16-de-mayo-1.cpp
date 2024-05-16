#include <iostream>
using namespace std;
void cifrado (double password, int num){
	double cifrar;
	cifrar=(password+num)*num;
	cout<<"Su contraseña cifrada es: "<<cifrar<<endl;
}
int main(int argc, char *argv[]) {
	double password;
	cout<<"Hola usuario"<<endl;
	cout<<"Ingrese su contraseña: "<<endl;
	cin>>password;
	cout<<"ingrese un número para cifrar su contraseña: "<<endl;
	int num;
	cin>>num;
	cifrado(password, num);
	
	
	
	return 0;
}

