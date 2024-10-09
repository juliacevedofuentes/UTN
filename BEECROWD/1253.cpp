#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	int n;
	cin >> n;
	cin >> ws;
	for(int i = 0; i<n; i++){
		string u;
		int x;
		getline(cin,u);
		cin >> x; 
		int y = u.length();
		for(int j = 0; j<y; j++){
			u[j] = u[j] - x;
			if(u[j] < 'A'){
				u[j] = u[j] + 26;
			}
		}
		cout << u << endl;
		cin >> ws;
	}
	return 0;
}

