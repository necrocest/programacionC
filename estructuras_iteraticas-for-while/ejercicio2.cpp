//Realice un programa que lea de la entrada estándar números 
//hasta que se introduzca un cero. En ese momento el programa 
//debe terminar y mostrar en la salida estándar el número de 
//valores mayores que cero leídos.
#include<iostream>
using namespace std;
int main(){
    int a;
    while(a != 0){
        cout<<"ingrese un numero"<<endl;
        cin >> a;
    }
    return 0;
}

