#include <iostream>
#include <typeinfo>
using namespace std;
//Tipo de datos y tamaño
int main(int argc, char *argv[]) {
	bool x = true;
	char n = 68.00;
	short j = 446.00;
	int k = 5555.00;
	long g = 22222222222.00;
	float e = 10.55555;
	double y = 10.55555;
	
	cout << "Datos/n" << endl;
	cout << x << endl;
	cout << n << endl;
	cout << j << endl;
	cout << k << endl;
	cout << g << endl;
	cout << e << endl;
	cout << y << endl;
	
	cout << "Tamaño/n" << endl;
	cout << sizeof(x) << endl;
	cout << sizeof(n) << endl;
	cout << sizeof(j) << endl;
	cout << sizeof(k) << endl;
	cout << sizeof(g) << endl;
	cout << sizeof(e) << endl;
	cout << sizeof(y) << endl;
	
	return 0;
}

