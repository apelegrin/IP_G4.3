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
	/*declaración e inicialización de un vector t */
	Vector t = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31} ;
	Vector z;
	
	imprimirTabla(t);
	/* rotación en la tabla 'z' */
	z[0] = t[N-1];
	for (i = 1; i < N; i=i+1) {
		z[i] = t[i-1];
	}
	/* copia a la tabla 't' */
	for (i = 0; i < N; i=i+1) {
		t[i] = z[i];
	}
	/* escribir el resultado */
	imprimirTabla(t);
	
	return 0;
}
