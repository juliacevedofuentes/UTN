#include <iostream>
using namespace std;

int cantgoles(int);

int main(int argc, char *argv[]) {
	int cantpartidos;
	
	cin >> cantpartidos;
	cout << cantgoles(cantpartidos) << endl;
	
	return 0;
}

int cantgoles(int a){
	int cant;
	if(a == 0){
		return 0;
	}else{
		cin >> cant;
		return cant + cantgoles(a-1);
	}
}
