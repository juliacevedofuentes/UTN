#include <iostream>
#include <iomanip>

using namespace std;

const int DIM1=12;
const int DIM2=12;

void cargar_matriz(double m[][DIM2],int cf, int cc);
void sum(double m[][DIM2],int cf, int cc);
void media(double m[][DIM2],int cf, int cc);

int main(int argc, char *argv[]) {
	double matriz[DIM1][DIM2] = {};
	char O;
	
	cin >> O;
	
	cargar_matriz(matriz,DIM1,DIM2);
	
	if (O == 'S'){
		sum(matriz,DIM1,DIM2);
	} else if(O == 'M'){
		media(matriz,DIM1,DIM2);
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
	void sum(double m[][DIM2],int cf, int cc){
		int i,j;
		double suma = 0.0;
		for (i = 0; i < cf ; i++){
			for (j = 0; j < cc ; j++){
				if(j<i){
					suma += m[i][j];
				}
			}
		}
		cout << fixed << setprecision(1) << suma << endl;
	}
		void media(double m[][DIM2],int cf, int cc){
			int i,j,k=0;
			double suma = 0.0;
			for (i = 0; i < cf ; i++){
				for (j = 0; j < cc ; j++){
					if(j<i){
						suma += m[i][j];
						k++;
					}
				}
			}
			double medio = suma/k;
			cout << fixed << setprecision(1) << medio << endl;
		}
			
