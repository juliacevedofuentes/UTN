#include <iostream>
using namespace std;

int discard_remain(int v[],int & tl){
	int x = v[0];
	for(int i = 0; i < tl; i++){
		v[i] = v[i+1];
	}
	tl = tl-1;
	int aux = v[0];
	for(int i = 0; i < tl; i++){
		v[i] = v[i+1];
	}
	v[tl-1] = aux;
	return x; 
}


int main(int argc, char *argv[]) {
	int x;
	int v[51];
	
	while(cin >> x){
		
		if(x == 0)break;
		
		int discarded[51] = {};
		int k = 0;
	
		int tl = x-1;
		for(int i = 1; i < x+1; i++) v[i-1] = i;
		if(x > 1){
			while(x>1){
				discarded[k] = discard_remain(v,x);
				k++;
			}
			cout << "Discarded cards: " << discarded[0];
			for(int i = 1; i < tl; i++){
				cout << ", " << discarded[i] ;
			}
			cout << endl;
		}
		cout << "Remaining card: " << v[0] << endl;
	}
	
	return 0;
}

