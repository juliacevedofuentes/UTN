#include <iostream>

using namespace std;

#define tam 1000

void generate_data(int V[], int size, int num);
void print_data(int V[], int size);

int main(int argc, char *argv[]) {
	int N[tam] = {};
	int T;
	
	cin >> T;
	
	generate_data(N, tam, T);
	print_data(N, tam);
	
	return 0;
}

void generate_data(int V[], int size, int num){
	int z = 0;
	for(int i = 0; i < size; i++){
		V[i] = z;
		z++;
		if(z == num) z = 0;
	}
}
	
void print_data(int V[], int size){
	for(int i = 0; i < size; i++){
		cout << "N[" << i << "] = " << V[i] << endl;
	}
}


