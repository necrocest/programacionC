/*Convertir dos cadenas de minúsculas a MAYUSCULAS. 
Compararlas, y decir si son iguales o no.*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char palabra1[20];
    char palabra2[20];
    cout<<"ingrese sus palabras: ";
    cin.getline(palabra1,20,'\n');
    cin.getline(palabra2,20,'\n');
    /*convertir en mayusculas*/
    for(int i = 0; palabra1[i];i++){
        palabra1[i]=toupper(static_cast<unsigned char>(palabra1[i]));
    }
    /*convertir en mayuscula palabra 2*/
    for(int i = 0; palabra2[i];i++){
        palabra2[i]=toupper(static_cast<unsigned char>(palabra2[i]));
    }
    cout<<palabra1<<"\n";
    cout<<palabra2<<"\n";
    // Comparar las palabras convertidas
    if (strcmp(palabra1, palabra2) == 0) {
        cout << "Las palabras son iguales." << endl;
    } else {
        cout << "Las palabras son diferentes." << endl;
    }
    return 0;
}