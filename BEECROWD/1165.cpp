#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	
	cin >> n ;
	
	for(int i=1;i<=n;i++){
		int x;
		int sum = 0;
		
		cin >> x;
		for(int j = 1; j<=x ; j++){
			if( x%j == 0){
				sum += j;
			}
		}
		if ( sum == x+1){
			cout << x << " eh primo" << endl;
		} else {
			cout << x << " nao eh primo" << endl;
		}
	}
	return 0;
}

