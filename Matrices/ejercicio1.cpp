/*crear una matriz*/

#include<iostream>
using namespace std;
int main(){
    int filas, columnas;
    cout<<"introduzca el numero de filas: "; cin>>filas;
    cout<<"introduzca el numero de columnas: "; cin>>columnas;
    int matriz[filas][columnas];
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"ingrese los numeros de la fila "<<i<<";"<<j<<endl;
            cin>>matriz[i][j];
        }
    }for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}