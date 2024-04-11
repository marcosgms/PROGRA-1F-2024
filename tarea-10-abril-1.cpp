#include <iostream>
#include <string>
using namespace std;
void palabras(string p1, string p2){
	cout<<p1<<" "<<p2;
}
	
int main(int argc, char *argv[]) {
	string p1, p2;
	int control=1;
	do {
	cout<<"Ingrese una palabra"<<endl;
	cin>>p1;
	cout<<"Ingrese otra palabra"<<endl;
	cin>>p2;
	palabras(p1, p2);
	cout << endl << "Desea continuar? 1. Si, 2. No";
	cin >> control;
	if (control != 1 && control != 2) {
		control == 1;
		cout << "Por favor siga instrucciones";
	}
}while(control==1);
	
	return 0;
}

