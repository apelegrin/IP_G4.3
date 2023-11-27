#include <iostream>
using namespace std;
int main()
{
	const int FDS=-1;
	float EA;  // Elemento actual
    float menor40;
    float entre40y50;
    float mayor50;
    float media;
    float sumaPesos;
    
	// Segundo esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de pesos >= 0 -1 para terminar"<<endl;
	cin >> EA; //Comenzar
	menor40 = 0;
	entre40y50 = 0;
	mayor50 = 0;
	sumaPesos = 0;
	media = 0;
	if (EA == FDS) {
		//Tratamiento de la secuencia vacía
		cout << "La secuencia está vacía" << endl;
	}
	else {
	    do {						//REPETIR
			//Tratamiento EA
			if (EA < 40) {
				menor40 = menor40 + 1.0;
			} else if (EA <= 50) {
				entre40y50 = entre40y50 + 1.0;
			}
			else{
				mayor50 = mayor50 + 1.0;
			}
			sumaPesos = sumaPesos + EA;
			//Avanzar
			cin >> EA;
		} while (!(EA == FDS));		//MIENTRAS NO FDS
		//Terminación del tratamiento
		cout << "Menores a 40kg hay : " << menor40 << endl;
		cout << "Entre 40kg y 50kg  : " << entre40y50 << endl;
		cout << "Mayores a 50kg hay : " << mayor50 << endl;
		media = sumaPesos /(menor40+entre40y50+mayor50);
		cout << "La media es : " << media << endl;
	}
	
	
	return 0;
}




