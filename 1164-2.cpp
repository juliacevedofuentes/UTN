#include <iostream>
using namespace std;

char perfecto(int);
char bucle(int);

int main(int argc, char *argv[]) {
	int cant;
	cin >> cant;
	
	cout << bucle(cant)<< endl;
	
	return 0;
}
char bucle(int a){
	int x;
	cin >> x;
	if(a == 0){
		return 0;
	}else{
		return perfecto(x) + bucle(a-1);
	}
}
char perfecto(int a){
	int suma;
	int j;
	if(a == 0){
		return suma += j;
	}
}

