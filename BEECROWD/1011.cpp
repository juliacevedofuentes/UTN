#include <iostream>
#include <iomanip>
	
	using namespace std;

const float pi = 3.14159;

float volEsfera(float x);

int main() {
	
	int r;
	float volumenEsfera;
	cin >> r;
	volumenEsfera = volEsfera(r);
	cout << fixed << setprecision(3);
	cout << "VOLUME = " << volumenEsfera << endl;
	return 0;
}

float volEsfera(float x){
	return (4/3.0)*pi*x*x*x;
}
