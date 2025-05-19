/*Desarrolla un programa que ordene un array de números en orden ascendente usando el método de la burbuja.
Ejemplo:
Entrada: [5, 3, 8, 1] → Salida: [1, 3, 5, 8].*/
#include<iostream>
using namespace std;
int main(){
    int array[4] = {3, 2, 1, 4};
    int i, j, a, b, aux = 0;
    for(i = 0; i < 4; i++){
        for(j = 0; j< 4; j++){
            /*si numero actual mayor que numero siguiente*/
            if(array[j] > array[j + 1]){
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            };
        };
    };
    cout<<"De manera ascendente: "<<endl;
    for(a = 0; a < 4; a++){
        cout<<array[a]<<" ";
    };
    cout<<"Manera descendente: "<<endl;
    for(b = 4; b >= 0; b--){
        cout<<array[b]<<" ";
    };
    return 0;
}