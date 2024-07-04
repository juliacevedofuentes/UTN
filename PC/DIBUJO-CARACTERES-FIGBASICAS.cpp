#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,h,a;
	char x;
	cout << "Selecciones la figura que desea crear:" << endl;
	cout << "1. Triangulo" << endl;
	cout << "2. Cuadrado" << endl;
	cout << "3. Rectangulo" << endl;
	cout << "4. Rombo" << endl;
	cout << "Ingrese su opción:" << endl;
	cin >> n;
	cout << "Ingrese el caracter para dibujar la figura:" << endl;
	cin >> x;
	
	switch(n){
	case 1:
		cout << "Ingrese la altura del triangulo:" << endl;
		cin >> h;
		for (int i=1; i<h; i++){
			for (int j = 1; j < i; j++)
				cout << x;
			cout << endl;
		}
		break;
	case 2:
		cout << "Ingrese la altura del cuadrado" << endl;
		cin >> h;
		for (int i=1; i<h; i++){
			for (int j = 1; j < h; j++)
				cout << x;
			cout << endl;
		}
		break;
	case 3:
		cout << "Ingrese la altura y el ancho del rectangulo:" << endl;
		cin >> h >> a;
		for (int i=1; i<h; i++){
			for (int j = 1; j < a; j++)
				cout << x;
				cout << endl;
		}
		break;
	case 4:
		cout << "Ingrese la altura del rombo:" << endl;
		cin >> h;
		int k = 2*h - 2;
		for (int i=0; i<h; i++){
			for (int j=0; j<k; j++)
			cout <<" ";
			k = k - 1;
			for (int j=0; j<=i; j++ ){
				cout << " " << x;
			}
			cout << endl;
		}
		for (int i=h; i>=0; i--){
			for (int j=k; j>0; j--)
				cout <<" ";
			k = k + 1;
			for (int j=i; j>=0; j-- ){
				cout << " " << x;
			}
			cout << endl;
		};
		break;
	}
	return 0;
}

