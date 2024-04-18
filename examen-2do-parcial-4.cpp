#include <iostream>
using namespace std;
void calculadoraVuelto (double gasto, double pago){
	
	if (gasto<pago){
	cout<<"Muchas gracias por su compra"<<endl;
	double vuelto;
	vuelto = pago-gasto;
	cout<<"El vuelto es de: Q."<<vuelto<<endl;
	};
	if(pago<gasto){
		cout<<"No ha dado la cantidad suficiente"<<endl;
		double faltante;
		faltante = gasto-pago;
		cout<<"Le faltan: Q."<<faltante<<" para completar su compra"<<endl;
	};
}
	void limpiarPantalla(){
		{
		system("cls");
	}
	}
int main(int argc, char *argv[]) {
	int control;
	do{
		cout<<"Hola Usuario"<<endl;
		cout<<"Ingrese la cantidad gastada: "<<endl;
		double gasto;
		cin>>gasto;
		cout<<"Q."<<gasto<<" gastados"<<endl;
		cout<<"Ingrese la cantidad recibida"<<endl;
		double pago;
		cin>>pago;
		cout<<"Q."<<pago<<" recibidos"<<endl;
		calculadoraVuelto (gasto, pago);
		cout<<endl<<"¿Desea volver a la calculadora?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. No"<<endl;
		cin >> control;
		if (control != 1 && control != 2) {
			control == 1;
		}
		limpiarPantalla();
	} while(control==1);
	cout<<"Usted salió de la calculadora";
	return 0;
}

