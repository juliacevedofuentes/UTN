#include <iostream>
#include <iomanip>
using namespace std;

double calcularPeaje(int,int,double);

int main(int argc, char *argv[]) {
	int tipoVehiculo, cant;
	cout << "Ingrese 1 para auto, 2 para camioneta y 3 para camión. Luego ingrese cuantas veces pasa por el peaje:" << endl;
	cin >> tipoVehiculo >> cant;
	cout << "El costo total de peaje para el vehículo es de: $" << calcularPeaje(tipoVehiculo,cant,0) << endl;
	return 0;
}

double calcularPeaje(int tipoVehiculo, int veces, double costoTotal = 0) {
	double costoBase = 0;
	if (tipoVehiculo == 1) { // Autos
		costoBase = 100;
	} else if (tipoVehiculo == 2) { // Camionetas
		costoBase = 150;
	} else if (tipoVehiculo == 3) { // Camiones
		costoBase = 200;
	}
	
	costoTotal += costoBase;
	cout << fixed << setprecision(2) << endl;
	cout << "Vehiculo atravesando el tunel por " << veces << "ra vez. Costo total: $" << fixed << costoTotal << endl;
	
	if (veces > 1) {
		double descuento = costoTotal * 0.1; 
		cout << fixed << setprecision(2) << endl;
		cout << "Descuento aplicado: $" << descuento << endl;
		return calcularPeaje(tipoVehiculo, veces - 1, costoTotal - descuento);
	}
	return costoTotal;
} 
