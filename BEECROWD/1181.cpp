#include <iostream>
#include <iomanip>

using namespace std;

const int DIM1=12;
const int DIM2=12;

void cargar_matriz(double m[][DIM2],int cf, int cc);
void sum(double m[][DIM2],int cc, int f);
void media(double m[][DIM2],int cc, int f);

int main(int argc, char *argv[]) {
	double matriz[DIM1][DIM2] = {};
	int L;
	char T;
	
	cin >> L >> T;
	
	cargar_matriz(matriz,DIM1,DIM2);
	
	if (T == 'S'){
		sum(matriz,DIM2,L);
	} else if(T == 'M'){
		media(matriz,DIM2,L);
	}
	return 0;
}

void cargar_matriz(double m[][DIM2],int cf,int cc){
	int i,j;
	for (i =0; i < cf; i++){
		for ( j=0 ; j < cc ; j++){
			cin >> m [i][j];
		}
	}
}
void sum(double m[][DIM2],int cc, int f){
	int j;
	double suma = 0.0;
	for (j = 0; j < cc ; j++){
		suma += m[f][j];
	}
	cout << fixed << setprecision(1) << suma << endl;
}
void media(double m[][DIM2],int cc, int f){
	int j;
	double suma = 0.0;
	for (j = 0; j < cc ; j++){
		suma += m[f][j];
	}
	double medio = suma/cc;
	cout << fixed << setprecision(1) << medio << endl;
}