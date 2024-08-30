#include <iostream>
#include <cstdlib>

using namespace std;

#define tm 1000

void cargar_ordenllegada(int v[], int tl);
void duplicar_v(int v[],int v1[], int tl);
void contar_posiciones(int v[],int v1[], int tl,int& c);

void quickSortdes(int v[], int inicio, int final);
int divisiondes(int v[], int ini, int fin);

int main(int argc, char *argv[]) {
	
	int n,m;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		int v[tm] = {};
		int vor[tm] = {};
		cin >> m;
	
		
		int c = 0;
		
		cargar_ordenllegada(v,m);
		duplicar_v(vor,v,m);
		quickSortdes(v,0,m-1);
		contar_posiciones(vor,v,m,c);
		
		cout << c << endl;
		
	}
	
	return 0;
}

void cargar_ordenllegada(int v[], int tl){
	for(int i = 0; i < tl; i++){
		cin >> v[i];
	}
}
void duplicar_v(int v[],int v1[], int tl){
	for(int i = 0; i < tl; i++){
		v[i] = v1[i];
	}
}

void contar_posiciones(int v[],int v1[], int tl,int& c){
	for(int i = 0; i < tl; i++){
		if( v[i] == v1[i]) c++;
	}
}
	
	void quickSortdes(int v[], int inicio, int final) {
		if (inicio < final) {
			int pi = divisiondes(v, inicio, final);  
			quickSortdes(v, inicio, pi - 1); 
			quickSortdes(v, pi + 1, final);
		}
	}
	int divisiondes(int v[], int ini, int fin) {
		int pivot = v[fin];  
		int i = (ini - 1);  
		
		for (int j = ini; j <= fin - 1; j++) {
			
			if (v[j] >= pivot) {
				i++;  
				swap(v[i], v[j]);
			}
		}
		swap(v[i + 1], v[fin]);
		return (i + 1);
	}
