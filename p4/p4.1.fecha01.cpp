#include <iostream>
using namespace std;
struct Fecha {
	int dd;
	int mm;
	int aa;
};

int main() {
	/*Léxico*/
	Fecha fEnt, fSal;
	int finMes;
	/*Código*/
	cout << "Introduce una fecha (dd mm aaaa) >";
	cin >> fEnt.dd >> fEnt.mm >> fEnt.aa
	;
	if (fEnt.mm == 2){
		finMes = 28;}
	else if ((fEnt.mm == 4)||(fEnt.mm == 6)||
			 (fEnt.mm == 9)||(fEnt.mm == 11)){
		finMes = 30;}
	else {
		finMes = 31;}
		
	if (fEnt.dd < finMes)	{
		fSal.dd = fEnt.dd+1;
		fSal.mm = fEnt.mm;
		fSal.aa = fEnt.aa;
	}
	else if (fEnt.mm==12){
		fSal.dd = 1;
		fSal.mm = 1;
		fSal.aa = fEnt.aa+1;
	}
	else{
		fSal.dd = 1;
		fSal.mm = fEnt.mm+1;
		fSal.aa = fEnt.aa;
	}
	cout << "Fecha próxima >" << 
		fSal.dd << " " << fSal.mm << " " << fSal.aa << endl;
	
}








