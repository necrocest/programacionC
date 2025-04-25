//Simular un cajero automatico con saldo inicial de 1.000
// que hace un cajero, se puede deposotar, retirar, pide datos y guarda contraseña
#include<iostream>
#include<string>
using namespace std;
void mensaje(){
    cout<<"Escoga una opcion: "<<endl;
    cout<<"1. Depositar"<<endl;
    cout<<"2. Retirar"<<endl;
    cout<<"3. volver al menu"<<endl;
    cout<<"4. Salir"<<endl;
}
int main(){
    int opcion; 
    float saldo_inicial=1000, saldo_final, saldo_final1;
    int cedula;
    float x; //cantida a introducir o retirar
    string nombre;
    cout<<"*****************"<<endl;
    cout<<"cajero automatico"<<endl;
    cout<<"**********"<<endl;
    cout<<"introduzca su hombre"<<endl;
        cin>>nombre;
    cout<<"introduzca su cedula"<<endl;
        cin>>cedula;
    cout<<"Hola señor "<<nombre<<" con cedula: "<<cedula<<endl;
    mensaje();
        cin>>opcion;
    if(opcion == 1){
        cout<<"cuanto desea depositar"<<endl;
        cin>>x;
        saldo_final = saldo_inicial +  x;
        cout<<"dinero en el cajero: "<<saldo_final<<endl;
        cin>>opcion;
    }else if(opcion==2){
        cout<<"cuanto desea retirar"<<endl;
        cin>>x;
        saldo_final1 = saldo_inicial - x;
        cout<<"dinero en el cajero: "<<saldo_final1<<endl;
        cin>>opcion;
    }
    return 0;
}