#include <iostream>
using namespace std;

int Producto (int,int);

int main(int argc, char *argv[]) {
	int a,b;
	cin >> a >> b;
	cout << "PROD = " << Producto(a,b) << endl;
	
	return 0;
}
int Producto ( int a, int b){
	int p;
	p = a*b;
	return p;
}

