#include <iostream>
#include <iomanip>
using namespace std;
const int MF = -1;
const int N = 11;
typedef int Vector [N];

int isRelativaMayor50(Vector r,float n){
	int i;
	int result;
	
	i = 0;
	while ((i < N) && (r[i] / n * 100 < 50.0)){
		i++;
	}
	/* Condición de fin*/
	if (i == N){
		result = -1;
	}else{
		result = i;
	}
	return result;	
	
}
 
void imprimirNotas(Vector r,float n){
	int i;
	float frec;
	cout << fixed << setprecision(2);
	for (i=0; i<N; i++){
		if (r[i] > 0){
			frec = r[i] / n * 100;
			cout << "Nota [" << i << "] = "
		         << r[i] << " Frec = " 
		         << frec << "%" << endl;
		}
	}
}

int main () {
	Vector nota;
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
		imprimirNotas(nota,numEle);
		cout << "Busca: " << isRelativaMayor50(nota,numEle) << endl;
	}
	
	return 0;
}
