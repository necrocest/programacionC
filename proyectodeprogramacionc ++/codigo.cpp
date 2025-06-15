#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
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
void menu(){
    cout<<"******MENU PRINCIPAL*******"<<endl;
    cout<<"Opciones: "<<endl;
    cout<<"1. Crear cuenta"<<endl;
    cout<<"2. Listar cuenta"<<endl;
    cout<<"3. Depositar"<<endl;
    cout<<"4. Retirar"<<endl;
    cout<<"5. Tranferir"<<endl;
    cout<<"Presiona 0 para salir"<<endl;
}
void crear_cuenta(){
    cout<<"****Crear cuenta****"<<endl;
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
        break;
        }
    }
    if(existe){
        cout<<"La cuenta ya existe"<<endl;
    }
    numeroCuentas[totalCuentas] = nuevoNumero;
    /*validar nombte del titular*/
    cout<<"Ingrese el nombre del titular de la cuenta: ";
    cin.ignore();
    getline(cin,titulares[totalCuentas],'\n');
    /*tipo de cuenta*/
    cout<<"Ingrese el tiepo de cuenta(ahorros o corriente)";
    getline(cin, tipoCuenta[totalCuentas]);
    /*se inicia en 0 porque esta recien creada*/
    saldo[totalCuentas] = 0.0;
    /*contador para almacenar las cuentas creadas*/
    totalCuentas++;
    cout<<"*** Cuenta creada exitosamente :) *** "<<endl;
    cout<<"*** Bienvenido al Banco WFM ***"<<endl;
}
int listar_cuenta(){
    for(int i = 0; i < totalCuentas; i++){
        cout<<"\n";
        cout<<"Nombre del titular: "<<titulares[i];
        cout<<"\nNumero de la cuenta: "<<numeroCuentas[i];
        cout<<"\ntipo de cuenta: "<<tipoCuenta[i];
        cout<<"\nsaldo de la cuenta: "<<saldo[i]<<endl;
        }
    cout<<"\n";
}
void deposito(){
    int numerodecuenta;
    double monto;
    cout<<"Ingrese el numero de cuenta: ";
    cin>>numerodecuenta;
    /*aca validaremos la existencia del numero de cuenta*/
    int indice = -1;
    for(int i = 0; i < totalCuentas; i++){
        if(numeroCuentas[i] == numerodecuenta){
            indice = i;
            break;
        }
    }
    if(indice == -1){
        cout<<"Error, Cuenta no encontrada"<<endl;
    }
    /*depositar*/
    cout<<"Ingrese el monto que quiere Depositar ";
    cin>>monto;
    if(monto > 0){
        saldo[indice] += monto;
        cout<<"Nuevo saldo "<<saldo[indice]<<endl;
    }else{
        cout<<"Monto invalido"<<endl;
        }
    cout<<"\n";               
}
void retirar(){
    int numerodecuenta;
    double monto;
    cout<<"Ingrese el numero de cuenta: ";
    cin>>numerodecuenta;
    /*aca validaremos la existencia del numero de cuenta*/
    int indice = -1;
    for(int i = 0; i < totalCuentas; i++){
        if(numeroCuentas[i] == numerodecuenta){
        indice = i;
        break;
        }
    }
    /*retirar*/
    if(indice == -1){
        cout<<"Error, Cuenta no encontrada"<<endl;
    }
    cout<<"Ingrese el monto que quiere Retirar ";
    cin>>monto;
    if(monto > 0 && monto < saldo[indice]){
        saldo[indice] -= monto;
        cout<<"Nuevo saldo "<<saldo[indice]<<endl;
    }else{
        cout<<"Monto invalido"<<endl;
    }
    cout<<"\n";   
}
void transferir(){
    /*transferir*/
    int origen, destino;
    int monto;
    cout<<"Ingrese la cuenta de origen "; cin>>origen;
    cout<<"Ingrese la cuenta destino "; cin>>destino;
    cout<<"ingrese el monto "; cin>>monto;
    int indiceOrigen = -1;
    int indiceDestino = -1;
    for(int i = 0; i < totalCuentas; i++){
        if(numeroCuentas[i] == origen){
        indiceOrigen = i;
    }
    if(numeroCuentas[i] == destino){
        indiceDestino = i;
    }
    }
    if(indiceOrigen == -1 || indiceDestino == -1){
        cout<<"Error; alguna de las dos cuentas es invalida"<<endl;
    }
    if(monto <= 0){
        cout<<"Monto insuficiente"<<endl;
    }
    if(saldo[indiceOrigen] < monto){
        cout<<"fondos insuficientes"<<endl;
    }
    /*sumar y restar en el saldo*/
    saldo[indiceOrigen] -= monto;
    saldo[indiceDestino] += monto;
    /*Registrar en la matriz*/
    tranferencia[indiceOrigen][indiceDestino] += monto;
    cout<<"tranferencia exitosa"<<endl; 
}
void matriz_transferencia(){
    cout<<"**Mostrar matriz de transferencia**"<<endl;
    cout<<"\n Origen - Destino";
    /*Encabezados de columnas*/
    for (int i = 0; i < totalCuentas; i++) {
        cout << setw(8) << numeroCuentas[i] << " |";
    }
    /*Línea separadora*/
    cout << "\n" << string(15 + totalCuentas * 10, '-');
    /*mostrar la matriz se transferencia*/
    for(int i = 0; i < totalCuentas; i++){
        cout<<"\n"<<setw(14)<<numeroCuentas[i]<<" |";
        for(int j = 0; j < totalCuentas; j++){
            cout<<setw(8)<<fixed<<setprecision(1)<<tranferencia[i][j]<<" |";
        }
    }
}
int main(){
    int opcion;
    /*controla el bucle principal*/
    bool sistemaActivo = true;
    while(sistemaActivo){
        menu();
        cin>>opcion; 
        if(opcion == 1){    
            crear_cuenta();
        }else if(opcion == 2){
            listar_cuenta();
        }else if(opcion == 3){
            deposito();
        }else if(opcion == 4){
            retirar();
        }else if(opcion == 5){
            transferir();
        }if(opcion == 0){
            sistemaActivo = false;
            cout<<"Salir. Gracias por tu preferencia."<<endl;
            cout<<"Hasta luego."<<endl;
        }
    }
    return 0;
}