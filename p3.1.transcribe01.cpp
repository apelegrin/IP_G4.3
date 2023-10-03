#include <iostream>
using namespace std;
int main() {
	/*Léxico*/
	int n1, n2;
	/*Código*/
	cout << "Dame 2 números n1 n2 >";
	cin >> n1 >> n2;
	if (n1 > n2){
		cout << "EL máximo es " << n1;}
	else if (n1 != n2){
		cout << "EL máximo es " << n2;}
	else {
		cout << n1 << " es igual que " << n2;}
	cout << endl;
}








