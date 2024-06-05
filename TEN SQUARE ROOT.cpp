#include <iostream>
#include <iomanip>
	using namespace std;
	
	double raizDeDiez(int n);
	
	int main(int argc, char *argv[]) {
		int entrada;
		cin >> entrada;
		cout << fixed << setprecision(10) << 3 + raizDeDiez(entrada) << endl;
		return 0;
	}
	
	double raizDeDiez(int n) {
		if (n == 0) return 0;
		return 1/(6.0+raizDeDiez(n - 1));
	}
	
	
