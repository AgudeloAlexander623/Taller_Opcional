/*
Ejercicio Avanzado: Validar una contraseña con condiciones múltiples. Enunciado: Pide al
usuario una contraseña y verifica que cumpla:
• Longitud mínima de 8 caracteres.
• Al menos una mayúscula, una minúscula, un número y un carácter especial (!@#$%^&*).
*/

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

// Función para validar la contraseña
bool validarContrasena(const string& contrasena) {
    if (contrasena.length() != 8) return false;

    bool tieneMayuscula = false;
    bool tieneMinuscula = false;
    bool tieneNumero = false;
    bool tieneEspecial = false;

    string especiales = "!#$%&-_= ";

    for (char c : contrasena) {
        if (isupper(c)) tieneMayuscula = true;
        else if (islower(c)) tieneMinuscula = true;
        else if (isdigit(c)) tieneNumero = true;
        else if (especiales.find(c) != string::npos) tieneEspecial = true;
    }

    return tieneMayuscula && tieneMinuscula && tieneNumero && tieneEspecial;
}

int main() {
    string contrasena;

    cout << "Ingrese una contraseña de 8 caracteres: ";
    cin >> contrasena;

    if (validarContrasena(contrasena)) {
        cout << "Contraseña válida." << endl;
    } else {
        cout << "Contraseña inválida. Asegúrese de que tenga 8 caracteres, "
             << "incluya al menos una mayúscula, una minúscula, un número y un carácter especial." << endl;
    }

    return 0;
}