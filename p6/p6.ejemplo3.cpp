#include <iostream>
using namespace std;
int main()
{
	const float MF=-1;
	float EA; // Elemento actual
	float aprobados; // Elemento a Mayúsculas

	// Primer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de calificaciones -1 para terminar"<<endl;
	cin >> EA; // Comenzar
	aprobados = 0;
	while (EA != MF) { // Condición de finalización
		//Tratamiento EA
		if (EA >= 5.0){
			aprobados = aprobados + 1;
		}
		cin >> EA; // Avanzar
	}
	//Terminación del tratamiento
	cout << "Han aprobado " << aprobados << endl;
	return 0;
}
