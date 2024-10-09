#include <iostream>
using namespace std;

#define tf 5
#define tc 100

struct Alumno{
	string ApellidoyNombre;
	int CantMatAprobadas;
	float PromediNotas;
};
struct becario{
	string ApellidoyNombre;
	int ano;
	char tipobeca;
	int pagomensual;
};

void Actualizar(Alumno m[][tc], int cf,int cc, becario v[], int tl);

int main(int argc, char *argv[]) {
	Alumno estudiantes[tf][tc] = {};
	becario v[500]= {};
	
	Actualizar(estudiantes,tf,tc,v,500);
	
	return 0;
}
void Actualizar(Alumno m[][tc], int cf,int cc, becario v[], int tl){
	
}

