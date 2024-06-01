#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x;
	int i,sump=0,par=0,impar=0,sumn=0;
	for(i=1;i<=5;i++){
		cin >> x ;
		if(x>0){
			sump=sump+1;
		}
		if(x<0){
			sumn=sumn+1;
		}
		if(x%2==0){
			par=par+1;
		}else if(x%2==1){
			impar=impar+1;
		}
	}
	cout << par << " valor(es) par(es)" << endl;
	cout << impar << " valor(es) impar(es)" << endl;
	cout << sump << " valor(es) positivo(s)" << endl;
	cout << sumn << " valor(es) negativo(s)" << endl;
	return 0;
}

