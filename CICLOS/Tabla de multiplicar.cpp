#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"Ingrese un n�mero: "<<endl;
	int num;
	cin>>num;
	cout<<"Ingrese otro n�mero:"<<endl;
	int num2;
	cin>>num2;
	while (num2<=10){
		cout<<num<<"*"<<num2<<" = "<<num*num2<< endl;
		num++;
	}
	return 0;
}

