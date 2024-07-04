#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int x, y, aux, i;
	int soma;
	
	cin >> x;
	cin >> y;
	
	if(x > y){
		aux = x;
		x = y;
		y = aux;
	}
	soma = 0;
	
	for(i = x + 1; i < y; i++){
		if(i%2 != 0){
			soma += i;
		}
	}	
	cout << soma << endl;
	
	return 0;
}

