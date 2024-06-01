#include <iostream>
using namespace std;

int calculo(int);

int main(int argc, char *argv[]) {
	int p;
	cout << "Ingresé el número de provincias que quiere analizar:" << endl;
	cin >> p;
	cout << "La producción total de maíz en estas provincias es de: " << calculo(p) << endl;
	
	return 0;
}

int calculo(int a){
	int suma = 0;
	if(a == 0){
		return 0;
	} else {
		int h,r;
		cout << "Ingresé el número de hectáreas que tiene la provincia:" << endl;
		cin >> h;
		cout << "Ingresé el rendimiento esperado por hectárea que tiene la provincia:" << endl;
		cin >> r;
		return h*r + calculo(a-1);
	}
}
