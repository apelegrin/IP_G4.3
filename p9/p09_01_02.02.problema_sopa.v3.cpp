#include <iostream>
#include <fstream>
#include <map>

using namespace std;

const int row = 6;
const int col = 8;

typedef char Matriz [row][col];

bool CargarFichero (Matriz &S, int &NF, int &NC, string nombre) {
	ifstream f;
	int i, j;
    bool op;
    
	f.open (nombre);
	if (!f){
		cout << "Error abriendo el fichero" << endl;
		 op = false;
	}
	else {
		f >> NF;
		f >> NC;
		for (i=0; i < NF; i++) {
			for (j=0; j < NC; j++) {
				f >> S[i][j];
			}
		}
		op = true;
	}
	f.close();
	return op;
}

void MostrarTabla(Matriz t, int nf, int nc){
	int i, j;
	//imprime encabezado
	cout << "  ";
	for (j = 0; j < nc; ++j) {
		cout << j << " ";
	}
	cout << endl;
	cout << "  ";
	for (j = 0; j < nc; ++j) {
		cout << "--";
	}
	cout << endl;
	//Imprime datos
	for (i = 0; i < nf; ++i) {
		cout << i << "|";
		for (j = 0; j < nc; ++j) {
			cout << t[i][j] << " ";
		}
		cout << endl;
	}
}

/* Busca en Horizontal hacia la derecha */
void buscarHorizontalForward(Matriz sopa,string palabra,int i,int j,int nf,int nc){
	int len = palabra.length()-1;
	string palabraTmp = "";
	for(int k=0; k<=len; k++){
        if (j+k < nc){
			palabraTmp+=sopa[i][j+k];
		}
    }
    if(palabraTmp==palabra){
      cout<<"Esta en la posicion ["<<i<<","<<j<<"] "<<endl;
      cout<<"Esta en la posicion ["<<i<<","<<j+len<<"] hacia derecha"<<endl;
    }
}

/* Busca en Horizontal hacia la izquierda */
void buscarHorizontalReverse(Matriz sopa,string palabra,int i,int j,int nf,int nc){
	int len = palabra.length()-1;
	string palabraTmp = "";
	for(int k=0; k<=len; k++){
        if (j-k >= 0){
			palabraTmp+=sopa[i][j-k];
		}
    }
    if(palabraTmp==palabra){
      cout<<"Esta en la posicion ["<<i<<","<<j<<"] "<<endl;
      cout<<"Esta en la posicion ["<<i<<","<<j-len<<"] hacia izquierda"<<endl;
    }
}

/* Busca en Vertical hacia la abajo */
void buscarVerticalForward(Matriz sopa,string palabra,int i,int j,int nf,int nc){
	int len = palabra.length()-1;
	string palabraTmp = "";
	for(int k=0; k<=len; k++){
        if (i+k < nf){
			palabraTmp+=sopa[i+k][j];
		}
    }
    if(palabraTmp==palabra){
      cout<<"Esta en la posicion ["<<i<<","<<j<<"] "<<endl;
      cout<<"Esta en la posicion ["<<i+len<<","<<j<<"] hacia abajo"<<endl;
    }
}

/* Busca en Vertical hacia la arriba */
void buscarVerticalReverse(Matriz sopa,string palabra,int i,int j,int nf,int nc){
	int len = palabra.length()-1;
	string palabraTmp = "";
	for(int k=0; k<=len; k++){
        if (i-k >= 0){
			palabraTmp+=sopa[i-k][j];
		}
    }
    if(palabraTmp==palabra){
      cout<<"Esta en la posicion ["<<i<<","<<j<<"] "<<endl;
      cout<<"Esta en la posicion ["<<i-len<<","<<j<<"] hacia arriba"<<endl;
    }
}

/* Busca en diagonal hacia abajo */
void buscarVerticalForwardDiagonal(Matriz sopa,string palabra,int i,int j,int nf,int nc){
	int len = palabra.length()-1;
	string palabraTmp = "";
	for(int k=0; k<=len; k++){
        if ((i+k < nf) && (j+k < nc )){
			palabraTmp+=sopa[i+k][j+k];
		}
    }
    if(palabraTmp==palabra){
      cout<<"Esta en la posicion ["<<i<<","<<j<<"] "<<endl;
      cout<<"Esta en la posicion ["<<i+len<<","<<j+len<<"] en diagonal hacia abajo"<<endl;
    }
}

/* Busca en diagonal hacia arriba */
void buscarVerticalReverseDiagonal(Matriz sopa,string palabra,int i,int j,int nf,int nc){
	int len = palabra.length()-1;
	string palabraTmp = "";
	for(int k=0; k<=len; k++){
        if ((i-k >= 0) && (j-k >= 0)){
			palabraTmp+=sopa[i-k][j-k];
		}
    }
    if(palabraTmp==palabra){
      cout<<"Esta en la posicion ["<<i<<","<<j<<"] "<<endl;
      cout<<"Esta en la posicion ["<<i-len<<","<<j-len<<"] en diagonal hacia arriba"<<endl;
    }
}

int main() {
	Matriz sopa;
	string palabra;
	int nf,nc;
	palabra = "";
	if ( CargarFichero(sopa,nf,nc,"sopa.txt")){
		while (palabra != "q"){
			MostrarTabla(sopa,nf,nc);
			cout << "Introduce la palabra a buscar ";
			cin >> palabra;
			for (int i=0;i<nf;i++){
				for (int j=0;j<nc;j++){
					buscarHorizontalForward(sopa,palabra,i,j,nf,nc);
					buscarHorizontalReverse(sopa,palabra,i,j,nf,nc);
					buscarVerticalForward(sopa,palabra,i,j,nf,nc);
					buscarVerticalReverse(sopa,palabra,i,j,nf,nc);
					buscarVerticalForwardDiagonal(sopa,palabra,i,j,nf,nc);
					buscarVerticalReverseDiagonal(sopa,palabra,i,j,nf,nc);
				}
			}
			
		}
	}
	return 0;
}
