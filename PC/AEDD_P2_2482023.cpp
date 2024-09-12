#include <iostream>
using namespace std;

#define tm 9
#define tr 10000

bool patente_valida(string patente, int & pais);
float porcentaje(int v[], int & tl, int cat, int p);
bool encontrado(int b[], int tl, int cat);


int main(int argc, char *argv[]) {
	
	string patente;
	int pais = 0;
	
	getline(cin,patente);
	
	bool val = patente_valida(patente,pais);
	
	if(val == true){
		cout << "La patente es válida. Corresponde a el siguiente país: ";
		switch(pais){
			case 1: 
				cout << "Argentina."<<endl;
				break;
			case 2:
				cout << "Brasil."<<endl;
				break;
			case 3: 
				cout << "Bolivia."<<endl;
				break;
			case 4:
				cout << "Paraguay."<<endl;
				break;
			case 5: 
				cout << "Uruguay."<<endl;
				break;
		}
	}
	
	int tamano = 9;
	
	int a[tm] = {1,2,5,1,1,3,4,5,4};
	
	int categoria,p = -1;
	
	cout << "Ingrese de que país desea calcular el porcentaje de patentes: " << endl;
	cin >> categoria;
	cout << "Ingrese el número de veces que desea eliminar esta categoría del listado de patentes: " << endl;
	cin >> p;
	
	float porcentajep = porcentaje(a,tamano,categoria,p);
	
	cout << "El porcentaje de patentes del país que selecciono es: " << porcentajep << "%. " << endl;
	cout << boolalpha(encontrado(a,tamano,categoria))<< endl;
	return 0;
}

bool isnum(string a){
	bool val = true;
	int b = a.size();
	for(int i = 0; i < b; i++){
		if( a[i] < '0' or a[i]> '9'){
			val = false;
		}
	}
	return val;
}
bool isalpha(string a){
	bool val = true;
	int b = a.size();
	for(int i = 0; i < b; i++){
		a[i] = toupper(a[i]);
	}
	for(int i = 0; i < b; i++){
		if( a[i] < 'A' or a[i]> 'Z'){
			val = false;
		}
	}
	return val;
}

bool patente_valida(string patente, int & pais){ 
	bool val = true;
	if( (isalpha(patente.substr(0,2)) == true and isnum(patente.substr(2,3)) == true and isalpha(patente.substr(5,2)) == true) or (isalpha(patente.substr(0,1)) == true and isnum(patente.substr(1,3)) == true and isalpha(patente.substr(4,3)) == true)){
		pais = 1;
	} else if(isalpha(patente.substr(0,3)) == true and isnum(patente.substr(3,1)) == true and isalpha(patente.substr(4,1)) == true and isnum(patente.substr(5,2)) == true){
		pais = 2;
	} else if(isalpha(patente.substr(0,2)) == true and isnum(patente.substr(2,5)) == true){
		pais = 3;
	}else if((isalpha(patente.substr(0,4)) == true and isnum(patente.substr(4,3)) == true)or(isnum(patente.substr(0,3)) == true and isalpha(patente.substr(3,4)) == true)){
		pais = 4;
	}else if(isalpha(patente.substr(0,3)) == true and isnum(patente.substr(3,4)) == true){
		pais = 5;
	}else{
		val = false;
		pais = -1;
	}
	return val;
}
	
float porcentaje(int v[], int & tl, int cat, int p){
	int k = tl -1;
	float sum = 0;
	
	for(int i = 0; i < tl ; i++){
		if( v[i] == cat){
			sum++;
		}
	}
	
	float por = float(sum/tl)*100.00;
	
	while(p != 0 and k >= 0){
		if(v[k] == cat){
			for (int i = k; i<tl-1; i++) {
				v[i] = v[ i+1 ];
			}
			tl--;
			p--;
		}
		k--;
	}
	
	return por;
}
bool encontrado(int b[], int tl, int cat){
	int izq,der,pm;
	bool encon = false;
	
	izq = 0;
	der = tl-1;
	
	while(izq <= der  and !encontrado){
		pm = (int)((izq + der)/2);
		if(v[pm] == cat){
			encontrado = true;
		}else if(cat > v[pm]){
			izq = pm+1;
		}else{
			der = pm -1;
		}
	}
	
	return encon;
}
