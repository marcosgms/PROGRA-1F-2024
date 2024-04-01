#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string text1, text2;
	cout << "Ingrese el primer texto: " << endl;
	getline (cin, text1);
	cout << "Ingrese el segundo texto: " << endl;
	getline (cin, text2);
		
	if (text1 == text2){
		cout << "Los textos son iguales";
	} else {
		cout << "Los textos no son iguales";
	}
	return 0;
}

