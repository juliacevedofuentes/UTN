#include <iostream>
using namespace std;

char tipoDeMayus(char);

int main() {
	char x;
	for(int i = 0; i <=10; i++){
		do{
			cin>>x;
		} while(x < 'A' or x > 'Z');
		cout << tipoDeMayus(x);
	}
	
	return 0;
}
char tipoDeMayus(char x){
	char tipo;
	if(x=='A' or x=='E' or x=='I' or x=='O' or x=='U'){
		tipo='V';
	}
	else if(x=='Y'){
		tipo='S';
	}
	else{
		tipo='C';
	}
	return tipo;
}
	
	


