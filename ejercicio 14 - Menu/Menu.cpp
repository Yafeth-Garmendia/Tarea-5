#include <iostream>

using namespace std;

int main (int argc, char** argv) {
	
	int opcion = 0 ;
	
	while (true) {
		system("cls");
		cout << "****" << endl;
		cout << "MENU" << endl;
		cout << "****" << endl;
		
		cout << endl;
		cout << "1 - Cafe y Granitas" << endl;
		cout << "2 - reposteria" << endl;
		cout << "0 - Salir" << endl;
		
		cout << "Ingrese una apcion del menu: ";
		cin >> opcion;
		
		if (opcion == 1) {
			system ("cls");
			cout << "Estas en el menu de cafe y granitas" << endl;
			system ("pause");
		}
		
		if (opcion == 2) {
			system ("cls");
			cout << "Estas en el menu de reposteria" << endl;
			system ("pause");
		}
		
		if (opcion == 0); {
			break;
		}		
	}
	
	cout << "Salsite del sistema";
	
	return 0;
}
