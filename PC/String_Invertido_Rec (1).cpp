#include <iostream>
#include <string>

using namespace std;

string inv_String_Rec(string);

int main (void){

   string palabra, invert; //Genero dos strings para diferenciar el original y el invertido
   cout << "Ingrese la palabra o frase a invertir: " << palabra << endl;
   getline(cin,palabra);  //Ingreso por teclado la frase 
    
    invert = inv_String_Rec(palabra); //Llamado a la funcion sobre la 2da variable
    cout << "Original: " << palabra << endl;
    cout << "Invertido: " << invert << endl;

	return 0;
} 

string inv_String_Rec(string dato){

	if (dato.empty()) { // Analizo la cadena vac�a para un caso base (Revisar biblioteca STRING)
		return "";
	} else {
		// Retorna el ultimo caracter y se suma a la recursiva con uno menos
		return dato.back() + inv_String_Rec(dato.substr(0, dato.length() - 1));
	}
}       
    
