/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo 
y copiar todo su contenido hacia otro arreglo de caracteres.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char frase[100], frase2[100];
    cout<<"introduza la frase: ";cin.getline(frase,100,'\n');
    /*comando strcpy(donde se quiere copiar, lo que se quiere copiar)*/
    strcpy(frase2,frase);
    cout<<frase2<<"\n";
    return 0;
}