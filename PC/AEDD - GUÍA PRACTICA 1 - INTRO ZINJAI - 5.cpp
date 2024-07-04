#include <iostream>
using namespace std;
//¡Prepárate para una emocionante misión de programación que desafiará tus habilidades!
//Te enfrentas a una bomba del destino final, y la única manera de desactivarla es descifrar
//una secuencia de tres números de dos dígitos. Pero aquí viene lo interesante: debes
//mostrar los números en orden inverso, decodificando cada uno sumándole su último
//dígito, y separarlos con un guión medio.
int main(int argc, char *argv[]) {
	int a,b,c,x;
	cout << "Ingrese los números de la bomba:" << endl;
	cin >> a >> b >> c;
	a = a+(a%10);
	b = b+(b%10);
	c = c+(c%10);
	x = a;
	a = c;
	c = x ;
	cout << "El código de desactivación es: " << a <<"-"<< b << "-"<<c<<endl;
	
	return 0;
}

