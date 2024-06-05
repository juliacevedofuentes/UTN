#include <iostream>
using namespace std;

void resultado(string);

int main(int argc, char *argv[]) {
	string game;
	cin >> game;
	
	resultado(game);
	
	return 0;
}
void resultado(string a){
	char x,y,z;
	x = a[0];
	y = a[1];
	z = a[2];
	if((x == 'O' &&  y == 'O') || (x == 'O' && z == 'O') || (y == 'O' &&  z == 'O')||(x == 'O' &&  y == 'O' && z == 'O')||(x == 'X' &&  y == 'X' && z == 'X')){
		cout << "?" << endl;
	}else{
		if(y == 'O'){
			cout << "*" << endl;
		}else{
			cout << "Alice" << endl;
		}
	}
}
