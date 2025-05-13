/*calcular la suma de un vector de 30 elementos de orden imoar*/
#include<iostream>
using namespace std;
int main(){
    int suma = 0;
    int vector[5];
    for(int i = 0; i <=5; i++){
        cout<<"ingrese los elementos del array: ";
        cin>>vector[i];
    }
    for(int j = 0; j <= 5; j+=2){
        suma = suma + vector[j];
    }
    cout<<"El total es: "<<suma<<endl;
    return 0;
}