#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int a;

    cout<<"ingresar un numero por favor"<<endl;
    cin>>a;
    // validamos si un numero es positivo o negativo con un if
    if(a<0){
        cout<<"el numero ingresado es negativo"<<endl;
        cout<< a ;
    }else{
        cout<<"el numero ingresado es positivo"<<endl;
        cout<<a;
    }
}