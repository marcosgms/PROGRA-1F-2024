#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1;
	cout<<"Ingrese su contrase�a"<<endl;
	cin>>num1;
	
		if(num1>=10000&&num1%2!=0&&num1%3==0){
			cout<<"Contrase�a correcta";
		} else {
			cout<<"Contrase�a incorrecta";
		}
	return 0;
}

