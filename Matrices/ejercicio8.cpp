/*Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    int x, y, dato = 0, dato1 = 0;
    cout<<"filas: " ; cin>>x;
    cout<<"columnas: " ; cin>>y;
    int matriz[x][y];
    int matriz1[x][y];
    srand(time(NULL));
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            dato = 1+rand()%(100);
            dato1 = 1+rand()%(100);
            matriz[i][j] = dato;
            matriz1[i][j] = dato1;
        }
    }
    cout<<"matriz original"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
           cout<<" "<<matriz[i][j]<<" "; 
        }
        cout<<"\n";
    }
    cout<<"matriz 2"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<" "<<matriz1[i][j]<<" "; 
        }
        cout<<"\n"<<endl;
    }
    cout<<"sumas matriz"<<endl;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
           cout<<" "<<matriz[i][j] + matriz1[i][j]<<" "; 
        }
        cout<<"\n";
    }

    return 0;
}