/*Escribe un programa que defina un vector de 
números y muestre en la salida estándar el vector 
en orden inverso—del último al primer elemento.*/
#include<iostream>
using namespace std;
int main(){
    int vector[5] = {1,2,3,4,5};
    /*se declara i = 4 porque es la dimension del vector*/
    for (int i = 4; i>=0; i--){ /*i -- debido a que quiero que disminuya*/
        cout<<"la inversa es: "<<vector[i]<<endl;    
    }
    
    return 0;
}