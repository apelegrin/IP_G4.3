#include <iostream>
using namespace std;
int main()
{
	const int MF=-1;
	int EA;  // Elemento actual
	int cont;// Cuenta los procesados

	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de enteros >= 0 -1 para terminar"<<endl;
	// cin >> EA; // Comenzar
	cont = 0;
	while (EA != MF) { // Condición de finalización
		cin >> EA; // Avanzar
		//Tratamiento EA
		cout << EA << ", ";
		cont = cont + 1;
	}
	//Terminación del tratamiento
	cout << "Elmentos tratados " << cont << endl;
	return 0;
}
