#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, suma = 0, multiplicacion = 0, resta = 0, division = 0;

    cout << " Programa que sume, reste, divida y multiplique ";
    cout << endl;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout <<endl;

    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << endl;

    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = a / b;

    cout << "La suma de a + b es :" << suma;
    cout << endl;
    cout << "La resta de a - b es :" << resta;
    cout << endl;
    cout << "La multiplicacion de a * b es :" << multiplicacion; 
    cout << endl;
    cout << "La division de a / b es :" << division;
    return 0;
}
