//Escriba un programa que calcule el valor de: 1+3+5+...+2n-1
#include<iostream>
using namespace std;
int main(){
    int n, total = 0;
    cout<<"ingrese la cantidad de elementos a calcular"<<endl;
    cin>>n;
    for(int i = 1; i <= 2*n-1; i+=2){
        total += i;
        cout<<i<<endl;
    }
    cout<<"\nEl total es: "<<total<<endl; 

    return 0;
}