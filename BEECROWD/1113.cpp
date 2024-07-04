#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int x, y;
	
	
	while(true){
		
		cin >> x;
		cin >> y;
		if(x<y){
			cout << "Crescente" << endl;
		}else if(x>y){
			cout << "Decrescente" << endl;
		} else if(x==y){
			break;}
	}
	
	return 0;
}

