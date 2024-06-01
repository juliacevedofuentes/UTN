#include <iostream>
using namespace std;

int mod2(int);
int Pasarbinario(int);

int main(int argc, char *argv[]) {
	int num;
	cin >> num;
	cout << Pasarbinario(num) << endl;
	
	return 0;
}

int Pasarbinario(int a){
	int num;
	
	if(a == 0 or a == 1){
		num = a;
		return num;
	}else{
		return mod2(a) + Pasarbinario(a/2)*10;}
}
int mod2(int num){
	return num%2;
}
