#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anio;
	
		cout<<"Ingrese un a�o"<<endl;
		cin>>anio;
		
		if (anio%4==0 && anio%100!=0){
			cout<<anio<<" es a�o bisiesto";
		}else if (anio%100==0 && anio%400==0){
			cout<<anio<<" es a�o bisiesto";
		}else{
			cout<<anio<<" no es a�o bisiesto";
		}
	return 0;
}

