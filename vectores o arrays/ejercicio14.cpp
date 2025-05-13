/*leer un vector de 20 elementos y determinar cual es el elementos mayor del vector e imprimirlo asi como el vector leido*/
#include<iostream>
using namespace std;
int main(){
    int a = 0, mayor = 0;
    cout<<"ingrese la cantidad de elementos que desea en el vector: "; cin>>a;
    int array[a];
    for(int i = 0; i < a; i++){
        cout<<"introduzca los elementos del vector: ";  
        cin>>array[i];
        if(array[i] > mayor){
           mayor = array[i];
        }
    }
    for(int j = 0; j < a; j++){
        cout<<"los elementos del vector: "<<array[j]<<endl;
    }
    cout<<"el numero mayor es: "<<mayor<<endl;    
    return 0;
}