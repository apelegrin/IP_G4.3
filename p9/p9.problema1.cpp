#include <iostream>
#include <fstream>
using namespace std;

const int NFilas = 8;/* constante con el número de filas */
const int NColumnas = 10;/* constante con el número de columnas */

typedef int Matriz[NFilas][NColumnas]; /*Tipo tabla*/

void cargarFichero (Matriz &S, int &NF, int &NC, string nombre) {
	ifstream f;
	int i, j;
	f.open (nombre);
	if (!f)
		cout << "Error abriendo el fichero" << endl;
	else {
		f >> NF;
		f >> NC;
		for (i=0; i < NF; i=i+1) {
			for (j=0; j < NC; j=j+1) {
				f >> S[i][j];
			}
		}
	}
	f.close();
}

void mostrarTabla(Matriz t, int nf, int nc){
	int i, j;
	int ano;
	ano = 1991;
	for (i = 0; i < nf; i=i+1) {
		cout << ano << "|";
		for (j = 0; j < nc; j=j+1) {
			cout << t[i][j] << " ";
		}
		ano++;
		cout << endl;
	}
}

int main(){
	Matriz alumnos;
	int nf;
	int nc;
	cargarFichero(alumnos,nf,nc,"egresados.txt");
	mostrarTabla(alumnos,nf,nc);
	return 0;
}
	
	
	
