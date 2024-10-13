#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string line;
	
	while(getline(cin,line)){
		int x = line.length();
		for(int i = 0; i < x; i++){
			if(line[i] == ',' or line[i] == '.'){
				if(line[i-1] == ' ')line.erase(i-1,1);
			}
		}
		cout << line << endl;
	}
	return 0;
}

