#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num=0;
	cout<<"Ingrese un numero";
	cin>>num;
	switch(num){
	case 1:
		cout<<"Area común";
		break;
	case 3:
		cout<<"Area común";
		break;
	case 5:
		cout<<"Area específica";
		break;
	case 7:
		cout<<"Area específica";
		break;
	default:
			cout<<"NO NOS ENCONTRAMOS EN ESE SEMESTRE";
		break;
	}
	return 0;
}

