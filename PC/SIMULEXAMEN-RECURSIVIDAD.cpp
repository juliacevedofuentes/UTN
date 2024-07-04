#include <iostream>
using namespace std;

void bisiesto(int&,int&);

int main(int argc, char *argv[]) {
	int a,n;
	cin >> a >> n;
	
	bisiesto(a,n);
	
	return 0;
}
void bisiesto(int& a, int& b){
	if(b == 0){
		
	}else{
		if(a%4 == 0){
			cout << a << endl;
			for(int j=1;j<=b;j++){
				int b = 0;
				b = a+4*j;
				if( b%100 != 0 or b%400 == 0){
					cout << b << endl;
				} else{ b = b+1;};
				}
		}else if(a%4 != 0){
			int x = 0;
			x = a + (4-a%4);
			for(int j=0;j<=b;j++){
				int c = 0;
				c = x+4*j;
				if( c%100 != 0 or c%400 == 0){
					cout << c << endl;
				} 
			}
			}
	}
}

	

