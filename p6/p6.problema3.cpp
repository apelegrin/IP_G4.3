#include <iostream>
using namespace std;
int main()
{
	const int FDS=-1;
	int EA;  // Elemento actual
	int ant, conta; // elemento anterior

	// Tercer esquema de recorrido del primer modelo de acceso secuencial
	cout <<"Introduce una serie de enteros >= 0 -1 para terminar"<<endl;
	cin >> EA; //Comenzar
	if (EA == FDS) {
		//Tratamiento de la secuencia vacía
		cout << "La secuencia está vacía" << endl;
	}
	else {
	    //Tratamiento del primer elemento
	    ant = EA;
	    conta = 1;
	    do {              			//ITERAR
	       //Avanzar
	       cin >> EA;
	       if (EA == FDS) {break;}  //DETENER FDS
	       //Tratamiento EA
	       cout << EA + ant << ", ";
	       ant = EA;
	       conta = conta + 1;
	    } while (true);  			//FIN_ITERAR
	}
	//Terminación del tratamiento
	if (conta == 1){
		cout << "La secuencia está vacía" << endl;
	}
	return 0;
}
