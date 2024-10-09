#include <iostream>
#include <string>
using namespace std;

#define tm 1000
#define tv 50
#define tv2 250

//validar,testear, organizar estructura principal para que sea funcional

struct Fecha{
	int dia;
	int mes;
	int ano;
};

struct Paciente{
	string nombre_apellido;
	int dni;
	int edad;
	string obra_social;
	Fecha fecha_ingreso;
};

struct Doc{
	string nombre_apellido;
	char especialidad;
	int cant_pacientes;
	bool activo;
};

struct Internado{
	int habitacion;
	int piso;
	int coddoctor;
	int codpaciente;
};

void ingreso_pacientes(Paciente p[],int tl);
void ingreso_doctores(Doc d[],int tl);
void generar_internacion(Doc d[],int tld,Internado i[],int tli);
int menoresDeEdad(Paciente p[],int tl);
void ordenarPorNombre(Paciente p[],int tl);
void promoverInactivo(Doc d[],int tld, Internado i[], int tli);

int main(int argc, char *argv[]) {
	
	Paciente CodP[tm]={};
	Doc CodD[tv]={};
	Internado CodI[tv2]={};
	
	ingreso_pacientes(CodP,tm);
	ingreso_doctores(CodD,tv);
	generar_internacion(CodD,tv,CodI,tv2);//considerar generar menu para poder decidir que hacer
	cout << "La cantidad de menores es de: " << menoresDeEdad(CodP,tm) << endl;
	ordenarPorNombre(CodP,tm);
	promoverInactivo(CodD,tv, CodI,tv2);
	
	
	return 0;
}
void ingreso_pacientes(Paciente p[],int tl){
	for(int i = 0; i < tl; i++){
		cout << "Buenos días, ingrese los datos del paciente " << i+1 << ":" << endl;
		cout << "Nombre y apellido: " << endl;
		getline(cin,p[i].nombre_apellido);
		cout << "DNI: " << endl;
		cin >> p[i].dni ;
		cout << "Edad: " << endl;
		cin >> p[i].edad;
		cout << "Número de obra social: " << endl;
		cin >> ws; 
		getline(cin,p[i].obra_social);
		cout << "Fecha de ingreso: " << endl;
		cin >> p[i].fecha_ingreso.dia >> p[i].fecha_ingreso.mes >> p[i].fecha_ingreso.ano;
	}
}
void ingreso_doctores(Doc d[],int tl){
	for(int i = 0; i < tl ; i++){
		cout << "Buenos días, ingrese los datos del doctor " << i+1 << ":" << endl;
		cout << "Nombre y apellido: " << endl;
		cin >> ws; 
		getline(cin,d[i].nombre_apellido);
		cout << "Especialidad(G = generalista, T = traumatólogo, O = oculista, P = pediatra): " << endl;
		cin >> d[i].especialidad;
		cout << "Cantidad de pacientes: " << endl;
		cin >> d[i].cant_pacientes;
		cout << "Activo(Sí:1,No:0): " << endl;
		cin >> d[i].activo;
	}
}
void generar_internacion(Doc d[],int tld,Internado i[],int tli){
	int cod,k=0;
	int num;
	char espe;
	cout << "Ingrese código de paciente y especialidad del doctor(G = generalista, T = traumatólogo, O = oculista, P = pediatra):"<<endl;
	cin >> cod >> espe;
	cout << "Ingrese número de internado(0-249):"<<endl;
	cin >> num;
	
	i[num].codpaciente = cod;
	
	do{
		if(espe == d[k].especialidad and d[k].activo == true){
			i[num].coddoctor = k;
			d[k].cant_pacientes += 1;
			cout << "Ingrese habitación y piso en los que se encontrara el paciente: " << endl;
			cin >> i[num].habitacion >> i[num].piso;
			cout << "El paciente ya fue ingresado al sistema: " << endl;
			k = 0;
		}else{
			k++;
		}
	} while(k!=0 and k<tld);
	if( k >= tld ) cout << "No se encontro un doctor con esta especialidad, refiera al paciente a otro hospital." << endl;
}
int menoresDeEdad(Paciente p[],int tl){
	int menores = 0;
	for(int i = 0; i<tl ; i++){
		if(p[i].edad < 18) menores++;
	}
	return menores;
}
void ordenarPorNombre(Paciente p[],int tl){//separar nombre y apellido para acomodar por apellido
	int j,n;
	for( j = 1; j < tl; j++){
		n = j;
		while((n>0) and (p[n].nombre_apellido < p[n-1].nombre_apellido)){
			Paciente aux[1] = p[n];
			p[n] = p[n-1];
			p[n-1] = aux[0];
			n = n-1;
		}
	}
	cout << "Lista de pacientes en orden alfabetico: " << endl;
	for(int i = 0; i<tl; i++){
		cout << p[i].nombre_apellido << endl;
	}
}
void promoverInactivo(Doc d[],int tld, Internado i[], int tli){
	int k,j=0,n=0;
	cout << "Ingrese el código del doctor promovido: " << endl;
	cin >> k;
	
	d[k].activo = false;
	
	while(d[k].cant_pacientes > 0){
		if(d[j].especialidad == d[k].especialidad and d[j].activo == true){
			d[j].cant_pacientes++;
			d[k].cant_pacientes--;
			do{
				if(i[n].coddoctor == k){
					i[n].coddoctor = j;
					n = 0;
				}else{
					n++;
				}
			} while(n!=0);
			
		}
		j++;
		if(j>= tld) j = 0;
	}
}

