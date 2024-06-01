#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.141592;

double triangulo(double, double);
double circulo(double);
double cuadrado(double);
double rectangulo(double,double);
double trapecio(double,double,double);

int main() {
	
	double a,b,c, areaTriangulo, areaCirculo, areaTrapecio, areaCuadrado, areaRectangulo;
	cin >> a >> b >> c;
	
	areaTriangulo = triangulo (a,c);
	areaCirculo = circulo(c);
	areaTrapecio = trapecio(a,b,c);
	areaCuadrado = cuadrado(b);
	areaRectangulo = rectangulo(a,b);
	
	cout << fixed << setprecision(3) << endl;
	cout << "TRIANGULO: " << areaTriangulo << endl;
	cout << "CIRCULO: " << areaCirculo << endl;
	cout << "TRAPEZIO: " << areaTrapecio << endl;
	cout << "QUADRADO: " << areaCuadrado << endl;
	cout << "RETANGULO: " << areaRectangulo << endl;
	
	return 0;
}

double triangulo(double x, double y){
	return (x*y)/2;
}
	double circulo(double x){
		return (PI*x*x);
	}
		double trapecio(double x, double y, double z){
			return ((x+y)/2)*z;
		}
			double cuadrado(double x){
				return x*x;
			}
				double rectangulo(double x, double y){
					return x*y;
				}
					
