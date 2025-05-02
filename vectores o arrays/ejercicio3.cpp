/*Escribe un programa que lea de la entrada estándar un 
vector de números y muestre en la salida estándar los 
números del vector con sus índices asociados.*/

#include<iostream>
using namespace std;
int main(){
    int a;
    int vector[100];
    cout<<"cuantos elementos quiere en el vector"<<endl;
    cin>>a;
    for(int i = 1; i <= a; i++){
        cout<<"ingrese el numero que quiere en el arreglo"<<endl;
        cin>>vector[i];
    }
    for(int j = 1; j <= a ; j++){
        cout<<"en el indice: "<<j<<" esta: "<<vector[j]<<endl;
    }
    return 0;
}