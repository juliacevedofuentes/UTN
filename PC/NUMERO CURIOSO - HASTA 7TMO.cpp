#include <iostream>
using namespace std;

int numerocurioso(int);

int main(int argc, char *argv[]) {
	int n;
	int x = 1;
	cin >> n;

	while(n>0){
		if( numerocurioso(x) != 0){
			cout << x << "x" << x << " = " << x*x << endl;
			n--;
		}
		x++;
	}
	
	return 0;
}

int numerocurioso(int n){
	if(n == (n*n)%10 && n<10){
		return n;
	}else if(n == (n*n)%100 && n<100 && n >= 10){
		return n;
	}else if(n == (n*n)%1000 && n<1000 && n >= 100){
		return n;
	}else if(n == (n*n)%10000 && n<10000 && n >= 1000){
		return n;
	}else if(n == (n*n)%100000 && n<100000 && n >= 10000){
		return n;
	}else if(n == (n*n)%1000000 && n<1000000 && n >= 100000){
		return n;
	}else if(n == (n*n)%10000000 && n<10000000 && n >= 1000000){
		return n;
	}else if(n == (n*n)%100000000 && n<100000000 && n >= 10000000){
		return n;
	}else if(n == (n*n)%1000000000 && n<1000000000 && n >= 100000000){
		return n;
	}else if(n == (n*n)%10000000000 && n<10000000000 && n >= 1000000000){
		return n;
	}else if(n == (n*n)%100000000000 && n<100000000000 && n >= 10000000000){
		return n;
	}
	return 0;
}
