#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; 

int main(int argc, char** argv) {
	//Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
	int descuento = 0;
	double calculoDescuento = 0;
	double calculoImpuesto = 0;
	char estaExcenta;
	
    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    
    cout << "Ingrese el descuento (0, 10, 15, 20 )";
    cin >> descuento;
    
    cout << "Es factura excenta? Escriba S o N: ";
    cin >> estaExcenta;
    
	//proceso
	if (estaExcenta == 'n' || estaExcenta == 'N'){
		calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
	} else {
		if (estaExcenta == 's' || estaExcenta == 'S')
		calculoImpuesto = 0;
		}
	
	calculoDescuento = (subtotal * descuento) / 100;
   
	total = subtotal - calculoDescuento + calculoImpuesto;
	
    //salida
    cout << endl;
    cout << "Total a pagar es: " << total;
	
	
	return 0;
}
