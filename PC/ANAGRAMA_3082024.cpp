#include <iostream>
#include <string>

#include <algorithm>
using namespace std;

bool anagrama(string pal1,string pal2);
void transformacion(string& cad);
void minuscula(string& cad);
void eliminar_indeseado(string& cad);

int main(int argc, char *argv[]) {
	string palabra1 , palabra2;
	
	getline(cin,palabra1);
	getline(cin,palabra2);
	
	cout << boolalpha << anagrama(palabra1,palabra2) << endl;
	
	
	return 0;
}

bool anagrama(string pal1,string pal2){
	transformacion(pal1);
	transformacion(pal2);
	
	if (pal1.size() != pal2.size()) {
		return false;
	}
	sort(pal1.begin(), pal1.end());
	sort(pal2.begin(), pal2.end());
	
	return pal1 == pal2;
}
	
void transformacion(string& cad){
	minuscula(cad);
	eliminar_indeseado(cad);
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
