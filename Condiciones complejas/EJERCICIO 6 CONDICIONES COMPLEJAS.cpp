#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
		int year;
		cout << "Ingerese su a�o" << endl;
		cin >> year;
			
			if (year % 4 == 0 && year % 10 == 0){
				cout << "El a�o es bisiesto y divisible dentro de 10";
			}
			if (year % 4 != 0 && year % 10 == 0){
				cout << "El a�o no es bisiesto pero si es divisible dentro de 10";
			}
			if (year % 4 != 0 && year % 10 != 0){
				cout << "El a�o no es bisiesto ni divisible dentro de 10";
			}
	return 0;
}

