#include <iostream>
#include <string>
using namespace std;

struct Fecha{
	int dia;
	int mes;
	int ano;
};

struct Patologia{
	bool obesidad;
	bool diabetes;
	bool enfermedad_cardio;
};

struct interesados{
	long int dni;
	string num_tramite;
	char sexo;
	Fecha fecha_nacimiento;
	Patologia patologias_declaradas;
	int grupo_poblacional;
	
};

#define tm 500000
#define tc 100

void agregarInscripcion(interesados& l[],int tl,int& cant);
void borrarInscripto(interesados& l[],int tl,int& cant);
void existeDuplicado(interesados l[],long int tl);
void cargarVacunados(long int v[],int tv);
void porcentajesVacunadosPorGrupoPoblacional(interesados l[],int tl,long int v[],int tv);

int main(int argc, char *argv[]) {
	interesados lista[tm]={};
	long int V[tc]={}
	
	int cant_ingresados = 0;
	//hacer funcional
	agregarInscripcion(lista,tm,cant_ingresados);
	borrarInscripto(lista,tm);
	existeDuplicado(lista,tm);
	cargarVacunados(V,tc);
	porcentajesVacunadosPorGrupoPoblacional(lista,cant_ingresados,V,tc);
	
	
	return 0;
}

void agregarInscripcion(interesados& l[],int tl,int& cant){
	
	cout << "Buenos días, ingrese los datos del interesado :" << endl;
	cout << "DNI: " << endl;
	cin >> l[cant].dni ;
	cin >> ws; 
	cout << "Número de trámite: " << endl;
	getline(cin,l[cant].num_tramite);
	cout << "Sexo(M:masculino,F:femenino): " << endl;
	cin >>l[cant].sexo;
	cout << "Fecha de nacimiento: " << endl;
	cin >> l[cant].fecha_nacimiento.dia >> l[cant].fecha_nacimiento.mes >> l[cant].fecha_nacimiento.ano;
	cout << "Sufre de obesidad?(Sí:1,No:0)" << endl;
	cin >> l[cant].patologias_declaradas.obesidad;
	cout << "Sufre de diabetes?(Sí:1,No:0)" << endl;
	cin >> l[cant].patologias_declaradas.diabetes;
	cout << "Sufre de enfermedades cardiovasculares?(Sí:1,No:0)" << endl;
	cin >> l[cant].patologias_declaradas.enfermedad_cardio;
	cout << "Indique a cual de los siguientes grupos pertenece: 60 años o más(0),personal de salud(1), docentes y auxiliares(2),entre 18 y 59 años(3):"<< endl;
	cin >> l[cant].grupo_poblacional;
	cant++;
}
void borrarInscripto(interesados& l[],int tl,int& cant){
	cant--;
};
void existeDuplicado(interesados l[],long int tl){
	for(int i = 0; i < tl; i++){
		int j = i+1;
		do{
			if(l[i].dni == l[j].dni){
				cout << l[i].dni << endl;
				j = -1;
			}else{
				j++;
			}
		} while(j>0);
	}
}
void cargarVacunados(long int v[],int tv){
	for(int i = 0; i < tv; i++){
		cin >> v[i];
	}
}
void porcentajesVacunadosPorGrupoPoblacional(interesados l[],int tl,long int v[],int tv){
	int cg1,cg2,cg3,cg4;
	for(int i = 0; i < tl; i++){
		
		
	}
}


