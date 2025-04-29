//calcular la suma de los cuadrados de los 20 elementos de un arreglo unidimensional x.
#include<iostream>
using namespace std;
int main(){
    int arreglo[10] = {1 , 2, 3} ;
    int suma = 0, cuadrado = 0;
    for(int i = 0; i < 3; i++){
        cuadrado = arreglo[i] * arreglo[i];
        suma += cuadrado;
        cout<<i<<" su cuadrado es: "<<cuadrado<<endl;;
    };
    cout<<"\n"<<endl;
    cout<<suma<<endl;
    return 0;
}