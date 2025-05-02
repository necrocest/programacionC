/*Escribe un programa que defina un vector de números 
y calcule la multiplicación acumulada de sus elementos*/
#include<iostream>
using namespace std;
int main(){
    int a;
    int multi = 1; 
    int vector[a];
    cout<<"cuantos elementos desea en el arreglo"<<endl;
    cin>>a;
    for(int i = 0; i < a; i++){
        cout<<"ingrese los elementos del vector"<<endl;
        cin>>vector[i];
        multi *= vector[i];
    }
    cout<<"el total es: "<<multi<<endl;
    return 0;
}