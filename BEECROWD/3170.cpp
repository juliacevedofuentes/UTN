#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int b,g;
	cin >> b >> g;
	if(g%2 !=0){
		g = g-1;
	}
	if(b >= g/2){
		cout << "Amelia tem todas bolinhas!" << endl; 
	} else {
		cout << "Faltam " << g/2 - b << " bolinha(s)" << endl;
	}
	return 0;
}


