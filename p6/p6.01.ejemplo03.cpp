#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

void guardarFicheroFloat (list<float> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<float>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}
		f << endl;
		f.close();
	}
}

void cargarFicheroFloat (list<float> &S, string nombre) {
	ifstream f;
	int dato;
	
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear ();
		while (f >> dato) { // mientras la lectura sea exitosa
			S.push_back (dato); // Registrar (S, dato)
		}
		f.close();
	}
}

int main(){
	list<float> S;
	list<float>::iterator EA_S;
	int cont;
	cargarFicheroFloat (S, "entrada3.txt");

	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA_S = S.begin();
	cont = 0;
	while (EA_S != S.end()) {
		if (*EA_S >= 5.0) {
			cont++;
		}
		EA_S++;
	}
	cout << "El número de aprobados es: " << cont;
}
