#include <iostream>
#include <string>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	cin>>ws;
	
	for(int i = 0; i<n;i++){
		string uno,dos;
		cin >> uno >>dos;
		int x = 0;
		if(uno.length() < dos.length()){
			x = uno.length();
		}else{
			x = dos.length();
		}
		int k = 0;
		while(x>0){
			cout << uno[k] << dos[k];
			k++;
			x--;
		}
		if(k<uno.length()){
			while(k<uno.length()){
				cout << uno[k];
				k++;
			}
		}else if(k<dos.length()){
			while(k<dos.length()){
				cout << dos[k];
				k++;
			}
		}
		cout << endl;
	}
	
	return 0;
}
