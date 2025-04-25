#include<iostream>
using namespace std;
int main(){
    int numero[5];
    int x;
    for(int i = 0; i < 5 ; i++){ //operacion
    cout<<"ingrese el numero ["<<i<<"]"<<endl;
    cin>>x;
    numero[i] = x;
    };
    for(int j = 0; j < 5; j++){ //imprimir
    cout<<j<< " = "<< numero[j]<<endl;
    }
    return 0;
}