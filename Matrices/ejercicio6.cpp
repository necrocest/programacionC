/*Hacer una matriz preguntando al usuario el número de filas 
y columnas, llenarla de números aleatorios, copiar el contenido 
a otra matriz y por último mostrarla en pantalla.
funcion para crear numeros random.
#include<time.h>
srand(time(NULL));*/
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    int x,y;
    int dato = 0;
    cout<<"numero de filas: "; cin>>x;
    cout<<"numero de filas: "; cin>>y;
    int matriz[x][y];
    int matriz1[x][y];
    srand(time(NULL));
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            dato = 1+rand()%(100);/*se usa la funcion rand para que cree numeros aleatorios del 1 al 100*/
            matriz[i][j] = dato;
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            matriz1[i][j] = matriz[i][j];
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<" "<<matriz1[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(i==j){
                cout<<" "<<matriz1[i][j]<<" ";
            }    
        }
        cout<<"\n";
    }
    return 0;
}