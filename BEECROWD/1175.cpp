#include <iostream>

using namespace std;

#define tam 20

void enter_data(int V[], int size);
void opos_order(int V[], int size);
void print_data(int V[], int size);

int main(int argc, char *argv[]) {
	int N[tam] = {};
	
	enter_data(N, tam);
	opos_order(N, tam);
	print_data(N, tam);
	
	return 0;
}

void enter_data(int V[], int size){
	for(int i = 0; i < size; i++){
		cin >> V[i];
	}
}
void opos_order(int V[], int size){
	int aux, i, j;
	for(i=0, j = size-1; i<10; i++, j--){
		aux = V[i];
		V[i] = V[j];
		V[j] = aux;
	}	
}
void print_data(int V[], int size){
	for(int i = 0; i < size; i++){
		cout << "N[" << i << "] = " << V[i] << endl;
	}
}
