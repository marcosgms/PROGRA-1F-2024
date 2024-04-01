#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		int num;
		int s=0;
		cout <<"Ingrese un número: ";
		cin>>num;
		if(num%2==0){
			cout<<num<<" es numero par"<<endl;
			int n=2;
			while (n <= num){
				s+=n;
				n+=2;
				
			}
		} else{
			cout<<num<<" es numero impar"<<endl;
			int n=1;
			while (n <= num){
				s+=n;
				n+=2;
			}
		}
		cout<<"La suma de sus números ";
		if (num%2==0)
			cout<<"pares es ";
		else
			cout<<"impares es ";
		cout<<s<<endl;
	return 0;
}

