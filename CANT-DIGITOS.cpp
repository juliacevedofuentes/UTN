#include <iostream>
using namespace std;

int cantDigitos(int n){
	if(n<10){
		return 1;
	}else{
		return 1+cantDigitos(n/10);
	}
}

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	cout << "La cantidad de digitos es igual a: " << cantDigitos(n) << endl;
	return 0;
}

