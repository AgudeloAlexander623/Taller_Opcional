#include<iostream>
#include<string.h>

using namespace std;

int main(){

    int anio

    cout<<"Ingresar un año por favor"<<endl;
    cin>>anio

    if(anio % 4 == 0 && anio % 100 !=0 || anio%400==0){
        cout<<"El año es biciesto";
    }else{
        cout<<"El año no es biciesto"; 
    }
}