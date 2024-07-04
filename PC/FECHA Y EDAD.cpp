#include <iostream>
#include <ctime>
using namespace std;

void SeasonPrint(int,int);
void EdadActual(int,int, int);

int main(int argc, char *argv[]) {
	time_t t = time(nullptr);
	tm* now = localtime(&t);
	
	int day = now->tm_mday;
	int month = now->tm_mon + 1;
	int year = now->tm_year + 1900;
	
	cout << "Fecha actual: " << day << '/' << month << '/' << year << endl;
	
	SeasonPrint(day,month);
	
	EdadActual(day,month,year);
	
	return 0;
}

void SeasonPrint(int a,int b){
	int x = b*100+a;
	if (x >= 321 && x < 621){
		cout << "Esta fecha pertenece al otoño." << endl;
	} else if (x >= 621 && x < 921){
		cout << "Esta fecha pertenece al invierno." << endl;
	} else if (x >= 921 && x < 1221){
		cout << "Esta fecha pertenece a la primavera." << endl;
	} else if (x >= 1221 || x < 321){
		cout << "Esta fecha pertenece al verano." << endl;
	} 
}

void EdadActual(int a,int b,int c){
	int dian,mesn,yearn;
	int diae,mese,yeare;
	cout << "Por favor ingrese su día, mes y año de nacimiento en ese orden: " << endl;
	cin >> dian >> mesn >> yearn;
	if(dian<a){
		if(mesn<b){
			yeare = c - yearn;
			mese = (mesn+12) - b - 1;
			diae = (dian+30)-a; 
			cout << "Edad actual: " << diae << " días, " << mese << " meses y " << yeare << " años." << endl;
		}else if (mesn>=b){
			yeare = c - yearn -1;
			mese = mesn - b - 1;
			diae = (dian+30)-a; 
			cout << "Edad actual: " << diae << " días, " << mese << " meses y " << yeare << " años." << endl;
		}
	} else if(dian>=a){
		if(mesn<b){
			yeare = c - yearn;
			mese = (mesn+12) - b;
			diae = dian-a; 
			cout << "Edad actual: " << diae << " días, " << mese << " meses y " << yeare << " años." << endl;
		}else if (mesn>=b){
			yeare = c - yearn -1;
			mese = mesn - b;
			diae = dian-a; 
			cout << "Edad actual: " << diae << " días, " << mese << " meses y " << yeare << " años." << endl;
		}
	}
	
}
