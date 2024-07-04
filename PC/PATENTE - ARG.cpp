#include <iostream>

using namespace std;

void patente(char,char,char,char,char,char,char);

int main(int argc, char *argv[]) {
	
	char a,b,c,d,e,f,g;
	cin >> a >> b >> c >> d >> e >> f >> g;
	
	patente(a,b,c,d,e,f,g);

	return 0;
}

char mayus(char a){
	if(a >= 'A' && a <= 'Z'){
		return a;
	}else{
		return 0;
	}
}

char num(char a){
	if(a >= 48 && a <= 57){
		return a;
	}else{
		return 0;
	}
}
	
	
void patente(char a, char b, char c, char d, char e, char f, char g){
	if(mayus(a)!= 0 && mayus(b)!= 0 && num(c)!= 0 && num(d)!= 0 && num(e)!= 0 && mayus(f)!= 0 && mayus(g)!= 0 ){
		cout << a << b << c << d << e << f << g << " si corresponde a un número de patente!" << endl;
	}else{
		cout << a << b << c << d << e << f << g << " no corresponde a un número de patente." << endl;
	}
}

