#include <iostream>
#include <iomanip>
using namespace std;

#define tm 101

void generar_matriz(int m[][tm], int tl);
void imprimir_matriz(int m[][tm], int tl);

int main(int argc, char *argv[]) {
	int N;
	
	while(cin>>N){
		if(N==0)break;
		int m[tm][tm] = {};
		generar_matriz(m,N);
		imprimir_matriz(m,N);
	}
	
	return 0;
}

void generar_matriz(int m[][tm], int tl){
	int l,k;
	for(int i = 0; i < tl; i++){
		l = i+1;
		k = 2;
		for(int j=0; j<=i; j++,l--)
		{
			m[i][j]= l;
		}
		for(int j=i+1; j<tl; j++,k++)
			m[i][j]=k;
	}
}
void imprimir_matriz(int m[][tm], int tl){
	for(int i = 0; i < tl; i++){
		for(int j = 0; j < tl; j++){
			cout << setw(3) << m[i][j];
			if(j<tl-1)cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}
