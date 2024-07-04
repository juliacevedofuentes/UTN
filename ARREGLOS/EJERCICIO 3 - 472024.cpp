#include <iostream>
using namespace std;

#define tamano 10
void cargar_vector(int V[],int tam);
void imprimir_vector(int V[],int tam);
int maximo_valor(int V[],int tam,int & posic);

int main(int argc, char *argv[]) {
	int A[tamano]={};
	int posicion_max = 0;
	int val_max;
	
	cout << "Ingrese 10 números: " << endl;
	
	cargar_vector(A,tamano);
	imprimir_vector(A,tamano);
	val_max = maximo_valor(A,tamano,posicion_max);
	
	cout <<"El máximo valor ingresado es: " << val_max << ", y está en la posición " << posicion_max << endl;

	return 0;
}

void cargar_vector(int V[],int tam){
	for(int i = 0;i<tam;i++){
		cin >> V[i];
	}
}
void imprimir_vector(int V[],int tam){
	for(int i = 0;i<tam;i++){
		cout << V[i] << endl;
	}
}
	
int maximo_valor(int V[],int tam, int & posic){
	int val_max;
	for(int i = 0;i<tam;i++){
		
		if(i == 0){
			val_max=V[i];
			posic = i + 1;
		}
		
		if(V[i]>val_max){
			val_max=V[i];
			posic = i+ 1 ;
		}
	}
	return val_max;
}
