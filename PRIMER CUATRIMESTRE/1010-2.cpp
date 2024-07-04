#include <iostream>
#include <iomanip>

using namespace std;

float Calcsimple(int,float);
int main() {
	
	int cod1, cant1,cod2,cant2;
	float cost1,cost2, price;
	cin >> cod1 >> cant1 >> cost1;
	cin >> cod2 >> cant2 >> cost2;
	price = Calcsimple(cant1,cost1)+ Calcsimple(cant2,cost2);
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << price << endl;
	
	return 0;
}
float Calcsimple(int b,float c){
	return b*c;
}
