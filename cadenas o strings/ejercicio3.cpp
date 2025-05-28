/*Pedir al usuario que digite 2 cadenas de caracteres, 
e indicar si ambas cadenas son iguales, en caso de no 
serlo, indicar cuál es mayor alfabéticamente.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char frase1[50], frase2[50];
    cout<<"frase 1: " ; cin.getline(frase1, 50, '\n');
    cout<<"frase 2: " ; cin.getline(frase2, 50, '\n');
    if(strlen(frase1) == strlen(frase2)){
        cout<<"same size";
    }else if (strlen(frase1) > strlen(frase2)){
        cout<<"es mayor la frase: "<<frase1;
    }else{
        cout<<"es mayor la frase: "<<frase2;
    }
    return 0;
}