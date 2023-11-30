#include <iostream>
using namespace std;
const int LMAX = 100;
typedef float Vector[LMAX];

void Leer_Vector (Vector &a, int n)
{
	int i;
	for (i = 0; i < n; i=i+1) {
		cout << "Introduzca el componente " << i+1 << ": ";
		cin >> a[i]; }
}

int main() {
	Vector a, b;
	float producto;
	int tama, i;

	cout << endl;
	cout << "Producto escalar de dos vectores ***" << endl;
	cout << "Introduzca la longitud de los vectores: ";
	cin >> tama;
	cout << endl << "Vector 1: " << endl;
	Leer_Vector (a, tama); 
	cout << endl;
	cout << "Vector 2: " << endl;
	Leer_Vector (b, tama);
	cout << endl;
	producto = 0.0;
	for (i = 0; i < tama; i=i+1) {
		producto = producto + a[i] * b[i]; }
	/* INV
	producto = a[1]* b[1] + a[2]* b[2] + .. a[i] * b[i] */
	cout << endl;
	cout << "El producto escalar es: " << producto << endl;
	return 0;
}
