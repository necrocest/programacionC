#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    const int maxCuentas = 100;
    /*arrays y matrices iniciales*/
    int numeroCuentas[maxCuentas];
    string titular[maxCuentas];
    double saldo[maxCuentas];
    string tipoCuenta[maxCuentas];
    /*matriz para la tranferencia*/
    double tranferencia[maxCuentas][maxCuentas];
    /*variables de control*/
    int totalCuentas = 0;
    int opcion;
    /*controla el bucle principal*/
    bool sistemaActivo = true;
    while(sistemaActivo){
        cout<<"******MENU PRINCIPAL*******"<<endl;
        cout<<"Opciones: "<<endl;
        cout<<"1. Crear cuenta"<<endl;
        cout<<"2. Listar cuenta"<<endl;
        cout<<"3. Depositar"<<endl;
        cout<<"4. Retirar"<<endl;
        cout<<"5. Tranferir"<<endl;
        cout<<"6. Matriz de transferencia"<<endl;
        cout<<"Presiona 0 para salir"<<endl;
        cin>>opcion; 
        if(opcion == 1){    
            cout<<"crear cuenta"<<endl;
            if(totalCuentas >= maxCuentas){
                cout<<"Ya no se pueden regitrar mas cuentas"<<endl;
            }
        }
    }
    return 0;
}