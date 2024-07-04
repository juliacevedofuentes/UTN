#include <iostream>

using namespace std;

int vocMayusc (char c);
int semiVoc (char c);
int consMayusc (char c);
void detectorLetras ();

int main() {
	detectorLetras ();
	return 0;
}
int vocMayusc (char c) {
	if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
		return 1;
	}
	return 0;
}
int semiVoc (char c) {
	if (c == 'Y') {
		return 1;
	}
	return 0;
}
int consMayusc (char c) {
	if (c >= 'A' && c <= 'Z') {
		if (vocMayusc (c) == 0 && semiVoc (c) == 0) {
			return 1;
		}
	}
	return 0;
}
void detectorLetras () {
	char c;
	int contadorMayus = 0;
	while (contadorMayus < 10) {
		cin >> c;
		if (vocMayusc (c) == 1) {
			cout << "V" << endl;
			contadorMayus++;
		} else if (consMayusc (c) == 1) {
			cout << "C" << endl;
			contadorMayus++;
		} else if (semiVoc (c) == 1) {
			cout << "S" << endl;
			contadorMayus++;
		}
	}
}
