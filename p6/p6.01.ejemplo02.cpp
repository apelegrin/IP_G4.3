#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

void guardarFicheroInt (list<int> S, string nombre) {
	/* Genera datos y escribe en fichero y muestra en pantalla */
	ofstream f;
	list<int>::iterator EA;

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

void cargarFicheroInt (list<int> &S, string nombre) {
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

int main()
{
	list<int> S, R;
	list<int>::iterator EA_S;
	cargarFicheroInt (S, "entrada2.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial */
	EA_S = S.begin();
	while (EA_S != S.end()) {
		cout << *EA_S << ", ";
		R.push_back ((*EA_S)*(*EA_S)); // Registrar(R, (*EA_S)*(*EA_S))
		EA_S++;
	}
	guardarFicheroInt (R, "salida2.txt");
	cout << "Terminado!" << endl;
	return 0;
}

