#include <iostream>
using namespace std;

void identificaChar(char c,int &blancos){
	cout << "[" << c << "] ";
	if ((c >= 'a') && (c <= 'z')) {
		cout << "Es una minúscula" << endl; }
	else if ((c >= 'A') && (c <= 'Z')) {
		cout << "Es una mayúscula" << endl; }
	else if ((c >= '0') && (c <= '9')) {
		cout << "Es un digito" << endl; }
	else if (c == ' ') {
		cout << "Es un blanco" << endl; blancos++; }	
	else if ((c == ',') || (c == '.') || (c == ':') ||
	    (c == ';')|| (c == '(')|| (c == ')'|| (c == '\''))) {
		cout << "Es un signo de puntuación" << endl; }
	else {
	cout << "Carácter desconocido" << endl; }
}

int main () {
	int cont; // contador de blancos
	char c; // carácter actual
	cont = 0;
	cout << "Introduce una frase ";
	cin.get(c);
	while (c != '\n') // fin de línea de la entrada de datos
	{
		identificaChar(c,cont);
		cin.get(c);
	};
	cout << "El número de blancos es: " << cont << endl;
}
