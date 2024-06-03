#include <iostream>
using namespace std;

void x(int,int,int);
int primerdigito(int);

int main(int argc, char *argv[]) {
	int a,b,c;
	cin >> a >> b >> c;
	x(a,b,c);
	
	return 0;
}
void x(int a,int b, int c){
	int da,db,dc, X;
	da = primerdigito(a);
	db = primerdigito(b);
	dc = c%10;
	
	X = da*100 + db*10 +dc;
	if(X/999 == 1){
		cout << "todos los digitos son 9" << endl;
	}else if(X/100 == 2){
		cout << "el primer digito es 2" << endl;
	} else if(X/100 == 5){
		cout << "el primer digito es 5" << endl;
	} else {
		cout << "el primer digito no es 2 ni 5" << endl;
	}
}
	
int primerdigito(int a){
	if(a < 10){
		return a;
	}else{
		return primerdigito(a/10);
	}
}
