#include <iostream>
using namespace std;

int iccanobif(int);
//muy lento
int main(int argc, char *argv[]) {
	
	int N;
	cin >> N;
	while(N>0){
		cout << iccanobif(N) << endl;
		N--;
	}
	
	
	return 0;
}

int iccanobif(int a){
	if(a==1||a==2){
		return 1;
	}else{
		return iccanobif(a-1)+iccanobif(a-2);
	}
}
