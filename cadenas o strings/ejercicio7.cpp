/*Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza 
por la letra A, convertir su nombre a minúsculas, caso contrario no convertirlo*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char nombre[20];
    cout<<"ingrese su nombre en MAYUSCULA: ";cin.getline(nombre,20,'\n');
    for(int i = 0; nombre[i]; i++){
        nombre[i] = tolower(nombre[i]);
    }
    cout<<nombre<<"\n"; 
    return 0;
}