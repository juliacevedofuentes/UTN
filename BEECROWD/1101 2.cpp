#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int m,n,aux;
	int suma;
	
	while(true){
		
		cin >> m >> n;
		if (m <= 0) break;
		if (n <= 0) break;
		
		if(m > n){
			aux = m ;
			m = n;
			n = aux;
		}
		
		suma = 0;
		
		for(int i = m ; i<= n ; i++ ){
			cout << i << " ";
			suma += i;
		}
		cout << "Sum=" << suma << endl;
	}
	
	return 0;
}

