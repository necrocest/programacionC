//Escriba un programa que lea tres números y determine cuál de ellos es el mayor y cual el menor.
#include<iostream>
using namespace std;
int main(){
    float a, b, c;
    cout<<"Ingrese un numero: "<<endl; 
    cin>>a;
    cout<<"Ingrese otro numero: "<<endl; 
    cin>>b;
    cout<<"Ingrese el ultimo numero"<<endl; 
    cin>>c;
    if(a>b&&a>c){
        cout<<"este es el mayor: "<<a<<endl;
    }else if(b>c&&b>a){
        cout<<"este es el mayor: "<<b<<endl;
    }else if(c>a&&c>b){
        cout<<"este es el mayor: "<<c<<endl;
    }
    if(a<b&&a<c){
        cout<<"este es el menor: "<<a<<endl;
    }else if(b<c&&b<a){
        cout<<"este es el menor: "<<b<<endl;
    }else if(c<a&&c<b){
        cout<<"este es el menor: "<<c<<endl;
    }
    
    return 0;
}