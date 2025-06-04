/* mirar el mayor de las filas y columnas*/
#include<iostream>
using namespace std;
int main(){
    int filas;
    int columnas;
    int mayor = 0, mayor1 = 0, mayor2 = 0;
    int  mayor3 = 0, mayor4 = 0, mayor5 = 0;
    cout<<"Ingrese el numero de filas "; cin>>filas;
    cout<<"ingrese el numero de columnas "; cin>>columnas;
    int matriz[filas][columnas];
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"ingrese los numeros en la fila ["<<i<<"] y columnas ["<<j<<"]";
            cin>>matriz[i][j];
        }
    }
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    /*filas*/
    for(int i = 0; i < filas; i++){
        int mayor = matriz[i][0];
        for(int j = 0; j < columnas; j++){
            if(matriz[i][j] > mayor){
                mayor = matriz[i][j];
            }
        }
        
        cout<<"mayores de las filas"<<i<<" "<<mayor<<endl;
    }
    /*columnas*/
    for(int i = 0; i < filas; i++){
        int mayor = matriz[0][i];
        for(int j = 0; j < columnas; j++){
            if(matriz[j][i] > mayor){
                mayor1 = matriz[j][i];
            }
        }
        cout<<"mayores de las columnas"<<i<<" "<<mayor1<<endl;
    }
    return 0; 
}
