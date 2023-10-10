#include <iostream>
#include <cmath>
using namespace std;

struct Punto {
		float abscisa, ordenada;
};

struct Triangulo{
	Punto p1, p2, p3;
};

/* Pre: x es un número Real */
/* Post: Devuelve el cuadrado de valor pasado como parámetro*/
float sqr (float x)
{
	return (x*x);
}

/* Pre: p1 y p2 son dos Puntos de un espacio euclídeo bidimensional */
/* Post: Devuelve la distancia entre los puntos p1 y p2 */
float distancia(Punto p1, Punto p2){
	/* cálculo de la longitud del segmento definido por los dos puntos */
	return sqrt ( sqr (p1.abscisa - p2.abscisa) +
			sqr (p1.ordenada - p2.ordenada));
}

void leerTriangulo(Triangulo &t){
	cout << "Introduce p1 (x y) ";
	cin >> t.p1.abscisa >> t.p1.ordenada;
	cout << "Introduce p2 (x y) ";
	cin >> t.p2.abscisa >> t.p2.ordenada;
	cout << "Introduce p3 (x y) ";
	cin >> t.p3.abscisa >> t.p3.ordenada;
}

float perimetro(Triangulo t){
	float l1,l2,l3;
	l1 = distancia(t.p1,t.p2);
	l2 = distancia(t.p2,t.p3);
	l3 = distancia(t.p1,t.p3);
	return l1+l2+l3;
}

int main() {
	
	Triangulo miTriangulo;
	leerTriangulo(miTriangulo);
	
	/* mostramos el resultado */
	cout << "El perímetro es : " << perimetro(miTriangulo) << endl;
	return 0;
}
