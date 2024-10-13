#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string line;
	string palabralarga;
	int mayor = 0;
	
	while(getline(cin,line)){
		if(line == "0")break;
		
		int longitudPalabra = 0;
		bool primera = true;
		int x = line.length();
		
		for (int i = 0; i <= x ; i++) {
			if (i == x || line[i] == ' ') {
				
				if (longitudPalabra > 0) {
					if (!primera) cout << "-"; // Imprimir el guion si no es la primera palabra
					cout << longitudPalabra;   // Imprimir la longitud de la palabra
					primera = false;
					
					// Verificar si la palabra es la más larga
					if (longitudPalabra >= mayor) {
						mayor = longitudPalabra;
						palabralarga = line.substr(i - longitudPalabra, longitudPalabra);
					}
					
					longitudPalabra = 0;  // Reiniciar el contador de longitud para la próxima palabra
				}
			} else {
				
				longitudPalabra++;
			}
		}
		
		cout << endl;
	}
	cout << "The biggest word: " << palabralarga << endl;
	return 0;
}

