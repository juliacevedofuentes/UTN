#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool fullsentence(string b);
bool almostfull(string b);
#define tl 27

int main(int argc, char *argv[]) {
	int n;
	
	cin >> n;
	cin >> ws;
	
	
	for(int i = 0; i<n; i++){
		string frase = {};
		getline(cin,frase);
		if(fullsentence(frase)== true){
			cout << "frase completa" << endl;
		}else if(almostfull(frase) == true){
			cout << "frase quase completa" <<endl;
		}else{
			cout << "frase mal elaborada" << endl;
		}
	}
	return 0;
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
void transformacion(string& cad){
	minuscula(cad);
	eliminar_indeseado(cad);
}
bool fullsentence(string b){
	bool a = true;
	transformacion(b);
	int i = 0;
	int contador = 0;
	
	int v[tl] = {};
	int m = b.length();
	while(i<m and contador <=26){
		int j = int(b[i])-97;
		v[j]++;
		if(v[j] == 1){
			contador++; 
		}
		i++;
	}
	
	if(contador !=26){
		a = false;
	}
	
	return a;
}
bool almostfull(string b){
	bool a = true;
	transformacion(b);
	int i = 0;
	int contador = 0;
	
	int v[tl] = {};
	
	int m = b.length();
	
	while(i<m and contador <=13){
		int j = int(b[i])-97;
		v[j]++;
		if(v[j] == 1){
			contador++; 
		}
		i++;
	}
	
	if(contador < 13){
		a = false;
	}
	return a;
}
