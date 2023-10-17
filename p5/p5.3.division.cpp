#include <iostream>
using namespace std;

void divisionEntera(int dividendo, int divisor,
                    int &cociente, int &resto){
	resto = dividendo;
	cociente = 0;
	while (resto >= divisor){
		cociente++;
		resto = resto - divisor;
	}
}

int main () {
	int dividendo, divisor, cociente, resto;
	int prueba;
	
	cout << "Introduce dividendo divisor > ";
	cin >> dividendo >> divisor;
	divisionEntera(dividendo,divisor,cociente,resto);
	cout << dividendo << "/" << divisor << "=" <<
	     cociente << " resto=" << resto << endl;
	prueba = divisor * cociente + resto;
	cout << dividendo << "=" << prueba << endl;
}






