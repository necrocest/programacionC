#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    const int maxCuentas = 100;
    /*arrays y matrices iniciales*/
    int numeroCuentas[maxCuentas];
    string titulares[maxCuentas];
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
            int nuevoNumero;
            cout<<"ingrese el numero de cuenta: "; cin>>nuevoNumero;
            /*validar numero de cuenta*/
            bool existe = false;
            for(int i = 0; i < totalCuentas; i++){
                if(numeroCuentas[i] == nuevoNumero){
                    existe = true;
                }
            }
            if(existe){
                cout<<"La cuenta ya existe"<<endl;
            }
            numeroCuentas[totalCuentas] = nuevoNumero;

            /*validar nombte del titular*/
            cout<<"Ingrese el nombre del titular de la cuenta: "<<endl;
            cin.ignore();
            getline(cin,titulares[totalCuentas],'\n');
            /*tipo de cuenta*/
            cout<<"Ingrese el tiepo de cuenta(ahorros o corriente)"<<endl;
            getline(cin, tipoCuenta[totalCuentas]);
            /*se inicia en 0 porque esta recien creada*/
            saldo[totalCuentas] = 0.0;
            /*contador para almacenar las cuentas creadas*/
            totalCuentas++;
            cout<<"Cuenta creada exitosamente"<<endl;
            cout<<"Bienvenido al Banco WFM"<<endl;
        }else if(opcion == 2){
            /*Listar cuentas*/
            for(int i = 0; i < totalCuentas; i++){
                cout<<"\n";
                cout<<"Nombre del titular: "<<titulares[i];
                cout<<"\nNumero de la cuenta: "<<numeroCuentas[i];
                cout<<"\ntipo de cuenta: "<<tipoCuenta[i];
                cout<<"\nsaldo de la cuenta: "<<saldo[i]<<endl;
            }
            cout<<"\n";
        }else if(opcion == 3){
            
        }
        
    }
    return 0;
}