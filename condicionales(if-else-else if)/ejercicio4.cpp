//Comprobar si un número digitado por el usuario es positivo o negativo
#include<iostream>
using namespace std;
int main (){
    float a;
    cout<<"ingrese un numero para comprobar si es positivo, negativo o 0"<<endl;
    cin>>a;
    if(a==0){
        cout<<"es zero"<<endl;
    }    
    switch (a<0){
        case 1:
        cout<<"es negativo"<<endl;
        break;
    default:
        cout<<"es positivo"<<endl;
        break;
    }
    return 0;
}