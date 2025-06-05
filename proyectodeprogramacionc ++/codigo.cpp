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

            /*validar nombre del titular*/
            cout<<"Ingrese el nombre del titular de la cuenta: "<<endl;
            getline(cin,titulares[totalCuentas], '\n');
            
            /*tipo de cuenta*/
            cout<<"Tipo de cuenta: "<<endl;
            getline(cin,tipoCuenta[totalCuentas],'\n');
            /*se inicia en 0 porque esta recien creada*/
            saldo[totalCuentas] = 0.0;
            /*contador para almacenar las cuentas creadas*/
            totalCuentas++;
            cout<<"cuenta creada exitosamente"<<endl;
        }
    }
    return 0;
}