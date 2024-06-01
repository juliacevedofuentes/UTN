#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double A,B,C,aux;
	double v[3];
	
	cin >> A >> B >> C;
	v[0] = A;
	v[1] = B;
	v[2] = C;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			if(v[i] > v[j]){
				aux = v[j];
				v[j] = v[i];
				v[i] = aux;
			}
		}
	}
	
	cout << v[0] << endl << v[1] << endl << v[2] << endl << endl; 
	return 0;
}

