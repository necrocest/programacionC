//Escriba un programa que lea dos números y determine cuál de ellos es el mayor.
#include<iostream>
using namespace std;
int main(){
    float a, b;
    cout<<"Para saber cual numero es mayor: "<<endl;
    cout<<"\nIngrese un numero: "; cin >> a;
    cout<<"\nIngrese otro numero"; cin>>b;
    if(a>b){
        cout<<a<<" es el mayor."<<endl;
    }else if (b>a){
        cout<<b<<" es el mayor."<<endl;
    }
}