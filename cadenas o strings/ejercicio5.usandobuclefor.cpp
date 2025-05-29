/*Hacer un programa que determine si una palabra es palíndroma*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char palabra [20];
    char palabra1 [20];
    cout<<"introduzca una palabra: "; 
    cin.getline(palabra,20,'\n');
    strcpy(palabra1, palabra);
    /*inicializamos "len" entero para poder saber la dimension de la palabra
    y con eso poder inicializar el bucle for*/
    int len = strlen(palabra1);
    /*se inicializa len/2 porque solo se necesita analizar la mitad de la palabra*/
    for(int i = 0; i < len / 2; i++){
        char caracter_actual = palabra1[i]; /*capturar las iteraciones (almacen temporal i)*/
        palabra1[i] = palabra1[len-i-1]; /*se reemplaza el inicio con el final*/
        palabra1[len-i-1] = caracter_actual; /*se reemplaza el fianl con el inicio (se guarda en caracter actual)*/
    }
    cout<<"Palabra invertida: "<<palabra1<<"\n";
    if(strcmp(palabra,palabra1)==0){
        cout<<"la palabra "<<palabra1<<" es palindroma";
    }
    cout<<"\n";
    return 0;
}