#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//Escribe un programa que solicite al usuario que ingrese dos números, y luego muestre la suma, la diferencia, el producto y el cociente de los dos números.
	int a,b;
	cout << "Por favor ingrese dos números" << endl;
	cin >> a >> b;
	cout << a+b << endl;
	cout << a-b << endl;
	cout << a*b << endl;
	cout << a/b << endl;
	
	return 0;
}

