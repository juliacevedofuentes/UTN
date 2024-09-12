#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	string a;
	
	cin >> n;
	cin.ignore();
	
	for(int i = 0; i<n; i++){

		getline(cin,a);
		
		for(int j=(a.length()/2)-1;j>=0;j--)
			cout<<a[i];
		for(int j=(a.length())-1;j>=a.length()/2;j--)
			cout<<a[i];
		cout<<endl;
	}
	
	return 0;
}

