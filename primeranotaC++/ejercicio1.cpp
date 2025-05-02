/*calcular la media aritmetica de x de un conjunto de n valores
mediante el empleo de arreglos. imprimir el vector leido y su medida aritmetica*/
#include<iostream>
using namespace std;
int main(){
    float suma = 0;
    int a; 
    float total= 0;
    cout<<"ingrese la cantidad de elementos en el vector"<<endl;
    cin>>a;
    float vector[a];
    for(int i = 0; i < a; i++){
        cout<<"ingrese los numeros del arreglo"<<endl;
        cin>>vector[i];
        suma = suma + vector[i];
    }
    cout<<"El total es: "<<suma<<endl;
    total = suma / a;
    cout<<"El total es: "<<total<<endl;
    return 0;
}