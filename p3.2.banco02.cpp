#include <iostream>
using namespace std;
int main() {
	/*Léxico*/
	int periodo; /*entre 1 y 24*/
	float interesTotal, interesMensual;
	float cantidadPrestada, cantidadDevolver, cuotaMensual;
	char clienteRiesgo;
	/*Código*/
	cout << "Cantidad a prestar      >";
	cin >> cantidadPrestada;
	cout << "Periodo (1-24 meses)    >";
	cin >> periodo;
	cout << "Interés mensual         >";
	cin >> interesMensual;
	cout << "Cliente de riesto (s/n) >";
	cin >> clienteRiesgo;
	if ((periodo >=1)&&(periodo<=24))
	{
		interesTotal = interesMensual * periodo / 100;
		cantidadDevolver = cantidadPrestada * (1.0+interesTotal);
		if ((clienteRiesgo=='s') || (clienteRiesgo=='S'))
		{
			cantidadDevolver = cantidadDevolver * 1.01;
		}
			cuotaMensual = cantidadDevolver / periodo;
			cout << "La cuota mensual es de >" << cuotaMensual << endl;
			cout << "La cantidad a devolver >" << cantidadDevolver << endl;
	}
	else
	{
		cout << "Error en el periodo "<< endl;
	}/*end_if*/
}








