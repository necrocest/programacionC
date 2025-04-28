//Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales).
#include<iostream>
using namespace std;
int main(){
    int x, suma = 0, factorial = 1;
    cout<<"la suma de cuantos factoriales desea conocer"<<endl;
    cin>>x;
    for(int i = 1; i <= x; i++){
        factorial *=i;
        suma += factorial;
    }
    cout<<factorial<<endl;
    cout<<suma<<endl;
    return 0;
}