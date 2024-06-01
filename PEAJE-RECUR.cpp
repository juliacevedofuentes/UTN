#include <iostream>
using namespace std;

int peaje(int,int);
int menos10(int,int);

int main(int argc, char *argv[]) {
	int tipo, cant;
	cout << "Ingrese 1 para auto, 2 para camioneta y 3 para camión. Luego ingrese cuantas veces pasa por el peaje:" << endl;
	cin >> tipo >> cant;
	cout << "El costo total de peaje para el vehículo es de: $" << peaje(tipo,cant) << endl;
	return 0;
}

int peaje(int a,int b){
	double x = 100;
	double z = 150;
	double y = 200;
	if(b == 0){
		return 0;
	}else{
		if( a == 1){
			if(b == 1){
			return x + peaje(a,b-1);
			}else{
				x = menos10(x,b);
				return (x)+ peaje(a,b-1);
			}
		} else if( a == 2){
			if(b == 1){
				return z + peaje(a,b-1);
			}else{
				z = menos10(z,b);
				return (z)+ peaje(a,b-1);
			}
		} else if ( a == 3){
			if(b == 1){
				return y + peaje(a,b-1);
			}else{
				y = menos10(y,b);
				return (y)+ peaje(a,b-1);
			}
		} else {
			return 0;
		}
	} 
}
int menos10(int a,int b){
	return a-(0.1)*a;
}
