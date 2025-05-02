/*Escribe un programa que defina un vector de números y calcule la suma de sus elementos.*/
#include<iostream>
using namespace std;
int main(){
    int a, suma = 0;
    int vector[a];
    cout<<"ingrese la cantidad de elementos en el vector"<<endl;
    cin>>a;
    for(int i = 0; i < a; i++){
        cout<<"ingrese los numeros del arreglo"<<endl;
        cin>>vector[i];
        suma = suma + vector[i];
    }
    cout<<"El total es: "<<suma<<endl;
    return 0;
}