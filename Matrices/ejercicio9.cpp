/*sarrollar un programa que determine si una matriz es simétrica o no.
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/

#include<iostream>
using namespace std;
int main(){
    int filas, columnas;
    char band = 'F';
    cout<<"introduza las filas: "; cin>>filas;
    cout<<"introduza las columnas: "; cin>>columnas;
    int matriz[filas][columnas];
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<"ingrese los numeros de la matriz ["<<i<<"]["<<j<<"]";
        cin>>matriz[i][j];
        }
    }
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    /*se comprueba si es simetrica*/
    if(filas == columnas){
        for(int i = 0; i < filas; i++){
            for(int j = 0; j < columnas; j++){
                if(matriz[i][j] == matriz[j][i]){
                    band = 'V';
                }
            }
        }
    }
    if(band == 'V'){
        cout<<"es simetrica";
    }else{
        cout<<"no es simetrica";
    }
    cout<<"\n";
    return 0;
}