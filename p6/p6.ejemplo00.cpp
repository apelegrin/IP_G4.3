#include <iostream>
#include <list>
using namespace std;

int main () {
	list<char> miLista;
	list<char>::iterator EA;
	miLista.clear();
	miLista.push_back('A');
	miLista.push_back('B');
	miLista.push_back('C');
	EA = miLista.begin();
	while (EA != miLista.end()){
		cout << *EA << endl;
		EA++;
	}
}






