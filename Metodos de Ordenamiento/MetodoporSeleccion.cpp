/*ordenamiento por sleccion: 1. buscar el minimor elemento de la lista*/
/*2. Intercambiar con el primer elemento*/
/*3. Buscar el minimo del resto de la lista*/
/*4. Intercambiar con el segundo*/
/*Y asi sucesivamente*/
#include<iostream>
using namespace std;
int main(){
    int numeros[5] = {3,5,1,4,2};
    int min, aux;
    for(int i = 0; i < 5; i++){
        min = i;
        for(int j = i+1; j<5; j++){
            if(numeros[j] < numeros[min]){
                min = j; /*pra seleccionar el menor elemento del arreglo*/
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }
    cout<<"Ascendente"<<endl;
    for(int i = 0; i < 5; i++){
        cout<<numeros[i]<<" ";
    }
    cout<<"\nDescendente"<<endl;
    for(int i = 4; i >= 0; i--){
        cout<<numeros[i]<<" ";
    }
    cout<<"\n";
    return 0;
}