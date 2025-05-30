/*Pedir al usuario 2 cadenas de caracteres de números, 
uno entero y el otro real, convertirlos a sus respectivos 
valores y por ultimo sumarlos*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char palabra1[20];
    char palabra2[20];
    int entero;
    float floatante;
    cout<<"ingrese una cadena de numeros: "; cin.getline(palabra1,20,'\n');
    cout<<"ingrese la cadena 2: "; cin.getline(palabra2,20,'\n');
    entero = atoi(palabra1);
    floatante = atof(palabra2);
    cout<<"La suma de la cadena de numero es: "<<entero+floatante<<"\n";    
    return 0;
}