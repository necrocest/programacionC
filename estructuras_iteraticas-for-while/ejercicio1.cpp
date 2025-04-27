//Realice un programa que solicite de la entrada estándar un entero del 1 al
//10 y muestre en la salida estándar su tabla de multiplicar.
#include<iostream>
using namespace std;
int main(){
    int x;
    int resultado;
    cout<<"ingrese un numero del 1-10"<<endl;
    cin>>x;
    for(int i = 0; i <  10; i++){
        resultado = x * i;
        cout<<"la tabla de "<<x<<" es igual a "<<x<<" * "<<i<<" = "<<resultado<<endl;;
    }
    return 0;
}