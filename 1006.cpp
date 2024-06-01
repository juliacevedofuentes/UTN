#include <iostream>
#include <iomanip>

using namespace std;

double Promedio(double,double,double);

int main() {
	
	double a,b,c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(1) << "MEDIA = " << Promedio(a,b,c) << endl;
	
	return 0;
}

double Promedio(double a,double b, double c){
	double MEDIA;
	MEDIA = (a*2.00+b*3.00+c*5.00)/10.00;
	return MEDIA;
}
