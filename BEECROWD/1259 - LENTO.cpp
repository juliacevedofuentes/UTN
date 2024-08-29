#include <iostream>
using namespace std;

#define tr 100000

void cargar_vector(int v[], int tl);
void par_impar(int v[], int tl);
void orden_ascedente(int par[], int tl);
void orden_descendente(int impar[], int tl);
void unir(int v[],int tl, int par[],int impar[], int cantpar);
void imprimir_vector(int v[], int tl);


int main(){
	
	int N;
	int V[tr]={};
	
	
	cin >> N;
	
	
	cargar_vector(V, N);
	par_impar(V, N);
	imprimir_vector(V, N);
	
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
	unir(v,tl, par,impar,j);
}
void orden_ascedente(int par[], int tl){
	int i,j=0;
	for(i=1;i<tl;i++){
		j=i;
		while(j>0 and (par[j] < par[j-1])){
			int aux = par[j];
			par[j] = par[j-1];
			par[j-1] = aux;
			j = j-1;
		}
	}
}
void orden_descendente(int impar[], int tl){
	int i,j=0;
	for(i=1;i<tl;i++){
		j=i;
		while(j>0 and impar[j] > impar[j-1]){
			int aux = impar[j];
			impar[j] = impar[j-1];
			impar[j-1] = aux;
			j = j-1;
		}
	}
}
void unir(int v[], int tl, int par[], int impar[], int cantpar) {
	int j = 0; 
	int k = 0; 
		
	for(int i = 0; i < cantpar; i++) {
		v[i] = par[j];
		j++;
	}

	for(int i = cantpar; i < tl; i++) {
		v[i] = impar[k];
		k++;
	}
	
}
void imprimir_vector(int v[], int tl){
	for( int i = 0; i< tl ; i++){
		cout << v[i] << endl;
	}
}
