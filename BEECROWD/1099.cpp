#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	int x, y;
	int soma;
	
	cin >> n ;
	
	for(int i = 0; i < n; i++){
	
		cin >> x;
		cin >> y;
		
		if(x > y)swap(x,y);
		soma = 0;
		for(int e = x + 1; e < y; e++){
			if(e%2 != 0){
				soma += e;
			}
		}	
		cout << soma << endl;
	}
	return 0;
}

