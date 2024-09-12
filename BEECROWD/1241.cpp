#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	cin >> ws;
	for(int i=0;i<n;i++){
		char a[1001],b[1001];
		int cont = 0;
		int j,k;
		cin >> a >>b;
		
		for(j = strlen(b), k = strlen(a) ; j >= 0; j--, k--){
			if(a[k] == b[j]) cont++;
			else break;
		}
		
		if( cont == strlen(b)+1){
			cout << "encaixa" << endl;
		}else{
			cout << "nao encaixa" << endl;
		}
	}
	return 0;
}

