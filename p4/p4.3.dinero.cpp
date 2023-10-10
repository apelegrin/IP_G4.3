#include <iostream>
using namespace std;
/* divisionEntera (dato dividendo : Entero,
 *				   dato divisor : Entero,
 *			       dato_resultado cociente : Entero,
 *         		   dato_resultado resto : Entero): acción calcula la div entera
 * 
 * PRE  { dividendo : Entero, divisor : Entero, divisor > 0}
 * POST { cociente  : Entero, valor de la división entera
 *        resto     : Entero, valor del resto de la división}
 */

void divisionEntera(int dividendo, int divisor, 
				    int &cociente, int &resto){
	cociente = dividendo / divisor;
	resto = dividendo % divisor;
}

int main() {
    int cantidad, resto;
    int quinientos, cien, cincuenta, veinte, diez, cinco;
    cout << "Introduce la cantidad > ";
    cin >> cantidad;
    
    divisionEntera(cantidad,500,quinientos,resto);
    divisionEntera(resto,100,cien,resto);
    divisionEntera(resto,50,cincuenta,resto);
    divisionEntera(resto,20,veinte,resto);
    divisionEntera(resto,10,diez,resto);
    divisionEntera(resto,5,cinco,resto);
    
    cout << quinientos << " Billetes de 500€" << endl;
    cout << cien 	   << " Billetes de 100€" << endl;
    cout << cincuenta  << " Billetes de 50€" << endl;
    cout << veinte 	   << " Billetes de 20€" << endl;
    cout << diez 	   << " Billetes de 10€" << endl;
    cout << cinco 	   << " Billetes de 5€" << endl;
    cout << resto 	   << " € en monedas" << endl;
	return 0;
}
