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

using namespace std;

int main(){
    
}

/*
este codigo que esta documentado es una explicacion por parte de 
ChatGPT a su vez arreglado por mi parte, ya que no logro entender 
el problema que se esta especificando 


por favor intente con Aa1#Bb2$ o algo parecido 
para que la contraseña quede bien guardada o sino 
arrojara un error constantemente hasta que la ingrese
*/

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
    vector<string> usuarioYContrasena(2);
    string contrasenaTemp;

    cout << "Ingrese su nombre de usuario: ";
    getline(cin, usuarioYContrasena[0]);

    // Solicitar contraseña hasta que sea válida
    do {
        cout << "\nCree una contraseña de 8 caracteres con al menos:\n";
        cout << "- Una letra mayúscula\n";
        cout << "- Una letra minúscula\n";
        cout << "- Un número\n";
        cout << "- Un carácter especial (!, #, $, %, &, -, _, =)\n";
        cout << "Ingrese su contraseña: ";
        getline(cin, contrasenaTemp);

        if (!validarContrasena(contrasenaTemp)) {
            cout << "❌ Contraseña inválida. Intenta de nuevo.\n\n";
        }
    } while (!validarContrasena(contrasenaTemp));

    usuarioYContrasena[1] = contrasenaTemp; // Guardar contraseña válida
    cout << "✅ Contraseña guardada exitosamente.\n\n";

    // Verificación de contraseña
    string intento;
    char opcion;

    do {
        cout << usuarioYContrasena[0] << ", ingresa tu contraseña para verificar: ";
        getline(cin, intento);

        if (intento == usuarioYContrasena[1]) {
            cout << "🔓 Acceso concedido. Bienvenido " << usuarioYContrasena[0] << "!\n";
            break;
        } else {
            cout << "❌ Contraseña incorrecta. ¿Deseas intentarlo de nuevo? (s/n): ";
            cin >> opcion;
            cin.ignore();
        }
    } while (opcion == 's' || opcion == 'S');

    cout << "Programa finalizado.\n";
    return 0;
}