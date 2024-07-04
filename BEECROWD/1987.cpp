#include <iostream>
using namespace std;

void divtres(int,int);

int main(int argc, char *argv[]) {
	int n,m;
	while(cin>>n>>m){
		divtres(n,m);
	}
	return 0;
}

void divtres(int a,int b){
	int numtres = 0;
	for(int i = 0; i<a; i++){
		numtres += b%10;
		b = b/10;
	}
	if(numtres%3 == 0){
		cout << numtres << " sim" << endl;
	} else {
		cout << numtres << " nao" << endl;
	}
}

