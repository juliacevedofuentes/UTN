#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define tr 6

void generar_vec(int v[], int tl);
bool ganador(int g[],int v[], int tl);

int main(int argc, char *argv[]) {
	
	int v[tr] = {};
	int g[tr] = {};
	
	int num;
	
	cin >> num;
	
	generar_vec(v,tr);
	for(int i = 0; i<tr; i++){
		cout << v[i] << " " ;
	}
	cout << endl;
	generar_vec(g,tr);
	for(int i = 0; i<tr; i++){
		cout << g[i] << " " ;
	}
	cout << endl;
	
	if(ganador(g,v,tr) == true)cout << num << endl;
	
	return 0;
}
void generar_vec(int v[], int tl){
	srand((unsigned)time(NULL));
	for(int i = 0;i<tl;i++){
		v[i] = rand()%45;
	}
}
void ordenar(int v[],int tl){
	for (int i = 1; i < tl; ++i) {
		int key = v[i];
		int j = i - 1;
		
		while (j >= 0 && v[j] > key) {
			v[j + 1] = v[j];
			j = j - 1;
		}
		v[j + 1] = key;
	}
}
bool ganador(int g[],int v[], int tl){
	bool x = true;
	ordenar(v,tl);
	ordenar(g,tl);
	for(int i = 0; i < tl; i++){
		if(g[i] != v[i]) x = false;
	}
	return x;
}
