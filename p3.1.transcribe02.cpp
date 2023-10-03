#include <iostream>
using namespace std;
int main() {
	/*Léxico*/
	int nota;
	/*Código*/
	cout << "Introduce la nota >";
	cin >> nota;
	if (nota == 20){
		cout << "M. De Honor";}
	else if ((nota == 19) || (nota == 18)){
		cout << "Sobresaliente";}
	else if ((nota == 17) || (nota == 16)){	
		cout << "Notable";}
	else if ((nota == 15) || (nota == 14)){	
		cout << "Aprobado";}	
	else{ /*Cualquier otro caso*/
		cout << "Suspenso";}	
	cout << endl;
}








