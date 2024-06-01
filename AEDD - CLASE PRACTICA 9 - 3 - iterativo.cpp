#include <iostream>
using namespace std;

void calculo(int);

int main(int argc, char *argv[]) {
	int p;
	cout << "Ingresé el número de provincias que quiere analizar:" << endl;
	cin >> p;
	calculo(p);
	
	return 0;
}

void calculo(int a){
	int suma = 0;
	for(int i=0; i<a;i++){
		int h,r;
		cout << "Ingresé el número de hectáreas que tiene la provincia " << i+1 << ":" << endl;
		cin >> h;
		cout << "Ingresé el rendimiento esperado por hectárea que tiene la provincia " << i+1 << ":" << endl;
		cin >> r;
		suma += h*r;
	}
	cout << "La producción total de maíz en estas provincias es de: " << suma << endl;
}

