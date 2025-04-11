/*
Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Ingrese un numero: ";
	cin >> n;
	int factorial = 1;
	if (n < 0)
	{
		cout << "El factorial no esta definido para numeros negativos." << endl;
		return 1;
	}
	else if (n == 0)
	{
		cout << "El factorial de 0 es: 1" << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++){
		factorial *= i;
	}
	cout << "El factorial de " << n << " es: " << factorial << endl;
	return 0;
}
