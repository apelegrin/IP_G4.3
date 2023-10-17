#include <iostream>
using namespace std;
int main () {
	int x, y, i, p;
	cout << "introduce x y para [2^x,2^y] ";
	cin >> x >> y;
	p = 1;
	for (i = 1; i <= x; i++) {
		p = p*2;
	}
	cout << "2^" << x << "=" << p << endl;
	for (i = x+1; i <= y; i++) {
		p = p*2;
		cout << "2^" << i << "=" << p << endl;
	}
	return 0;
}





