//Escribe un programa que lea de la entrada estándar tres números. 
//Después debe leer un cuarto número e 
//indicar si el número coincide con alguno de los introducidos con anterioridad.
#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cout<<"ingrese un numero: "<<endl;
    cin>>a;
    cout<<"ingrese un numero: "<<endl;
    cin>>b;
    cout<<"ingrese un numero: "<<endl;
    cin>>c;
    cout<<"ingrese un a comparar numero: "<<endl;
    cin>>d;
    if(a!=d&&b!=d&&c!=d){
        cout<<"No Hay Coincidencias"<<endl;
    }else{
        cout<<"hay coinciencias"<<endl;
    }
    return 0;
}