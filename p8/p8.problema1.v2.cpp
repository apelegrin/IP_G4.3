#include <iostream>
using namespace std;
const int N = 10;
typedef int Vector [N];

void imprimirTabla(Vector r){
	int i;
	for (i=0; i < N; i++){
		cout << r[i] << ", ";
	}
	cout << endl;
}

int main () {

	int i;
	int aux;
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	
	imprimirTabla(t);
	/* rotación de la tabla a derechas*/
	aux = t[N-1];
	for (i = N-1; i > 0; i=i-1) {
		t[i] = t[i-1];
	}
	t[0] = aux;
	
	/* escribir el resultado */
	imprimirTabla(t);
	
	/* rotación de la tabla a izquierdas*/
	aux = t[0];
	for (i = 1; i < N; i=i+1) {
		t[i-1] = t[i];
	}
	t[N-1] = aux;
	
	/* escribir el resultado */
	imprimirTabla(t);
	return 0;
}
