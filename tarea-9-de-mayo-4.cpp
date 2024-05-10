#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	const int numeros = 10;
	int arreglo[numeros];
	cout<<"Hola usuario, ingrese 10 numeros"<<endl;
	for (int i=0;i<numeros;i++){
		cout<<"Ingrese el numero "<<i+1<<endl;
		cin>>arreglo[i];
	}
	int num;
	cout<<"Ingrese un número cualquiera"<<endl;
	cin>>num;
	bool cond = false;
	for (int i = 0; i < numeros; ++i) {
		if (arreglo[i] == num) {
			cond = true;
			break;
		}
	}
	if (cond) {
		cout<<"Felicidades, el número "<<num<<" aparece en el arreglo"<<endl;
	} else {
		cout<< "Mala suerte, el número no está :("<<endl;
	}
	return 0;
}

