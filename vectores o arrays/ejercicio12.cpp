/*crear un vector de n elementos y conformar un segundo vetor 
que contenga todos los elementos positivos del vector original y un tercer
vector que contenga todos los elementos negativos del vector original 
y un cuarto vector que contenga todos los elementos del vector original*/
#include<iostream>
using namespace std;
int main(){
    int x = 0, b = 0;
    cout<<"ingrese cuantos numeros quiere en el array: ";cin>>x;
    float array[x];
    for(int i = 0; i < x; i++){
        cout<<"ingrese los elementos del array negativos y positivos: "; cin>>array[i];
        b++;
    }
    float array1[x];
    float array3[x];
    float array4[x];
    for(int b = 0; b < x; b++){
        array[b] = array1[b];
        if(array1[b] < 0){
            cout<<"es negativo: "<<b<<endl;
        }
    }
    cout<<"\n";
    return 0;
}
