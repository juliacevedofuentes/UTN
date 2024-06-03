#include <iostream>
using namespace std;

int menor(int,int,int,int);
int mayor(int,int,int,int);

int funcionA( int x, int y ){
	int valor = 0;
	for(int i = x; i <= y; i++){
		if(i%5 == 0 && i%2 == 0){valor++;}
	}
	return valor;
}
int main(int argc, char *argv[]) {
	int a,b,c,d;
	int men,may;
	do{
		cin >> a >> b >> c >> d;
	}while( a == b or a == c or a == d or b == c or b == d or c == d);
	
	men = menor(a,b,c,d);
	may = mayor(a,b,c,d);
	
	cout << funcionA(men,may) << endl;
	
	return 0;
}
int menor(int a,int b,int c,int d){
	int x = a;
	if(b<x){x = b;}
	if(c<x){x = c;}
	if(d<x){x = d;}
	return x;
}

int mayor(int a,int b,int c,int d){
	int x = a;
	if(b>x){x = b;}
	if(c>x){x = c;}
	if(d>x){x = d;}
	return x;
}
