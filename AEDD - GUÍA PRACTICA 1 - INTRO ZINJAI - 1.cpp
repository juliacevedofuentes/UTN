#include <iostream>
#include <string>
using namespace std;
int main() {
	string nombre;
	int edad;
	cout << "¿Cómo te llamas? ";
	cin >> nombre;
	cout << "¿Cuántos años tienes? ";
	cin >> edad;
	cout << "¡Hola, " << nombre << "! Tienes " << edad << " años." <<
		endl;
	return 0;
}


