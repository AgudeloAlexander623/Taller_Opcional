/*
Realice un programa que calcule el valor que toma la siguiente función para unos valores dados
de x e y: f(x,y) = sqrt(x) / (pow(y,2)-1)
*/

#include <iostream>
#include <cmath>    // Para sqrt y pow
using namespace std;

double calcularFuncion(double x, double y) {
    if (x < 0) {
        cout << "Error: La raíz cuadrada de un número negativo no está definida en los reales." << endl;
        return NAN;
    }

    double denominador = pow(y, 2) - 1;
    if (denominador == 0) {
        cout << "Error: División por cero. El denominador (y^2 - 1) no puede ser 0." << endl;
        return NAN;
    }

    return sqrt(x) / denominador;
}

int main() {
    double x, y;

    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    double resultado = calcularFuncion(x, y);

    if (!isnan(resultado)) {
        cout << "El resultado de f(x, y) es: " << resultado << endl;
    }

    return 0;
}
