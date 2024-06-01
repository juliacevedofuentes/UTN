#include <iostream>
using namespace std;
//Escribe un programa que solicite al usuario una temperatura en Celsius y luego convierta la temperatura a Fahrenheit utilizando la fórmula F = C * 1,8 + 32. Mostrar la temperaturaen Celsius y Fahrenheit.
int main(int argc, char *argv[]) {
	float c, f;
	cin >> c;
	f = c * 1.8 + 32;
	cout << "La temperatura en C° es de " << c << " grados, siendo esto igual a " << f << " grados Farenheit." << endl;
	return 0;
}

