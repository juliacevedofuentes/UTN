#include <iostream>
using namespace std;

#define tl 27

int main(int argc, char *argv[]) {
	int v[tl] = {};
	char x;
	while(cin>>x){
		int j = int(x)-97;
		v[j]++;
		cout << "Ingresar (CTRL + Z para terminar)" << endl;
	}
	for(int i = 0; i<tl; i++){
		cout << "La frecuencia de " << char(i+97) << " es de " << v[i] << endl;
	}
	return 0;
}

