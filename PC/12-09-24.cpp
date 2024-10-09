#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

bool duplaProblematica(string, string, int &);
int sumaDigitos(string);
void muestraPatentes();

int main() {
	int suma=0;
	bool veracidad=duplaProblematica("ABC1111", "ABC1111", suma);
	
	cout << boolalpha << veracidad << endl;
	cout << suma << endl;
	muestraPatentes();
	
	return 0;
}

/*string generaPatenteAleatoria(int p){
	srand(time(NULL));
	
	
}*/
	
bool duplaProblematica(string patente1, string patente2, int & suma){
	string patente_auxiliar = patente2;
	unsigned i=0, j=0;
	bool encontrado=true;
	
	while(i < patente1.size() and encontrado){
		encontrado=false;
		j=0;
		
		while(j < patente_auxiliar.size() and !encontrado){
			
			if(patente_auxiliar[j] == patente1[i]){
				encontrado=true;
				cout << "borro " << patente_auxiliar[j];
				patente_auxiliar.erase(j,1);
			}
			
			j++;
		}
		
		i++;
	}
	
	if(patente1 == patente2){
		suma = sumaDigitos(patente1);
	}
	
	return encontrado;
}
	
int sumaDigitos(string patente){
	unsigned suma=0;
	
	for(unsigned i=0; i<patente.size(); i++){
		
		if(isdigit(patente[i]))
			suma+=patente[i]-'0';
		
	}
	
	return suma;
}

void muestraPatentes(){
	string patente={};
	
	for(char a='A'; a <= 'Z'; a++){
		patente+=a;
		for(char b='A'; b <= 'Z'; b++){
			patente+=b;
			
			for(char c='0'; c <= '9'; c++){
				patente+=c;
				
				for(char d='0'; d <= '9'; d++){
					patente+=d;
					
					for(char e='0'; e <= '9'; e++){
						patente+=e;
						
						for(char f='0'; f <= '9'; f++){
							patente+=f;
							
							for(char g='0'; g <= '9'; g++){
								patente+=g;
								cout << patente << endl;
								patente.erase(6,1);
							}
							
							patente.erase(5,2);
						}
						
						patente.erase(4,3);
					}
					
					patente.erase(3,4);
					
				}
				
				patente.erase(2,5);
			}
			
			patente.erase(1,6);
		}
		
		patente.erase(0,7);
	}
}
