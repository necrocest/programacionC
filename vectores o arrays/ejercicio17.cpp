/*Desarrolle un programa que lea un vector de enteros y cuente cuántos números pares contiene.*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ingresa la cantidad de elementos en el arreglo: "; cin>>x;
    int array[x];
    for(int i = 0; i < x; i++){
        cout<<"ingrese los numeros del arreglo: "; cin>>array[i];
    }
    for(int j = 0; j < x; j++){
        if(array[j]%2 == 0){
            cout<<"En la posicion "<<j<<" se encuentra el numero "<<array[j]<<endl;
        }
    }
    return 0;
}