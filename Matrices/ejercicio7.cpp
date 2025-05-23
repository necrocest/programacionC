/*Realice un programa que lea una matriz de 3x3 y cree su matriz 
traspuesta. La matriz traspuesta es aquella en la que la columna 
i era la fila i de la matriz original.

|1 2 3|       |1 4 7|
|4 5 6|  -->  |2 5 8|
|7 8 9|       |3 6 9|*/
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    int x,y, dato = 0;
    cout<<"introduzca el numero de filas: "; cin>>x;
    cout<<"introuzca el numero de columnas; ";  cin>>y;
    int matriz[x][y];
    srand(time(NULL));
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            /*llenamos la matriz*/
            dato = 1+rand()%(100);/*generar el numero de 1 a 100*/
            matriz[i][j]=dato;
        }
    }
    cout<<"matriz transpuesta"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            /*imprimos matris original*/
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    cout<<"matriz transpuesta"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            /*imprimos matris transpuesta*/
            cout<<" "<<matriz[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}