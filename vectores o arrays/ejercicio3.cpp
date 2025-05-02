/*Escribe un programa que lea de la entrada estándar un 
vector de números y muestre en la salida estándar los 
números del vector con sus índices asociados.*/

#include<iostream>
using namespace std;
int main(){
    int vector[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout<<"en el indice: "<<i<<vector[5]<<endl;
    }
    return 0;
}