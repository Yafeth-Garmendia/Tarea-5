#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char const *argv) 
{
	// Datos de entrada 
	double Subtotal = 0;
	double total = 0;
	double impuesto = 0.15;
	
	cout << "Ingrese el Subtotal de la factura: ";
	cin >>  Subtotal;
	
	// Proceso
	
	total = Subtotal + (Subtotal * 0.15);
	
	// Salida 
	
	cout << endl;
	cout << "Total a pagar es: " << total;
	
	return 0;
}
