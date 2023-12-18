#include <iostream>
#include <fstream>
using namespace std;
const int N = 100;
const int NFilas = N;/* constante con el número de filas */
const int NColumnas = N;/* constante con el número de columnas */

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
	int tit;
	ano =1990;
	/* Imprimir encabezado */
	cout << "    ";
	for (tit = 0;tit < 8;tit++){
		cout << "   " << tit ;
	}
	cout << endl;
	for (i = 0; i < nf; i=i+1) {
		cout << ano << "|";
		for (j = 0; j < nc; j=j+1) {
			if (t[i][j] < 100){
				cout << " " << t[i][j] << " ";}
			else{
				cout << t[i][j] << " ";}
		}
		cout << endl;
		ano++;
	}
}

int anoMaxEgresados(Matriz t, int nf, int nc){
	int i,j;
	int suma;
	int maxSuma, maxAno;
	
	maxAno = -1;
	maxSuma = 0;
	for (i = 0; i < nf; i=i+1) {
		suma = 0;
		for (j = 0; j < nc; j=j+1) {
			suma = suma + t[i][j];
		}
		/* Vemos si la fila suma más que nuestro máximo */
		if (suma > maxSuma){
			maxSuma = suma;
			maxAno = i; /* la fila es el año */
		}
	}
	return maxAno;
}

int titMinEgresados(Matriz t, int nf, int nc){
	int i,j;
	int suma;
	int minSuma, minTit;
	
	minTit = -1;
	minSuma = 9999;
	for (j = 0; j < nc; j=j+1) {
		suma = 0;
		for (i = 0; i < nf; i=i+1) {
			suma = suma + t[i][j];
		}
		/* Vemos si la fila suma más que nuestro máximo */
		if (suma < minSuma){
			minSuma = suma;
			minTit = j; /* la columna es la titulación */
		}
	}
	return minTit;
}

int titMaxEgresados(Matriz t, int nf, int nc){
	int i,j;
	int suma;
	int maxSuma, maxTit;
	
	maxTit = -1;
	maxSuma = 0;
	for (j = 0; j < nc; j=j+1) {
		suma = 0;
		for (i = 0; i < nf; i=i+1) {
			suma = suma + t[i][j];
		}
		/* Vemos si la fila suma más que nuestro máximo */
		if (suma > maxSuma){
			maxSuma = suma;
			maxTit = j; /* la columna es la titulación */
		}
	}
	return maxTit;
}


int titAumentoEgresados(Matriz t, int anos, int titula){
	int i, j;
	int gradoAumenta = -1;
  
	j = 0;
	while ((j< titula) && (gradoAumenta == -1))	{
		i=1;
		//vemos si va aumentando la titulación j
		while ((i < anos) && ( t[i-1][j] < t[i][j] )){
			i++;
		}
		//si salimos por el final es que han ido aumentando los años
		if (i == anos){
			gradoAumenta = j;
		}
		j++;
	}	
	return gradoAumenta;
}

int main() {
	
	Matriz t;
	int nf, nc;
	int result;
	/* Cargar los datos del fichero */
	cargarFichero(t,nf,nc,"egresados.txt");
	/* Imprimir los datos */
	mostrarTabla(t,nf,nc);
	result = anoMaxEgresados(t,nf,nc) + 1990;
	cout << "El año con más egresados es          :" << result << endl;
	result = titMinEgresados(t,nf,nc);
	cout << "La titulación con menos egresados es :" << result << endl;
	result = titMaxEgresados(t,nf,nc);
	cout << "La titulación con más egresados   es :" << result << endl;
	result = titAumentoEgresados(t,nf,nc);
	cout << "La titulación que aumenta egresados es :" << result << endl;
	return 0;
}




