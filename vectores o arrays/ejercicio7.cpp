#include<iostream>
using namespace std;
int main(){
    int a; 
    int multiplicacion = 0, division = 0, suma = 0;
    int total = 0, n, n1;
    cout<<"cuantos elementos en el vector 1:"<<endl;
    cin>>n;
    int vector[n];
    cout<<"ingrese los elementos del vector 2(debe ser igual al vector 1): "<<endl;
    cin>>n1;
    int vector2[n1];
    for(int i = 0; i < 3; i++){
        cout<<"ingrese los elementos del vector"<<endl;
        cin>>vector[i];
    }
    for(int i = 0; i < 3; i++){
        cout<<"ingrese los elementos del vector 2"<<endl;
        cin>>vector2[i];
    }
    for(int i = 0; i < 3; i++){
        multiplicacion = (vector[i] * vector2[i]);
        total+=multiplicacion;
    }
    for( int j = 0; j < 3; j++){
        suma += vector2[j];
        division = total / suma; 
    }
    cout<<"El total es: "<<division<<endl;
    return 0;
}