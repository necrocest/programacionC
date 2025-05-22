/*Hacer una matriz de tipo entera de 2 * 2, llenarla de números 
luego copiar todo su contenido hacia otra matriz.*/
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"introduce el numero de filas: "; cin>>x;
    cout<<"introduce el numero de columnas: "; cin>>y;
    int matriz1[x][y];
    int matriz2[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<"ingrese los numeros de la fila ["<<i<<"] y la columna ["<<j<<"] "<<endl;
            cin>>matriz1[i][j];
        }
    }
    cout<<"matriz 2"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<" "<<matriz1[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){         /*para copiar un arreglo o matriz primero */
            matriz2[i][j] = matriz1[i][j];  /*se coloca de variable la matriz destino en este caso matriz2*/
        }                                   /*para posteriorente igualar al vector original */
    }
    cout<<"matriz 2"<<endl;
    for(int a = 0; a < x; a++){
        for(int b = 0; b < y; b++){
            cout<<" "<<matriz2[a][b]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}