#include <iostream>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];

void imprimirNotas(Vector r){
	int i;
	for (i=0; i<N; i++){
		if (r[i] > 0){
			cout << "Nota [" << i << "] = "
		         << r[i] << endl;
		}
	}
}

int main () {
	Vector nota;
	int EA;
	int i;
	
	/* Inicializo la tabla */
	for (i=0; i<N; i++){
		nota[i] = 0;
	}
	cout << "Introduce las calificaciones (-1 fin)" << endl;
	cin >> EA;
	/* 2ºESC 1 MAS*/
	if (EA == MF){
		cout << "Secuencia vacía" << endl;
	}else{
		while (EA != MF){
			/* Procesa EA */
			nota[EA] = nota[EA] + 1;
			/* Avanzar */
			cin >> EA;
		}
	}
	imprimirNotas(nota);
	return 0;
}
