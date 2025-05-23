/*creando un vector con numeros aleatorios*/
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    int x, dato = 0;
    cout<<"ingrese la dimension del vector: "; cin>>x;
    int array[x];
    srand(time(NULL));
    for(int i = 0; i < x; i++){
        dato = 1+rand()%(100);
        array[i] = dato;
    }
    cout<<"\n";
    for(int j = 0; j < x; j++){
        cout<<array[j]<<", ";
    }
    cout<<"\n";
    return 0;
}