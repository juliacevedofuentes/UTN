#include <iostream>
#include <string>
using namespace std;

void terminoa(int,string);

int main(int argc, char *argv[]) {
	string ab;
	int n;
	cin >> n >> ab;
	terminoa(n,ab);
	
	return 0;
}
void terminoa(int a, string b){
	int num = 0;
	if(a>0){
		for(int i = 0; i<a; i++){
			if(b[i] == 'a'){
				if(b[i] == b[i-1] || b[i] == b[i+1]){
					num++;
				}
			}
		}
	}
	
	cout << num << endl;
}
