#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#define tr 20

void generar_vec(int v[], int tl);
bool todos_distintos(int v[], int tl);

int main(int argc, char *argv[]) {
	int v[tr] = {};
	
	generar_vec(v,tr);
	
	bool x = todos_distintos(v,tr);
	cout << boolalpha << x << endl;
	return 0;
}
void generar_vec(int v[], int tl){
	srand((unsigned)time(NULL));
	for(int i = 0;i<tl;i++){
		v[i] = rand();
	}
}
bool todos_distintos(int v[], int tl){
	bool uhuh = true;
	for(int i = 0;i<tl;i++){
		for(int j = j;j<tl;j++){
			if(v[i] == v[j])uhuh = false;
		}
	}
	return uhuh;
}

