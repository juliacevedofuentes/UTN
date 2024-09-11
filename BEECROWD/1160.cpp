#include <iostream>

using namespace std;

int main() {
	
	long long t;
	cin >> t;
	
	for(int i = 1; i<=t;i++){
		long long pa,pb;
		double g1,g2;
		
		cin >> pa >> pb >> g1 >> g2;
		
		int anos = 0;
		int sec = 0;
		
		do{
			pa += pa*g1/100;
			pb += pb*g2/100;
			anos++;
			if(anos>100){
				sec++;
				break;
			}
		} while(pa<=pb);
		
		if(sec == 0)
			cout << anos << " anos." << endl;
		else
			cout << "Mais de 1 seculo." << endl;
	}
	
	return 0;
}
