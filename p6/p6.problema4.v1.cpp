#include <iostream>
using namespace std;
bool esPar(int n){
   if ( (n % 2) == 0 ){
	   return true;
   } else {
	   return false;
   }
}

int main()
{
	const int FDS=-100;
	int EA;  // Elemento actual
	cout << "Introduce una secuencia -100 para fin > ";
	cin >> EA; //Comenzar
	while ( (EA != FDS) && (!esPar(EA)) ){
		//Tratamiento EA
		cout << EA << ", ";
		//Avanzar
		cin >> EA;
	}
	cout << endl;
	return 0;
}
