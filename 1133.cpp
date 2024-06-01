#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x, y, aux;
	int modulo;
	cin >> x;
	cin >> y;
	
	if(x > y){
		aux = x;
		x = y;
		y = aux;
	}
	
	for(int i = x+1; i < y; i++){
		modulo = i%5;
		if(modulo == 2.00 or modulo == 3.00){
			cout << i << endl;}
	}
	

	return 0;
	
}

