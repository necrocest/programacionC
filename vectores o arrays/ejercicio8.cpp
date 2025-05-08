/*Desarrolle un programa que lea de la entrada 
estándar un vector de enteros y determine el 
mayor elemento del vector.*/

#include<iostream>
using namespace std;
int main(){
    int a, mayor = 0;
    cout<<"ingrese la cantidad de elementos que desea en el vector: "; cin>>a;
    int array[a];
    for(int i = 0; i < a; i++){
        cout<<"introduzca los elementos del vector: ";  cin>>array[a];
        if(array[a] > mayor){
           mayor = array[a];
        }
    }
    cout<<"el numero mayor es: "<<mayor<<endl;    
    return 0;
}