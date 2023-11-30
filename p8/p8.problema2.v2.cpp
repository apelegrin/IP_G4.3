#include <iostream>
#include <iomanip>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];
typedef float VectorFloat [N];

void imprimirNotas(Vector r, VectorFloat f){
	int i;
	cout << fixed << setprecision(2);
	for (i=0; i<N; i++){
		if (r[i] > 0){
			cout << "Nota [" << i << "] = "
		         << r[i] << " Frec = " 
		         << f[i] << "%" << endl;
		}
	}
}

int main () {
	Vector nota;
	VectorFloat frecRel;
	int EA;
	int i;
	float numEle;
	
	/* Inicializo la tabla notas */
	for (i=0; i<N; i++){
		nota[i] = 0;
	}
	numEle = 0;
	
	cout << "Introduce las calificaciones (-1 fin)" << endl;
	cin >> EA;
	/* 2ºESC 1 MAS*/
	if (EA == MF){
		cout << "Secuencia vacía" << endl;
	}else{
		while (EA != MF){
			/* Procesa EA */
			nota[EA] = nota[EA] + 1;
			numEle = numEle + 1;
			/* Avanzar */
			cin >> EA;
		}
		/* Calcular frec. relativos */
		for (i=0; i<N; i++){
			frecRel[i] = nota[i]/numEle*100;
		}
		imprimirNotas(nota,frecRel);
	}
	
	return 0;
}
