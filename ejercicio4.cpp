/*
Realice un programa que lea de la entrada estándar los siguientes datos de una persona:
• Edad: dato de tipo entero.
• Sexo: dato de tipo carácter.
• Altura en metros: dato de tipo real.
• Tras leer los datos, el programa debe mostrarlos en la salida estándar
*/

#include<iostream>
#include<string.h>
#include<cmath>

using namespace std;

struct Datos{
    string nombre,sexo;
    int edad;
    float altura;
}

void datos(string& nombre, int& edad, char& sexo, float& altura){
    cout<<"Ingresar el nombre, edad, sexo y altura de un estudiante: "<<endl;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Edad: ";
    cin>>edad;
    cout<<"Sexo con el que se identifica: ";
    cin>>sexo;
    cout<<"Altura: ";
    cin>>altura;
}

int main(){
    string nombre,sexo;
    int edad;
    float altura;


    cout<<"Se llama: "<<nombre<<endl;
    cout<<"Tiene: "<<edad<<" de edad"<<endl;
    cout<<"Se identifica como: "<<sexo<<endl;
    cout<<"Mide: "<<altura<<endl;
}