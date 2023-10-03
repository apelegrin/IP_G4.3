#include <iostream>
using namespace std;
int main() {
	/*Léxico*/
	int ddEntrada, mmEntrada, aaEntrada;
	int ddSalida,  mmSalida,  aaSalida;
	int finMes;
	/*Código*/
	cout << "Introduce una fecha (dd mm aaaa) >";
	cin >> ddEntrada >> mmEntrada >> aaEntrada;
	if (mmEntrada == 2){
		finMes = 28;}
	else if ((mmEntrada == 4)||(mmEntrada == 6)||
			 (mmEntrada == 9)||(mmEntrada == 11)){
		finMes = 30;}
	else {
		finMes = 31;}
		
	if (ddEntrada < finMes)	{
		ddSalida = ddEntrada+1;
		mmSalida = mmEntrada;
		aaSalida = aaEntrada;
	}
	else if (mmEntrada==12){
		ddSalida = 1;
		mmSalida = 1;
		aaSalida = aaEntrada+1;
	}
	else{
		ddSalida = 1;
		mmSalida = mmEntrada+1;
		aaSalida = aaEntrada;
	}
	cout << "Fecha próxima >" << 
		ddSalida << " " << mmSalida << " " << aaSalida << endl;
	
}








