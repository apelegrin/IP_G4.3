#include <iostream>
using namespace std;

int main()
{
	const int FDS=-100;
	int EA;  // Elemento actual
	cout << "Introduce una secuencia -100 para fin > ";
	cin >> EA; //Comenzar
	while ( (EA != FDS) && ((EA % 2) != 0) ){
		//Tratamiento EA
		cout << EA << ", ";
		//Avanzar
		cin >> EA;
	}
	cout << endl;
	return 0;
}
