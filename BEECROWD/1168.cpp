#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	for(int i = 0; i<N;i++){
		string j;
		int suma = 0;
		cin >> ws;
		getline(cin,j);
		
		int m = j.size();
		
		for(int k = 0;k < m ;k++ ){
			if( j[k] == '1'){
				suma = suma + 2;
			}else if(j[k] == '2' or j[k] == '3' or j[k] == '5'){
				suma += 5;
			}else if(j[k] == '4'){
				suma += 4;
			}else if (j[k] == '6' or j[k] == '9' or j[k] == '0'){
				suma += 6;
			}else if (j[k] == '7'){
				suma += 3;
			}else if(j[k]=='8'){
				suma += 7;
			}
		}
		cout << suma << " leds" << endl;
	}
	
	return 0;
}
