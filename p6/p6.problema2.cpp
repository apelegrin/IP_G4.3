#include <iostream>
using namespace std;
int main()
{
	const int MF=-1;
	int EA;  // Elemento actual
	int suma;// sumas parciales

	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de enteros >= 0 -1 para terminar"<<endl;
	cin >> EA; // Comenzar
	suma = 0;
	while (EA != MF) { // Condición de finalización
		//Tratamiento EA
		suma = suma + EA;
		cout << suma << ", "; // Registrar
		cin >> EA; // Avanzar
	}
	//Terminación del tratamiento
	cout << endl;
	return 0;
}
