//Escriba un programa que lea de la entrada estándar un carácter e indique en la 
//salida estándar si el carácter es una vocal minúscula, es una vocal mayúscula o no es una vocal.
#include<iostream>
using namespace std;
int main(){
    char letra;
    cout<<"digite una leta"<<endl;
    cin>>letra;
    switch (letra ){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<letra<<" es vocal minucaula"<<endl;
    break;
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': cout<<letra<<" es vocal mayuscula"<<endl;
    break;
    default: cout<<letra<<" no es vocal"; break;
    }

    return 0;
}