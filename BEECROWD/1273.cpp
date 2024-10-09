#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	
	while(cin>>n){
		if(n==0)break;  
		
		int max = 0;
		string x[50] = {};
		for(int i = 0; i<n; i++){
			cin >> x[i];
			int m = x[i].length();
			if( m > max){
				max = m;
			}
		}
		for(int j = 0; j<n; j++){
			cout << setw(max);
			cout << x[j] << endl;
		}
		cout << endl;
		
	}
	return 0;
}

