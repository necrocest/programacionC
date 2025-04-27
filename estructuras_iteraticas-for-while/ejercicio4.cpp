//Escriba un programa que tome cada 4 horas la temperatura exterior, 
//leyéndola durante un período de 24 horas. Es decir, 
//debe leer 6 temperaturas. 
//Calcule la temperatura media del día, la temperatura más alta y la más baja.
#include<iostream>
using namespace std;
int main(){
    float temperatura1 = 0, temperatura2 = 0, temperatura3 = 0;
    float temperatura4 = 0, temperatura5 = 0, temperatura6 = 0;
    for(int i = 1; i <= 6; i++){
        cout<<"introduzca la temperatura"<<endl;
        cin>>temperatura1;
    }
    return 0;
}