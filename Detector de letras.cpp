#include <iostream>
using namespace std;

bool esVocal(char);
void salida(int,int);

int main(int argc, char *argv[]) {
	int n=0;
	do{
		char x;
		cin >> x;
		salida(x,n);
	} while(n<=10);
	return 0;
}

bool esVocal(char letra) {
	if(letra == 'A' or letra == 'E' or letra == 'I' or letra == 'O' or letra == 'U'){
		return 1;
	}else{
		return 0;
	}
}
void salida(int a, int b){
	if(a >='A' && a <= 'Z'){
		if(esVocal(a)==1){
			cout << "V " ;
			b++;
		}else if( a == 'Y'){
			cout << "S " ;
			b++;
		}else{
			cout << "C " ;
			b++;
		}
	}
}
