#include <iostream>
using namespace std;

int cantDigitos(int n){
	if(n<=10){
		if(n%2 == 0){
			return 1;
		}else{
			return 0;
		}
	}else{
		if(n%2 == 0){
			return 1 +cantDigitos(n/10);
		}else{
			return 0 + cantDigitos(n/10);
		}
	}
}
	
	int main(int argc, char *argv[]) {
		int n;
		cin >> n;
		cout << "La cantidad de digitos pares es igual a: " << cantDigitos(n) << endl;
		return 0;
	}
