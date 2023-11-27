#include <iostream>
using namespace std;
int main()
{
	const int FDS='#';
	char EA;
	char c;
	int x;
	int ocuCar;
	
	// Esquema de búsqueda del primer modelo de acceso secuencial
	cout <<"Introduce (veces,caracter) y frase para fin # " << endl;
	cin >> x >> c;
	cout << "Leo x:"<<x<<" c:["<<c<<"]"<<endl;
	cin.get(EA); //Comenzar
	ocuCar = 0;
	while ((EA != FDS) && (ocuCar < x)){		//MIENTRAS NO FDS
		if (EA == c){
			ocuCar = ocuCar + 1;
		}
		cin.get(EA); //Avanzar
	}
	//Terminación del tratamiento
	if (EA == FDS){
		//Tratamiento EA encontrado
		cout << "NO " << endl;
	}else{
		//Tratamiento EA encontrado
		cout << "SI" << endl;
	}
	
	
	return 0;
}




