#include <iostream>
#include <string>
using namespace std;

bool Validar_Usuario(string usuario);

int main(int argc, char *argv[]) {
	
	string usuario;
	
	getline(cin, usuario);

	cout << Validar_Usuario(usuario) << endl;
	
	return 0;
}

bool Validar_Usuario(string usuario){
	if( usuario.size() == 8 and (( usuario[0]>= 'a' and usuario[0]<= 'z') or ( usuario[0]>= 'A' and usuario[0]<= 'Z'))){
		int i = 1;
		bool a = true;
		while(i<8 and a == true){
			if(( usuario[i]>= 'a' and usuario[i]<= 'z') or ( usuario[i]>= 'A' and usuario[i]<= 'Z') or ( usuario[i]>= '0' and usuario[i]<= '9')){
				i++;
			}else{
				a = false;
			}
		}
		if ( a == true){
			return true;
		}else{
			return false;
		}
		
	}else{
		return false;
	}
}

