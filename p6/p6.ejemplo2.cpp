#include <iostream>
using namespace std;
int main()
{
	const int MF=-100;
	int EA; // Elemento actual
	int cuadrado; // Elemento a Mayúsculas

	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de números [-99,99] -100 para terminar"<<endl;
	cin >> EA; // Comenzar
	cuadrado = 0;
	while (EA != MF) { // Condición de finalización
		//Tratamiento EA
		cuadrado = EA * EA;
		cout << cuadrado << ", ";
		cin >> EA; // Avanzar
	}
	//Terminación del tratamiento
	cout << endl;
	return 0;
}
