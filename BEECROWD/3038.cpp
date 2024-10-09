#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string h;
	while(getline(cin,h)){
		int m = h.length();
		for(int i = 0; i<m;i++){
			if(h[i] == '@'){
				h[i] = 'a';
			}else if(h[i] == '&'){
				h[i] = 'e';
			}else if(h[i] == '!'){
				h[i] = 'i';
			}else if(h[i] == '*'){
				h[i] = 'o';
			}else if(h[i] == '#'){
				h[i] = 'u';
			}
		}
		cout << h << endl;
	}
	return 0;
}

