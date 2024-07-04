#include <iostream>
#include <iomanip>
using namespace std;
void funcionA(int x, int y){
	int sumatoria=0,sumatoria_promedio=0,contador=0;
	float promedio=0;
	
	for(int i=x; i<=y; i++){
		if(i%2==0 and i%3==0){
			sumatoria+=i;
		}
		if(i%5==0){
			contador++;
			sumatoria_promedio+=i;
		}
	}
	if(contador!=0){
		promedio=(float)sumatoria_promedio/contador;
	}
	cout << sumatoria << endl;
	cout << fixed << setprecision(2) << promedio << endl;
}

int main() {
	int X, Y;
	cin>>X;
	do{
		cin>>Y;
	} while(Y<X*3);
	
	funcionA(X,Y);
	
	return 0;
}
