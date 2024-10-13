#include <iostream>
#include <string>
using namespace std;

string rotar(string a){
	string x = a.substr(1)+ a[0];
	return x;
}

int main(int argc, char *argv[]) {
	string line;
	int i = 1;
	
	while(getline(cin,line)){
		if(line == "*")break;
		string dois, um = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
		int x = line.length();
		for(int j = 0; j<x; j++){
			if( rotar(line) > dois){
				dois = rotar(line);
			}
			if( rotar(line) < um){
				um = rotar(line);
			}
			line = rotar(line);
		}
		cout << "Caso " << i << ": " << um << " " << dois << endl;
		i++;
	}
	
	return 0;
}

