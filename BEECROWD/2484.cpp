#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string a = {};
	while(cin>>a){
		int counter;
		int len = a.length();
		for(int i = 0; i < len; i++) {
			for(int j = 0; j < len * 2 - i - 1; j++) {
				if(i == j) {
					counter = 0;
				}
				if((i + j) % 2 || j < i) {
					cout << " ";
				} else {
					cout << a[counter];
					counter++;
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}

