#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double nota1, nota2, nota3, nota4, nota5;
	cout<<"Ingrese la primera nota"<<endl;
	cin>>nota1;
	cout<<"Ingrese la segunda nota"<<endl;
	cin>>nota2;
	cout<<"Ingrese la tercera nota"<<endl;
	cin>>nota3;
	cout<<"Ingrese la cuarta nota"<<endl;
	cin>>nota4;
	cout<<"Ingrese la quinta nota"<<endl;
	cin>>nota5;
	double promedio;
	promedio = ((nota1+nota2+nota3+nota4+nota5)/5);
	if (promedio<61){
		cout<<"Su promedio es: "<<promedio<<endl<<"NO TIENE PERMITIDO HACER SU EXAMEN PRIVADO";
	}
	else if (promedio>=61&&promedio<=75){
		cout<<"Su promedio es: "<<promedio<<endl<<"SI REALIZA TRABAJO COMUNITARIO, PUEDE HACER SU EXAMEN PRIVADO";
	}
	else if (promedio>=76&&promedio<=85){
		cout<<"Su promedio es: "<<promedio<<endl<<"PROMEDIO NORMAL, PUEDE HACER SU EXAMEN PRIVADO";
	}
	else if (promedio>=86&&promedio<=90){
		cout<<"Su promedio es: "<<promedio<<endl<<"PROMEDIO ALTO, SI SE GRADUA SERA CON HONORES";
	}
	else if (promedio>=91&&promedio<96){
		cout<<"Su promedio es: "<<promedio<<endl<<"PROMEDIO MUY ALTO, SI SE GRADUA SERA CON MAXIMOS HONORES";
	}
	else if (promedio>95){
		cout<<"Su promedio es: "<<promedio<<endl<<"PUEDE EXONERARSE DE EXAMEN PRIVADO";
	}
	return 0;
}

