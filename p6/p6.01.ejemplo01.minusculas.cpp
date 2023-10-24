#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;
const char MARCA_FIN_LINEA = '\n';

void guardarFicheroChar (list<char> S, string nombre) {
	ofstream f;
	list<char>::iterator EA;
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{	
		EA = S.begin();
		while (EA != S.end()) {
			if (*EA == MARCA_FIN_LINEA) {
				f << endl;
			} else {
				f << *EA;
			}
			EA++;
		}
		f.close();
	}
}

void cargarFicheroChar (list<char> &S, string nombre) {
	ifstream f;
	string cadena;
	unsigned int i;
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (getline(f, cadena)) {
			for (i=0; i<cadena.length(); i++) {
				S.push_back (cadena[i]);
			}
			S.push_back (MARCA_FIN_LINEA);
		}
	}
	f.close();
}

int main(){
	/* Distancia entre los juegos de caracteres mayúsculas y minúsculas: */
	const int Distancia = int('a') - int('A');
	list<char> S, R;
	list<char>::iterator EA;
	char c_conv;
	cargarFicheroChar (S, "entrada1.txt");
	
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	EA = S.begin();
	while (EA != S.end()) {
		if ((*EA >= 'A') && (*EA <= 'Z')) {
			c_conv = char(int(*EA)+Distancia);
		}
		else {
			c_conv = *EA;
		}
		R.push_back (c_conv); /* Registrar(R, c_conv) */
		EA++;
	}
	guardarFicheroChar (R, "salida1.txt");
	return 0;
}

