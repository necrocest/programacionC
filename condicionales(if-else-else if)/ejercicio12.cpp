//Ejercicio 12: Hacer un menú que considere las siguientes opciones:
//Caso 1: Cubo de un numero
//Caso 2: Numero par o impar
//Case 3: salir.
#include <iostream>
using namespace std;
void mensaje(){
    cout<<"1. Calcular el cubo de un numero"<<endl;
    cout<<"2. numero par o impar"<<endl;
    cout<<"3. salir"<<endl;
}
int main (){
    int opcion, b, a, par_impar, cubo;
    mensaje();
    cin>>opcion;
    if(opcion==1){
        cout<<"Ingrese un numero: "<<endl;
        cin>>a;
        cubo = a*a*a;
        cout<<"el cubo del numero es: "<<cubo<<endl;
    }else if( opcion == 2){
        cout<<"Ingrese un numero: "<<endl;
        cin>>b;
        par_impar = b % 2;
        if (par_impar == 0){
            cout<<"es par"<<endl;
        }else{
            cout<<"es impar"<<endl;
        }
    }
    

    return 0;
}