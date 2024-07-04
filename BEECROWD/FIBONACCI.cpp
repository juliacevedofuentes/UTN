#include <iostream>
using namespace std;

int fibonacci(int);

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
	return 0;
}
int fibonacci(int n){
	if (n==0 or n==1){
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}
