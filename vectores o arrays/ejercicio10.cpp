/*Hacer un programa que lea 5 números en un arreglo, los copie a 
otro arreglo, multiplicado por 2 y muestre el segundo arreglo.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    int b = 0;
    cout<<"ingrese el numero de elementos del array: " ; cin>>a;
    int vector[a];
    int vector1[b];
    for(int i = 0; i < a; i++){
        cout<<"ingrese los lementos del arreglo: " ; cin>>vector[i];
        b++;
    }
    for(int i = 0; i < b; i++){
        vector1[i] = vector[i] * 2;
    }
    for(int j = 0; j < a; j++){
        cout<<vector1[j]<<endl;
    }
    return 0;
}