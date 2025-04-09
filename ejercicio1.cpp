/*
Verificar si un número es positivo o negativo. Enunciado: Pide al usuario que
ingrese un número e imprime si es positivo, negativo o cero
*/

#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int a;

    cout<<"ingresar un numero por favor"<<endl;
    cin>>a;

    if(a<0){
        cout<<"el numero ingresado es negativo"<<endl;
        cout<< a ;
    }else{
        cout<<"el numero ingresado es positivo"<<endl;
        cout<<a;
    }
}