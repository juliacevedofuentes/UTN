#include <iostream>

using namespace std;

int main() {
	
	int N,X;
	int in, out;
	in = 0;
	out = 0;

	cin >> N;
	for(int i = 1;i <= N; i++){
		cin >> X;
		if(X>=10 && X<=20){
			in++;
		}else {
			out++;
		}
	}
	cout << in << " in" << endl;
	cout << out << " out" << endl;
	
	return 0;
}
