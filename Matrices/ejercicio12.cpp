/*multiplicar la ultima fila, la mprimera y la de la mitad*/
#include<iostream>
using namespace std;
int main(){
    int x, y; 
    /*para multiplicar siempre se debe inicializar en 1, 
    debido a que, si inicializamos en 0 todo se mulplicara por 0*/
    int multiplicacion = 1, multiplicacion1 = 1, multiplicacion2 = 1;
    cout<<"ingrese la dimension de las filas "; cin>>x;
    cout<<"ingrese la dimension de las columnas "; cin>>y;
    int matriz[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
        cout<<"ingrese los numeros de la fila ["<<i<<"]"<<"y la columna ["<<j<<"] ";
        cin>>matriz[i][j];
        }
    }
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
        cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int j = 0; j < y; j++){
        multiplicacion *= matriz[0][j];
    } 
    int valor_del_medio = x/2;
    for(int j = 0; j < y; j++){
        multiplicacion1 *= matriz[valor_del_medio][j];
    }
    for(int j = 0; j < y; j++){
        multiplicacion2 *= matriz[x - 1][j];
    }
    cout<<"el resultado de la primera fila "<<multiplicacion<<endl;
    cout<<"el resultado de la medio fila "<<multiplicacion1<<endl;
    cout<<"el resultado de la ultima fila "<<multiplicacion2<<endl;
    return 0;
}