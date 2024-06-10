#include <iostream>
using namespace std;

int PrimerPrimoHaciaAtras(int numero);
bool Siesprimo(int inicio);

int main(int argc, char *argv[]) {
	int N,M,P1,P2,resultado=0;
	cin>>N>>M;
	P1 = PrimerPrimoHaciaAtras(N);
	P2 = PrimerPrimoHaciaAtras(M);
	resultado=P1*P2;
	cout<<resultado<<endl;
	return 0;
}

int PrimerPrimoHaciaAtras(int numero){
	int primo=0;
	if(Siesprimo(numero)){ //Si P es primo lo retorno directamente sino le resto 1
		primo = numero;
		return primo;
	}
	else numero--;
	for(int i=2;i<=numero;i++){ //Busco hasta el ultimo primo y lo retorno
		if(Siesprimo(i)){
			primo = i;
		}
	}
	return primo;
}

bool Siesprimo(int inicio){
	bool primo=true;
	for(int i=2;i<inicio;i++){
		if(inicio%i==0){
			primo=false;
		}
	}
	
	return primo;
}
	
