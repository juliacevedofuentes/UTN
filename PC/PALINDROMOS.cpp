#include <iostream>
using namespace std;

bool palindromo(int n){
	int cifra, m = 0;
	while (n > 0) {
		cifra = n % 10;
		m = m * 10 + cifra;
		n = n / 10;
	}
	cout << m << endl;
	if ( m != n ){
		return true;
	} else {
		return false;
	}
}

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	cout << palindromo(n) << endl;
	return 0;
}

