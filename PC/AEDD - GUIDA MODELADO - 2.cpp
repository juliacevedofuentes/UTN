#include <iostream>
#include <string>
using namespace std;

#define tc 4000
#define tf 27

struct Palabra{
	string llamado;
	int categoria_gramatical;
	string definiciones[5]={};
};

int cantidadDeArticulos(Palabra d[][tc],int cf,int cc);
bool encontrarPalabra(Palabra d[][tc],int cf,int cc,string x);
bool agregarPalabra(Palabra d[][tc],int cf,int cc,Palabra p);

int main(int argc, char *argv[]) {
	Palabra diccionario[tf][tc] = {};
	
	cout << cantidadDeArticulos(diccionario,tf,tc) << endl; 
	string pal;
	getline(cin,pal);
	cout << encontrarPalabra(diccionario,tf,tc,pal) << endl;
	
	Palabra p;
	cout << "Ingrese la palabra que desea agregar al diccionario: " << endl;
	getline(cin,p.llamado);
	cout << "Ingrese a que categoría gramatical pertenece esta palabra (0 = sustantivo, 1 = adjetivo, 2 = artículo, 3 = pronombre y 4 = verbo):"<<endl;
	cin >> p.categoria_gramatical;
	int j = 0;
	cout << "Ingrese las definiciones de la palabra,presione CTRL+Z para terminar, solo tiene 5 definiciones: " << endl;
	while(cin>>p.definiciones[j]){
		j++;
		if(j == 4)break;
	}
	bool agregado = agregarPalabra(diccionario,tf,tc,p);
	
	return 0;
}
int cantidadDeArticulos(Palabra d[][tc],int cf,int cc){
	int cantart = 0;
	for(int i = 0; i<cf;i++){
		for(int j = 0; j <cc; j++){
			if(d[i][j].categoria_gramatical == 2){
				cantart++;
			}
		}
	}
	return cantart;
}
bool encontrarPalabra(Palabra d[][tc],int cf,int cc,string x){
	bool encontrado = false;
	int y = tolower(x[0]) - 97; 
	int i = 0;
	while(i<cc and encontrado == false){
		if( x == d[y][i].llamado){
			for(int j = 0;j<5;j++){
				cout << d[y][i].definiciones[j] << endl;
			}
			encontrado = true;
		}else{
			i++;
		}
	}
	
	return encontrado;
}
	
bool agregarPalabra(Palabra d[][tc],int cf,int cc,Palabra p){ //terminar
	int y = tolower(p.llamado[0]) - 97; 
	
	int izq,der,pm;
	bool encontrado = false;
	
	izq = 0;
	der = cc-1;
	
	while(izq <= der  and !encontrado){
		pm = (int)((izq + der)/2);
		if(v[pm] == x){
			encontrado = true;
		}else if(x > v[pm]){
			izq = pm+1;
		}else{
			der = pm -1;
		}
	}
	
	return encontrado;
}

