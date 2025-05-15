/*Escribe un programa que defina un vector de números y encuentre el elemento más pequeño del vector.*/
#include<iostream>
using namespace std;
int main(){
    int x;
    int menor;
    cout<<"ingrese la cantidad de elementos en el arreglo: " ; cin>>x;
    int array[x];
    for (int i = 0; i < x; i++){
        cout<<"ingrese los numeros del array: "; cin>>array[i];
        if(array[i] < menor){
            menor = array[i];
        }
    }
    for (int j = 0; j < x; j++){
        cout<<"Los numeros del arreglo son: "<<array[j]<<endl;
    }
    cout<<"el numero menor es: "<<menor<<endl;
    return 0;
}