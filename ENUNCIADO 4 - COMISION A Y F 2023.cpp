#include <iostream>
using namespace std;

int voc(char);
void recuento(char,char,char,char);

int main(int argc, char *argv[]) {
	char x,y,w,z;
	cin >> x >> y >> w >> z;
	int vocal = 0;
	int consonante = 0;
	
	if( voc(x) == 1){vocal++;}else{consonante++;}
	if( voc(y) == 1){vocal++;}else{consonante++;}
	if( voc(z) == 1){vocal++;}else{consonante++;}
	if( voc(w) == 1){vocal++;}else{consonante++;}
	
	
	if( x== 'a' && y == 'e' && w == 'i' && z == 'o'){
		cout << "CUATRO VOCALES ORDENADAS" << endl;
	} else if( y == x+1 && w == y+1 && z == w+1){
		cout << "Las cuatro letras son consecutivas" << endl;
		recuento(x,y,w,z);
	} else if( vocal >= 3){
		cout << "Hay al menos 3 letras que son vocales" << endl;
		recuento(x,y,w,z);
	} else {
		recuento(x,y,w,z);
	}
	
	return 0;
}
int voc(char a){
	if(a == 'a' or a == 'e' or a == 'i' or a == 'o' or a == 'u'){
		return 1;
	}
	return 0;
}
void recuento(char a,char b, char c, char d){
	int vocal = 0;
	int consonante = 0;
	if( voc(a) == 1){vocal++;}else{consonante++;}
	if( voc(b) == 1){vocal++;}else{consonante++;}
	if( voc(c) == 1){vocal++;}else{consonante++;}
	if( voc(d) == 1){vocal++;}else{consonante++;}
	cout << "Hay " << vocal << " vocales y " << consonante << " consonantes" << endl;
	
}
