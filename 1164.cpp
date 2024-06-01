#include <iostream>
using namespace std;


int main(int argc, char *argv[]) {
	int cant;
	cin >> cant;
	
	for(int i=1;i<=cant;i++){
		int x;
		int sum = 0;
		
		cin >> x;
		
		for(int j=1;j<x;j++){
			if(x%j == 0){
				sum += j;
			}
		}
		if(sum == x){
			cout << x << " eh perfeito" << endl;
		}else{
			cout << x << " nao eh perfeito" << endl;
		}
	}
	return 0;
}

