#include <iostream>
using namespace std;

	int main () {
	int nro1cod;
	int nro2cod;
	int nro3cod;
	int cambio;
	
	cout << "Ingrese el c�digo de desactivaci�n de la bomba:" << endl;
	cin >> nro1cod >> nro2cod >> nro3cod ;
	
	cambio = nro1cod % 10 + nro1cod;
	nro1cod = nro3cod % 10 + nro3cod;
	nro2cod = nro2cod % 10 + nro2cod;
	nro3cod = cambio;
	
	cout << "El c�digo de desactivaci�n real es " << nro1cod << "-" << nro2cod << "-" << nro3cod << endl;
		
	return 0;
	
	}

