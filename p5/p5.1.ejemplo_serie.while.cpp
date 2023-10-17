#include <iostream>
using namespace std;
// En este programa el LIMITE es una constante incorporada en el programa.
// También podría ser un valor cualquiera leído de la entrada.
int main () {
	const float LIMITE = 15.0;
	float suma; // valor de la suma de términos en un momento determinado
	int cuenta; // cuenta el número de términos y lo utilizamos de divisor
	cuenta=0;
	suma=0.0;
	/*
	do {
		cuenta = cuenta + 1;
		suma = suma + 1.0/cuenta;
	} while (suma <= LIMITE);
	*/
	while (suma <= LIMITE){
		cuenta = cuenta + 1;
		suma = suma + 1.0/cuenta;
	}
	cout << "El número de términos es " << cuenta << endl;
}
