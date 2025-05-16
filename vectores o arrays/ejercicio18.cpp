/*Realiza un programa que determine si un vector de enteros es un palíndromo 
(es decir, se lee igual de izquierda a derecha que de derecha a izquierda).*/ /*realizar un vector*/
#include<iostream>
using namespace std;
int main(){
    int numero, digito, invertido;
    cout<<"Ingrese el numero maximo 5 digitos"<<endl;
    cin>>numero;
    if(numero<0){
        cout<<"No es palindromo"<<endl;
    }else if(numero < 10){
        cout<<"Es palindromo"<<endl;
    }else if(numero < 100){
        //para tomar el primero y el ultimo digito del numero
        if (numero / 10 == numero % 10){
            cout<<"Es palindromo"<<endl;
        }else{
            cout<<"no es palindromo"<<endl;
        }
    }else if(numero < 1000){
        //se divide entre 100 para tomar el primer digito
        if(numero / 100 == numero % 10){
            cout<<"es palindromo"<<endl;
        }
    }else if(numero < 10000){
        //aqui vamos unidad por unidad
        int digito1 = (numero/1000) % 10;
        int digito2 = (numero/100) % 10;
        int digito3 = (numero/10) % 10;
        int digito4 = numero % 10;
        if(digito1 == digito2 && digito3 == digito4){
            cout<<"Es palindromo"<<endl;
        }else{
            cout<<"No es palindromo"<<endl;
        }
    }else if(numero<100000){
        int dig1 = numero / 10000;
        int dig2 = (numero / 1000) % 10;
        int dig3 = (numero / 100) % 10;
        int dig4 = (numero / 10) % 10;
        int dig5 = numero % 10;
        if(dig1 == dig2 && dig3 == dig4){
            cout<<"Es palindromo"<<endl;
        }else{
            cout<<"No es palindromo"<<endl;
        }

    }
    
    return 0;
}