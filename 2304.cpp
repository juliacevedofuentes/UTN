#include <iostream>
using namespace std;
	
int main(int argc, char *argv[]) {
	int i,n;
	cin >> i >> n;
	int d,e,f;
	d = e = f = i;
	
	while(n >= 1){
		char mov;
		cin >> mov;
		if(mov == 'C'){
			char who;
			int much;
			cin >> who >> much;
			if( who == 'D'){
				d -= much;
			} else if( who == 'E'){
				e -= much;
			} else if( who == 'F'){
				f -= much;
			} 
		}else if (mov == 'V'){
			char who;
			int much;
			cin >> who >> much;
			if( who == 'D'){
				d += much;
			} else if( who == 'E'){
				e += much;
			} else if( who == 'F'){
				f += much;
			} 
		}else if(mov == 'A'){
			char who,towho;
			int much;
			cin >> who >> towho >> much;
			if( who == 'D'){
				d += much;
				if( towho == 'E'){
					e -= much;
				} else if( towho == 'F'){
					f -= much;
				} 
			} else if( who == 'E'){
				e += much;
				if( towho == 'D'){
					d -= much;
				}  else if( towho == 'F'){
					f -= much;
				} 
			} else if( who == 'F'){
				f += much;
				if( towho == 'D'){
					d -= much;
				} else if( towho == 'E'){
					e -= much;
				} 
			} 
		}
		n--;
	}
	cout << d << " " << e << " " << f << endl;
	
	return 0;
}


