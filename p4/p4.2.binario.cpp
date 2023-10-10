#include <iostream>
using namespace std;
/* binDec (dato b4 : Entero,
 *		   dato b3 : Entero,
 *         dato b2 : Entero,
 *         dato b1 : Entero,
 *         dato_resultado dec : Entero): acción calcula el valor decimal de un binario
 * 
 * PRE  {b1,b2,b3,b4 :Entero con 0<= b1 <=1, 0<= b2 <=1,0<= b3 <=1,0<= b1 <=1}
 * POST {dec : Entero, valor en decimal del número binario definido por b4b3b2b1}
 */
  
void binDec (int b4, int b3, int b2, int b1, int &dec)
{
	dec = b1*1 + b2*2 + b3*4 + b4*8;
}

/*
 * intercambio (dato_resultado a: Carácter,
 * 				dato_resultado b: Carácter): acción que intercambia los valores de a y b
 * 
 * PRE  { a : carácter, b : carácter }
 * POST { a : carácter, con el valor del carácter de entrada b,
 *        b : carácter, con el valor del carácter de entrada a }
 */
 
void intercambio (char &a, char &b)
{
	char aux;
	aux = a;
	a = b;
	b = aux;
}

int main() {
	int b1, b2, decimal1, decimal2;
	char x, y, z;
	b1 = 0;
	b2 = 1;
	x = 'O';
	y = 'P';
	z = 'Q';
	intercambio (x, y); //x=O y=P z=Q -> x=P y=O z=Q
	intercambio (y, z); //x=P y=O z=Q -> x=P y=Q z=O
	binDec (b1, b2, b1, b2, decimal1); //0 1 0 1 -> 5
	binDec (0, 1, b1, b1, decimal2);   //0 1 0 0 -> 4
	cout << "Valor de las variables x, y, z es: " << x << y << z << endl;
	cout << "El valor del numero 1 es : " << decimal1 << endl;
	cout << "El valor del numero 2 es : " << decimal2 << endl;
	return 0;
}
