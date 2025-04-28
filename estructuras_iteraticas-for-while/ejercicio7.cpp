//Escriba un programa que calcule el valor de: 1+2+3+...+n
#include<iostream>
using namespace std;
int main(){
    int n, suma = 0; 
    cout<<"ingrese un numero: "<<endl;
    cin>>n;
    for(int i = 1; i <= n; i++){ /* <= debido a que quiero que sume hasta el numero que yo use*/
        suma = suma  + i;
    } 
    cout<<suma<<endl;
    return 0;
}