#include<iostream>
using namespace std;
int main(){
    int f, c;
    cout<<"introduzca el numero de filas: "; cin>>f;
    cout<<"introduzca el numero de columnas: "; cin>>c;
    int matriz[f][c];
    matriz[1][1]=8;
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
        matriz[i][j] = 0;
        }
    }
    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
        cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}