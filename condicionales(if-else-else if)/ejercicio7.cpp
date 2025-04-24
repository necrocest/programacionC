//Escriba un programa que solicite una edad (un entero) e 
//indique en la salida estándar 
//si la edad introducida está en el rango [18-25].
#include<iostream>
using namespace std;
int main(){
    int edad;
    cout<<"ingrese la edad: "<<endl;
    cin>>edad;
    if (edad >= 18 && edad <= 25){
        cout<<edad<<": Su edad esta en el rango Adolecente "<<endl;
    }
return 0;
}