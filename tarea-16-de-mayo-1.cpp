#include <iostream>
using namespace std;
void cifrado (double password, int num){
	double cifrar;
	cifrar=(password+num)*num;
	cout<<"Su contrase�a cifrada es: "<<cifrar<<endl;
}
int main(int argc, char *argv[]) {
	double password;
	cout<<"Hola usuario"<<endl;
	cout<<"Ingrese su contrase�a: "<<endl;
	cin>>password;
	cout<<"ingrese un n�mero para cifrar su contrase�a: "<<endl;
	int num;
	cin>>num;
	cifrado(password, num);
	
	
	
	return 0;
}

