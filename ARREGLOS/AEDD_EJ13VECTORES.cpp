#include <iostream>
#include <ctime>
using namespace std;

#define tr 20

void generar_vec(int v[], int tl);
void rotar_izquierda(int v[], int tl);

int main(int argc, char *argv[]) {
	
	int v[tr] = {};
	
	generar_vec(v,tr);
	
	for(int i = 0; i<tr; i++){
		cout << v[i] << " " ;
	}
	cout << endl;
	
	rotar_izquierda(v,tr);
	
	for(int i = 0; i<tr; i++){
		cout << v[i] << " " ;
	}
	cout << endl;
	
	return 0;
}
void generar_vec(int v[], int tl){
	srand((unsigned)time(NULL));
	for(int i = 0;i<tl;i++){
		v[i] = rand()%20;
	}
}
void rotar_izquierda(int v[], int tl){
	int x,y;
	y = v[0];
	for(int i = 1; i <tl ; i++){
		v[i-1] = v[i];
	}
	v[tl-1] = y;
}
