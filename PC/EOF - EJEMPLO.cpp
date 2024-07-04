#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	
	cout << "Por favor ingrese la cantidad de números que quiere ingresar:" << endl;
	
	while(cin >> n){
		int sumapares = 0;
		int cantimpares = 0;
		int cantneg = 0;
		for(int i = 1; i <= n ; i++){
			int x;
			cin >> x;
			if(x%2 == 0){
				sumapares += x;
			}else{
				cantimpares++;
			}
			if(x < 0){
				cantneg++;
			}
		}
		cout << "La suma de los números pares ingresados es igual a:" << sumapares << endl;
		cout << "La cantidad de números impares ingresados es igual a:" << cantimpares << endl;
		cout << "La cantidad de números negativos ingresados es igual a:" << cantneg << endl;
		cout << "Para terminar el programa presione Ctrl+Z o si prefiere continuar ingrese la cantidad de números que quiere ingresar:" << endl;
	}
	return 0;
}

