#include <iostream>
#include <string>
using namespace std;

string cifrar(const string& cadena) {
	
	string resultado = cadena;
	int longitud = resultado.length(); 
	for (int i = 0; i < longitud; i++){
		char caracter = resultado [i];
		if(caracter == 'i' || caracter == 'I'){
			resultado[i] = '1';
		}
		if(caracter == 'e'||caracter=='I'){
			resultado[i]='3';
		}
		if(caracter == 'a'||caracter == 'A'){
			resultado[i]='4';
		}
		if(caracter == 'o'||caracter=='O'){
			resultado[i]='0';
		}
		if(caracter == 'u'||caracter=='U'){
			resultado[i]='*';
		}
	}
	return resultado;
}
int main(int argc, char *argv[]) {
	cout<<"Hola usuario"<<endl;
	cout<<"Ingrese su contraseña"<<endl;
	string password, passwordCifrado;
	
	getline(cin, password);
	passwordCifrado = cifrar(password);
	cout << endl << "Su contraseña cifrada es: " << passwordCifrado;
	
	return 0;
}

