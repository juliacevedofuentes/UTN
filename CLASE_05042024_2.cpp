#include <iostream>

using namespace std;


int main() {
	double pi = 3.14159265358979323846;
	float RADIO;
	cout << "Ingrese radio de la esfera:" << endl;
	cin >> RADIO ;
	float VOLE,ASE;
	VOLE = (4.0/3)*RADIO*RADIO*RADIO*pi;// EL.0 es importante xq c++ divide dos enteros y eso da otro entero, el .0 hace que el resultado sea tomado como un no entero
	ASE = 4*pi*RADIO*RADIO;
	cout << "El volumen de la esfera es : " << VOLE << endl;
	cout << "El area superficial de la esfera es : " << ASE << endl;
	return 0;
}

