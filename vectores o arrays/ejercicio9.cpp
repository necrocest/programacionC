/*Realiza un programa que defina dos vectores de 
caracteres y después almacene el contenido de ambos 
vectores en un nuevo vector, situando en primer lugar 
los elementos del primer vector seguido por los elementos 
del segundo vector. Muestre el contenido del nuevo vector en la salida estándar.*/

#include<iostream>
using namespace std;
int main(){
    char letras[5] = {'a','b','c','d','e'};
    char letras1[5] = {'f','g','h','i','j'};
    char letras2[10];
    /*copiamos los elementos del vectyor1 (letras), al nuevo vector (letras2)*/
    /*por eso se inicializa desde 0 a 5*/
    for( int i = 0; i < 5; i++){
        letras2[i] = letras[i];
    }
    /*copiamos los elementos del vectyor1 (letras1), al nuevo vector (letras2)*/
    /*por eso se inicializa desde 6 a 10*/
    for( int i = 5; i < 10; i++){
        letras2[i] = letras1[i - 5]; /*debido a que letras1 solo posee 5 elementos*/
    }
    for(int i = 0; i < 10; i++){
        cout<<"los elementos del nuevo vector son: "<<letras2[i]<<endl;
    }
    return 0;
}