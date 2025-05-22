/*Realiza un programa que defina una matriz de 3x3 y 
escriba un ciclo para que muestre la diagonal principal 
de la matriz.*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"ingrese el numero de filas: "; cin>>x;
    cout<<"ingresar el numero de columnas: "; cin>>y;
    int matriz[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<"ingrese los numeros de la fila ["<<i<<"] y la columna ["<<j<<"] "<<endl;
            cin>>matriz[i][j];
        }
    }
    cout<<"matriz original"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"mostrar la diagonal"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(i==j){
                cout<<" "<<matriz[i][j]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}