#include <iostream>
using namespace std;

double Promedio(int,int,double);

int main() {
	
	int cp1,cp2,up1,up2;
	double pp1,pp2;
	cin >> a >> b >> c;
	cout << fixed << setprecision(1) << "MEDIA = " << Promedio(a,b,c) << endl;
	
	return 0;
}

double CostoP(int a,int b, double c){
	double MEDIA;
	MEDIA = (a*2.00+b*3.00+c*5.00)/10.00;
	return MEDIA;
}
