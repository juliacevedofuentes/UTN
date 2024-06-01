#include <iostream>
#include <iomanip>
using namespace std;

int rango(int);
int mayor(int,int);
void calculaPromedioPrimos(int,int);

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	while(rango(n)==0){
		cin >> n;
	}
	int m;
	cin >> m;
	while(mayor(m,n)== 0){
		cin >> m;
	}
	calculaPromedioPrimos(n,m);
	
	return 0;
}

int rango(int a){
	if(a>=2 && a<=300){
		return a;
	}else{
		return 0;
	}
}
int mayor(int a, int b){
	if(a>=b){
		return a;
	}else{
		return 0;
	}
}
void calculaPromedioPrimos(int a,int b){
	int prod;
	int n;
	float Promedio;
	for(int i >= a; i <= b; i++){
		int sum = 0;
		for(int j = 1; j<=i; j++){
			if(i%j == 0){
				sum += j;
			}
		}
		if(sum = i+1){
			cout << i << endl;
			prod += i;
			n ++;
		}
	}
	Promedio = prod/n;
	cout << fixed << setprecision(2) << endl;
	cout << Promedio << endl;
	int mod = Promedio;
	if(mod%5==0){
		cout << "La parte entera es multiplo de 5" <<endl;
	} else {
		cout << "La parte entera no es multiplo de 5" <<endl;
	}
}
