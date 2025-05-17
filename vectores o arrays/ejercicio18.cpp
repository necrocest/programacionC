/*Realiza un programa que determine si un vector de enteros es un palíndromo 
(es decir, se lee igual de izquierda a derecha que de derecha a izquierda).*/ /*realizar un vector*/
#include<iostream>
using namespace std;
int main(){
    int digito, invertido;
    int x;
    cout<<"cuantos numeros desea que se analicen: " ,cin>>x;
    int array[x];
    for(int i = 0; i < x; i++){
    cout<<"Ingrese el numero maximo 5 digitos"<<endl;
    cin>>array[i];
    }
    for(int j = 0; j < x; j++){
    if(array[j]<0){
        cout<<array[j]<<" No es palindromo"<<endl;
    }else if(array[j] < 10){
        cout<<array[j]<<"Es palindromo"<<endl;
    }else if(array[j] < 100){
        //para tomar el primero y el ultimo digito del numero
        if (array[j] / 10 == array[j] % 10){
            cout<<array[j]<<" Es palindromo"<<endl;
        }else{
            cout<<array[j]<<" no es palindromo"<<endl;
        }
    }else if(array[j] < 1000){
        //se divide entre 100 para tomar el primer digito
        if(array[j]  / 100 == array[j]  % 10){
            cout<<array[j]<<" es palindromo"<<endl;
        }
    }else if(array[j]  < 10000){
        //aqui vamos unidad por unidad
        int digito1 = (array[j] /1000) % 10;
        int digito2 = (array[j] /100) % 10;
        int digito3 = (array[j] /10) % 10;
        int digito4 = array[j]  % 10;
        if(digito1 == digito2 && digito3 == digito4){
            cout<<array[j]<<" Es palindromo"<<endl;
        }else{
            cout<<array[j]<<" No es palindromo"<<endl;
        }
    }else if(array[j] <100000){
        int dig1 = array[j]  / 10000;
        int dig2 = (array[j]  / 1000) % 10;
        int dig3 = (array[j]  / 100) % 10;
        int dig4 = (array[j]  / 10) % 10;
        int dig5 = array[j]  % 10;
        if(dig1 == dig2 && dig3 == dig4){
            cout<<array[j]<<" Es palindromo"<<endl;
        }else{
            cout<<array[j]<<" No es palindromo"<<endl;
        }

    }
    }
    return 0;
}