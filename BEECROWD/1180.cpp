#include <iostream>

using namespace std;

#define tam 1000

void enter_data(int V[], int realsize);
void lowest(int V[], int realsize);

int main(int argc, char *argv[]) {
	int A[tam] = {};
	int N;
	
	cin >> N;
	
	enter_data(A, N);
	lowest(A, N);
	
	return 0;
}

void enter_data(int V[], int realsize){
	for(int i = 0; i < realsize; i++){
		cin >> V[i];
	}
}
	
void lowest(int V[], int realsize){
	int min = V[0];
	int pos;
	for(int i = 1; i < realsize; i++){
		if(min > V[i]){
			min = V[i];
			pos = i;
		}
	}
	cout << "Menor valor: " << min << endl;
	cout << "Posicao: " << pos << endl;
}
		
