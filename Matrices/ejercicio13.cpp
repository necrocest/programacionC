/*se tiene una fila cuadratica de n columnas y filas encontar el elemento mayor de cada fila y de cada columna e imprimirlas*/
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
    for(int j = 0; j < filas; j++){   
            if(matriz[filas -1][j] > mayor){
                mayor = matriz[filas - 1][j];
            }
    }
    int fila_del_medio = filas/2;
    for(int j = 1; j < columnas; j++){
            if(matriz[fila_del_medio][j] > mayor1){
                mayor1 = matriz[fila_del_medio][j];
            }
    }
    for(int j = 1; j < columnas; j++){
            if(matriz[0][j] > mayor2){
                mayor2 = matriz[0][j];
            }
    }
    /*columnas*/

    for(int i = 0; i < columnas; i++){
            if(matriz[i][columnas - 1] > mayor3){
                mayor3 = matriz[i][columnas - 1];
            }
    }
    int columnas_del_medio = columnas/2;
    for(int i = 1; i < columnas; i++){
            if(matriz[i][columnas_del_medio] > mayor4){
                mayor4 = matriz[i][columnas_del_medio];
            }
    }
    for(int i = 1; i < columnas; i++){
            if(matriz[i][columnas] > mayor5){
                mayor5 = matriz[i][0];
            }
    }
    cout<<"mayores de las filas"<<endl;
    cout<<mayor<<endl;
    cout<<mayor1<<endl;
    cout<<mayor2<<endl;
    cout<<"mayores de las columnas"<<endl;
    cout<<mayor3<<endl;
    cout<<mayor4<<endl;
    cout<<mayor5<<endl;
    return 0; 
}
