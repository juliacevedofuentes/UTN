#include <iostream>
#include <iomanip>
using namespace std;

int funcionA(int x,int y){
	int valor = 0;
	if(x>y){switch(x,y);}
	for(int i=x;i<=y;i++){
		if(i%2==0 && i%3== 0){
			valor += i;
		}
	}
	return valor;
}
	
	
		
int main(int argc, char *argv[]) {
	
	int x,y;
	cin >> x;
	do{
		cin >> y;
	}while ( y < x*3);
	
	float valor = 0.00;
	int cant = 0;
	float promedio;
	if(x>y){switch(x,y);}
	for(int i=x;i<=y;i++){
		if(i%5==0){
			valor += i;
			cant++;
		}
	}
	if(valor != 0){promedio = valor/(float)cant;}else{promedio = valor;}
	
	cout << funcionA(x,y) << endl;
	cout << fixed << setprecision(2) << promedio << endl;
	
	return 0;
}
