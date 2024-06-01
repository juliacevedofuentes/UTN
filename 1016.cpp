#include <iostream>
using namespace std;

int tiempo(int);

int main(int argc, char *argv[]) {
	int dist;
	
	cin >> dist;
	cout << tiempo(dist) << " minutos" << endl;
	return 0;
}
int tiempo(int a){
	return (a*2);
}
