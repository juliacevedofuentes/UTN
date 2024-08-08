#include <iostream>
#include <iomanip>
using namespace std;

#define tam 100

void enter_data(float V[], int size);
void print_lesser_ten(float V[], int size);

int main(int argc, char *argv[]) {
	float A[tam] = {};
	
	enter_data(A, tam);
	print_lesser_ten(A, tam);
	
	return 0;
}

void enter_data(float V[], int size){
	for(int i = 0; i < size; i++){
		cin >> V[i];
	}
}
void print_lesser_ten(float V[], int size){
	for(int i = 0; i < size; i++){
		if(V[i]<= 10){
			cout << fixed << setprecision(1);
			cout << "A[" << i << "] = " << V[i] << endl;
		}
	}
}

