#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float x;
	int i,sum=0;
	for(i=1;i<=6;i++){
		cin >> x ;
		if(x>0){
			sum=sum+1;
		}
	}
	
	cout << sum << " valores positivos" << endl;
	
	
	return 0;
}

