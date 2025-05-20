#include<iostream>
using namespace std;
int main(){
    int f, c;
    cout<<"introduzca el numero de filas: "; cin>>f;
    cout<<"introduzca el numero de columnas: "; cin>>c;
    int matriz[f][c];
    matriz[1][1]=8;
    for(int i = 0; i < f; i++){
        matriz[i][0] = 0;
        cout<<"Matriz ["<<i<<"][0] = "<<matriz[i][0]<<endl;
    
    }
    return 0;
}