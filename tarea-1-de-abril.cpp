#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "Ingrese un numero"<<endl;
	int num, i=0;
	cin>>num;
	
	for (int num2=0;num2<num;num2++){
		i = i+num2;
		
	};
	cout <<"El resultados es: "<<i<<endl;
	return 0;
}

