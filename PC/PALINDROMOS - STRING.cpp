#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void palindromo(string);
void minuscula(string& cad);
void eliminar_indeseado(string& cad);

int main(int argc, char *argv[]) {
	
	string palabra;
	getline(cin,palabra);
	
	palindromo(palabra);
	
	return 0;
}

void palindromo(string cad){
	
	minuscula(cad);
	eliminar_indeseado(cad);
	
	string cad2 = cad;
	
	reverse(cad2.begin(), cad2.end());
	
	cout << cad2 << cad << endl;
	
	if(cad2 == cad){
		cout << "La palabra/cadena ingresada es un palindromo." << endl;
	}else{
		cout << "La palabra/cadena ingresada no es un palindromo." << endl;
	}
}

void minuscula(string& cad){
	for(unsigned i = 0; i < cad.size(); i++){
		cad[i] = char(tolower(cad[i]));
	}
}

void eliminar_indeseado(string& cad){
	cad.erase(remove(cad.begin(), cad.end(), ' '), cad.end());
	cad.erase(remove(cad.begin(), cad.end(), '.'), cad.end());
	cad.erase(remove(cad.begin(), cad.end(), ','), cad.end());
    cad.erase(remove(cad.begin(), cad.end(), ';'), cad.end());
}
