#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese un n�mero: "<<endl;
	int num, pot=1;
	cin>>num;
	cout<<"Ingrese otro n�mero:"<<endl;
	int num2;
	cin>>num2;
	
	if (num2<=10){
		for(int i=1; i<=num; i++){
			pot=pot*num;
		};
		 cout<<"El resultado es: "<<pot;
	}else{
		cout<<"Debe ingresar un n�mero menor a 10";
	}
	return 0;
}
