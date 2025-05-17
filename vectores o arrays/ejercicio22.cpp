/* Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo 
multiplicados por 2 y muestre el segundo arreglo.*/
#include<iostream>
using namespace std;
int main(){
    int numero[5], numero2[5];
    for(int i = 0; i < 5; i++){
        cout<<"ingrese los numeros "<<i<<": " ; cin>>numero[i];
    }
    for(int j = 0; j < 5; j++){
        numero2[j] = numero[j] * 2;
    }
    for(int b = 0; b < 5; b++){
        cout<<numero2[b]<<endl;
    }
    return 0;
}