#include <iostream>

using namespace std;

#define tm 100

void cargar_matriz(int m[][tm],int cf, int cc);
void soma_max(int m[][tm],int cf, int cc,int& max);

int main()
{
	
	int matriz[tm][tm] = {};
	int n,m;
	int maxsoma = 0;
	cin>>n>>m;
	
	cargar_matriz(matriz,n,m);
	soma_max(matriz,n,m,maxsoma);
	
	cout << maxsoma << endl;
	
	return 0;
}

void cargar_matriz(int m[][tm],int cf,int cc){
	int i,j;
	for (i =0; i < cf; i++){
		for ( j=0 ; j < cc ; j++){
			cin >> m [i][j];
		}
	}
}
void soma_max(int m[][tm],int cf, int cc,int& max){
	int soma = 0;
	for(int i = 0; i<cc; i++){
		for(int j = 0; j<cf;j++){
			soma += m[j][i];
		}
		if(soma > max){
			max = soma;
		}
		soma = 0;
	}
	for(int k = 0; k<cf; k++){
		for(int j = 0; j<cc;j++){
			soma += m[k][i];
		}
		if(soma > max){
			max = soma;
		}
		soma = 0;
	}
}
