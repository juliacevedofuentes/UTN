#include <iostream>
using namespace std;

int main4 (){
	int cantmujeres;
	int canthombres;
	
	cout << "Ingrese cantidad de mujeres:" << endl;
	cin >> cantmujeres;
	cout << "Ingrese cantidad de hombres:" << endl;
	cin >> canthombres;
	
	int total;
	total = canthombres + cantmujeres;
	int permujeres;
	int perhombres;
	permujeres = cantmujeres * 100 / total ;
	perhombres = canthombres * 100 / total ;
	
	cout << "En la comisión hay un " << permujeres << "% de mujeres y un " << perhombres << "% de hombres." << endl;
	return 0;
	
}
int main3 (){
	int nroA;
	int nroB;
	
	cout << "Ingrese número A:" << endl;
	cin >> nroA;
	cout << "Ingrese número B:" << endl;
	cin >> nroB;
	cout << "Intercambiando los números A y B!" << endl;
	cout << "a: " << nroB << endl;
	cout << "b: " << nroA << endl;
	
	return 0;
}
	
int main2 (){
		int nroA;
		int nroB;
		int CHANGE;
		//este método es el correcto xq intercambia a y b, main 3 solo los muestra cambiados, no los intercambia.
		cout << "Ingrese número A:" << endl;
		cin >> nroA;
		cout << "Ingrese número B:" << endl;
		cin >> nroB;
		CHANGE = nroA ;
		nroA = nroB ;
		nroB = CHANGE;
		cout << "Intercambiamos los números A y B!" << endl;
		cout << "a: " << nroA << endl;
		cout << "b: " << nroB << endl;
		
		return 0;
	}
