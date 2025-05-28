/*Hacer un programa que pida al usuario que digite una cadena de caracteres, 
luego verificar la longitud de la cadena, y si ésta supera a 10 caracteres 
mostrarla en pantalla, caso contrario no mostrarla.*/

#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char frase[50];
    cout<<"introduzca la frase: "<<endl;
    cin.getline(frase,50,'\n');
    /*funcion strlen para contar caracteres*/
    if(strlen(frase)<10){
        cout<<"esta dentro del rango"<<endl;
        cout<<frase;
    }else{
        cout<<"no esta en el rango"<<endl;
    }
    return 0;
}