/*Realice un programa que lea una cadena de caracteres 
de la entrada estándar y muestre en la salida estándar 
cuántas ocurrencias de cada vocal existen en la cadena.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char frase[30];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    cout<<"ingrese una frase: ";cin.getline(frase,30,'\n');
    /*este for se crea para que recorra la frase*/
    for(int i = 0; i < 30; i++){
        switch (frase[i]){
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            default:
            break;
        }
    }
    /*se muestra el contador delas vocales*/
    cout<<"vocales en la frase: "<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"o = "<<o<<endl;
    cout<<"u = "<<u<<endl;
    return 0;
}