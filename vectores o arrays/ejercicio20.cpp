/*un usuaria realiza una lista de precios para 20 productos en su carrito de compras
quire: 
-calcular costo total
-detectar si algun producto cuesta mas de 100k 
-detectar si algun producto cuesta meno de 100k 
-mas caro
-mas barato  */

#include<iostream>
using namespace std;
int main(){
    int total = 0, a = 0, b = 0;
    int lista_compras[3];
    for(int i = 0; i < 3; i++){
        cout<<"agregue el precio del producto: "; cin>>lista_compras[i];
        total = total + lista_compras[i];
    }
    int mayor = lista_compras[0];
    int menor = lista_compras[0];
    for(int j = 0; j < 3; j++){
        if(lista_compras[j] > 100000){
            a++;
        }
        if(lista_compras[j] < 100000){
            b++;
        }

        if(lista_compras[j]>mayor){
            mayor=lista_compras[j];
        }
        else {
            menor=lista_compras[j];
        }
        
    }
    cout<<"el producto "<<a<<" cuesta mas de 100k"<<endl;
    cout<<"el producto "<<b<<" cuesta menos de 100k"<<endl;
    cout<<"producto mas caro "<<mayor<<endl;
    cout<<"producto mas barato "<<menor<<endl;
    cout<<total<<endl;
    return 0;
}