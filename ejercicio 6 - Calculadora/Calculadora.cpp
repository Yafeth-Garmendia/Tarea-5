#include <iostream>

/* Cree una programa que realice una suma, Resta, multiplique y divida, llamando el programa como Calculadora. */
using namespace std;
int main(int argc, char** argv) {
	
int A,B,suma,resta,mult,division;

 cout<<"\n Bienvenido al prgrama calculadora De Yafeth";
 cout<<"\n ingrese valor para A:";
 cin>>A;
 cout<<"\n ingrese valor para B:";
 cin>>B;
 suma=A+B;
 resta=A-B;
 mult =A*B;
 division=A/B;
 cout<<A<<"+"<<B<<"="<<suma;
 cout<<"\n"<<A<<"-"<<B<<"="<<resta;
 cout<<"\n"<<A<<"*"<<B<<"="<<mult;
 cout<<"\n"<<A<<"/"<<B<<"="<<division;
	
	
	return 0;
}
