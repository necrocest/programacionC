//Realice un programa que lea un valor entero y determine si se trata de un número par o impar.
//% para ver el residuo de una division
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Introduzca un numero entero: "<<endl;
    cin>>a;
    int par = a % 2;
    if(par == 0){
        cout<<a<<" es par"<<endl;
    }else{
        cout<<a<<" es impar"<<endl;
    }
    return 0;
}
