#include <iostream>
using namespace std;

#define tr 100000

void cargar_vector(int v[], int tl);
void par_impar(int v[], int tl);

void quickSortdes(int v[], int inicio, int final);
int divisiondes(int v[], int ini, int fin);
void quickSortas(int v[], int inicio, int final);
int divisionas(int v[], int ini, int fin);
	
void orden_ascedente(int par[], int tl);
void orden_descendente(int impar[], int tl);
void imprimir_vector(int v[], int tl);


int main(){
	
	int N;
	int V[tr]={};
	
	
	cin >> N;
	
	
	cargar_vector(V, N);
	par_impar(V, N);
	
	return 0;
}

void cargar_vector(int v[], int tl){
	for(int i = 0; i<tl;i++){
		cin >> v[i];
	}
}
void par_impar(int v[], int tl){
	int par[tr]={};
	int impar[tr]={};
	int j = 0;
	int k = 0;
	for(int i = 0; i<tl;i++){
		if(v[i]%2 == 0){
			par[j]=v[i];
			j++;
		}else{
			impar[k]=v[i];
			k++;
		}
	}
	orden_ascedente(par, j);
	orden_descendente(impar, k);
	
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
void quickSortas(int v[], int inicio, int final) {
	if (inicio < final) {
		int pi = divisionas(v, inicio, final);  
		quickSortas(v, inicio, pi - 1);  
		quickSortas(v, pi + 1, final);
	}
}
int divisionas(int v[], int ini, int fin) {
	int pivot = v[fin];  
	int i = (ini - 1);  
	
	for (int j = ini; j <= fin - 1; j++) {
		if (v[j] < pivot) {
			i++;  
			swap(v[i], v[j]);
		}
	}
	swap(v[i + 1], v[fin]);
	return (i + 1);
}


void orden_ascedente(int par[], int tl){
	quickSortas(par, 0, tl-1);
	imprimir_vector(par, tl);
}
void orden_descendente(int impar[], int tl){
	quickSortdes(impar, 0, tl-1);
	imprimir_vector(impar, tl);
}

void imprimir_vector(int v[], int tl){
	for( int i = 0; i< tl ; i++){
		cout << v[i] << endl;
	}
}
