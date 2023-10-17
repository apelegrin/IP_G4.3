#include <iostream>
using namespace std;



int main () {
	int n, an, m;
	int ant1,ant2,ant3;
	ant1 = 0;
	ant2 = 0;
	ant3 = 0;
	n = 0;
	cout << "Introduce un valor de m > ";
	cin >> m;
	do{
		switch (n){
			case 0: an=1; break;
			case 1: an=2; break;
			case 2: an=3; break;
			default:
				an = 3*ant1 - 2*ant3;
		}
		cout << "a(" << n << ")=" << an << endl;
		ant3 = ant2;
		ant2 = ant1;
		ant1 = an;
		n++;
	} while (!(an > m));
	
}






