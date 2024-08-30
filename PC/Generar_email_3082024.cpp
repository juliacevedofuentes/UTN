#include <iostream>
#include <string>
#include <cctype>

#include <algorithm>
using namespace std;

void Generar_email(string ingreso,string email);

int main(int argc, char *argv[]) {
	string ingreso;
	string email;
	
	getline(cin,ingreso);
	
	Generar_email(ingreso,email);
	
	
	return 0;
}

void Generar_email(string ingreso,string email){
	
	int espacio = ingreso.find(' ');
	string apellido = ingreso.substr(0,espacio);
	string nombre = ingreso.substr(espacio+1);
	
	email += tolower(nombre[0]);
	int x = apellido.size();
	
	for(int i = 0; i < x; i++){
		email += tolower(apellido[i]);
	}
	
	email += "@frsf.utn.edu.ar" ;
	
	cout << email << endl;
}

