#include <iostream>
#include <string>
//Utilizando el Zinjai copia el siguiente programa en el editor. Luego, compílalo y ejecútalo.
//Observando el comportamiento resultante analizar: ¿Qué realiza el programa? ¿Cómo se estructura un programa en C++?
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



