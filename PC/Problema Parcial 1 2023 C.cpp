#include <iostream>
using namespace std;
void calculo(int, int, int, int &);

int main() {
	int A,B,C,x=0;
	float condicion;
	cin >> A;
	cin >> B;
	cin >> C;
	
	calculo(A,B,C,x);
	
	cout << "x = " << x << endl;
	condicion = (float)x/999;
	cout << "condicion = " << condicion << endl;
	
	if(condicion == 1)
		cout << "todos los digitos son 9" << endl; 
	else if (condicion >=((float)200/999) and condicion < ((float)300/999))
		cout << "el primer digito es 2" << endl;
	else if (condicion >= ((float)500/999) and condicion < ((float)600/999))
		cout << "el primer digito es 5" << endl;
	else
		cout << "el primer digito no es 2 ni 5" << endl;
	return 0;
}

void calculo(int a, int b, int c, int & d){
	int da, db, dc;
	dc=c%10;
	cout << "c = " << dc << endl;
	while( a >= 10)
		a= (a/10);
	da=a;
	cout << "a = " << a << endl;
	while(b >= 10)
		b= (b/10);
	db=b;
	cout << "b = " << b << endl;
	
	d=da*100+db*10+dc;
	
}
