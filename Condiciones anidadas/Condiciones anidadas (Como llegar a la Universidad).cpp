#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	//Como llegar a la universidad
	int cond1;
	cout << "�Quiero ir a la universidad?" << endl << "1. Si 2. No";
	cin >> cond1;
	if (cond1 == 1){
		cout << "�Viajar� en carro propio?" << endl << "1. Si 2. No";
		int carro;
		cin >> carro;
		if (carro == 1 ){
			cout << "�Quiero evitar el tr�fico?" << endl << "1. Si 2. No";
			int trafico;
			cin >> trafico;
			if (trafico == 1){
				cout << "�conozco otras v�as disponibles?" << endl << "1. Si 2. No";
				int vias;
				cin >> vias;
				if (vias == 1){
					cout << "�hay menos tr�fico en otras v�as?" << endl << "1. Si 2. No";
					int vias_disp;
					cin >> vias_disp;
						if (vias_disp == 1){
							cout << "�hay alg�n accidente o calle cerrada" << endl << "1. Si 2. No";
							int calle;
							cin >> calle;
								if (calle == 2){
									cout << "Llego a la universidad con la ruta trazada";
									
								} else {
									cout << "Esperar a que liberen el tr�fico o regresar a la v�a principal para llegar a la universidad";
								}
						} else {
							cout << "Viajo a la universidad por la v�a principal";
						}
				} else {
					cout << "Viajo a la universidad en la v�a principal";
				}
			} else{
				cout << "Viajo a la universidad en la v�a principal";
			}
		} else {
			cout << "Voy a la universidad en otro transporte";
		}
	} else{
		cout << "No voy a la universidad";
	}
	return 0;
}

