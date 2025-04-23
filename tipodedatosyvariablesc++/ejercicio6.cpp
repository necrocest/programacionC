//Find the ASCII value of a character. 
//para saber el valor ascii de un caracter en c++ es con el comando (int)
#include<iostream>
using namespace std;
int main(){
    char letra; 
    cout<<"ingrese una letra: "<<endl;
    cin>>letra;
    cout<<"el valor ascii de su caracter es: "<<(int)letra<<endl;
    return 0;
}