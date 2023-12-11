#include <iostream>
#include <map> // <= Es necesario incluir este archivo de cabecera para usar el map
#include <string>
#include <iomanip>

using namespace std;

const char MF = '#';
typedef map<char, int> TipoHistograma;

void imprimirHistograma(TipoHistograma h,float n){
	char c;
	float frec;
	cout << fixed << setprecision(2);
	for (c = 'a'; c <= 'z'; c=c+1) {
		if (h[c] > 0){
			frec = h[c] / n * 100;
			cout << "Letra [" << c << "] = "
		         << h[c] << " Frec = " 
		         << frec << "%" << endl;
		}
	}
}

void imprimirHistogramaAste(TipoHistograma h,float n){
	char c;
	int longitud;
	float frec;
	int i;
	cout << fixed << setprecision(2);
	for (c = 'a'; c <= 'z'; c=c+1) {
		if (h[c] > 0){
			longitud = h[c] / 10;
			cout << "Letra [" << c << "] = *";
		    for (i=0;i < longitud;i++){
				cout << "*";
			}  
			frec = h[c] / n * 100;  
			cout << h[c] << " " << frec << "%" << endl; 
		}
	}
}
int main () {

	TipoHistograma h;
	char c;
	char EA;
	float numEle;
	
	// Inicializa las posiciones de h a 0, desde la 'a' hasta la 'z':
	for (c = 'a'; c <= 'z'; c=c+1) { 
		h[c] = 0; 
	}
	numEle = 0;
	cout << "Introduce un texto (# para fin)" << endl;
	cin.get(EA);
	/* 2ºESC 1 MAS*/
	if (EA == MF){
		cout << "Secuencia vacía" << endl;
	}else{
		while (EA != MF){
			/* Procesa EA */
			h[EA] = h[EA] + 1;
			numEle = numEle + 1;
			/* Avanzar */
			cin.get(EA);
		}
		imprimirHistogramaAste(h,numEle);
	}
	return 0;
}
	
	
	
	
