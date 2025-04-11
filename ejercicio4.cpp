#include<iostream>
#include<string.h>
#include<cmath>
#include<vector>
#include<fstream>

using namespace std;

struct datos{
    string nombre,sexo;
    int edad;
    float altura;
};

void datosGuardados(vector(datos) & datos){
    datos datosGuardados;
    cout<<"------Ingresar datos del esudiante------"<<endl;
    cout<<"Nombre: ";
    cin>>datosGuardados.nombre;

    cout<<"Edad: ";
    cin>>datosGuardados.edad;

    cout<<"Sexo o genero con el que se idetifica: ";
    cin>>datosGuardados.sexo;

    cout<<"Estatura";
    cin>>datosGuardados.altura;
}

int main(datosGuardados){
    cout<<"Se llama "<<nombre<<endl;
    cout<<"Tiene "<<edad<<" de edad"<<endl;
    cout<<"Se Identifica con el genero "<<sexo<<endl;
    cout<<"Mide: "<<altura<<"m de altura";
}