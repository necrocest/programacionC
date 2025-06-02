/*sumar la ultima fila*/

#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    int suma = 0, suma1 = 0, suma2 = 0;
    cout<<"ingrese el numero de filas: " ; cin>>x;
    cout<<"ingrese el numero de columnas: "; cin>>y;
    int matriz[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<"ingrese el numero en el fila ["<<i<<"] en la columna ["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    for(int j = 0; j < y; j++){
        suma2 += matriz[0][j];
    }
    /*fila del medio para cualquier ocasion, par o impar*/
    int filacentral = x/2;
    for(int j = 0; j < y; j++){
        suma1 += matriz[filacentral][j];
    }
    for(int j = 0; j < y; j++){
        suma += matriz[x-1][j];
    }
    cout<<"la suma de la primera fila es: "<<suma2<<endl;
    cout<<"la suma de la mitad: "<<suma1<<endl;
    cout<<"la suma de la ultima fila es: "<<suma<<endl;

    return 0;
}