#include<iostream>
using namespace std;
int main(){
    int par, a;
    int vector[7] = {2,3,8,18,10,30,20};
    int vector1[vector[7]];
    for(int i = 1; i < 7; i+=2){
            cout<<"en el lugar: "<<i<<" se encuentra: "<<vector[i]<<endl;
    }
    /*nuevo vector*/
    int vector_nuevo[3];
    int j = 0;
    int i = 0;
    for(int j = 1; j < 7; j+=2){
        vector_nuevo[j] = vector[i];
    }
    /*imprimir nuevo vector*/
    for(int i = 0; i < 3; i++){
        cout<<vector_nuevo[i]<<endl;
    }
    return 0;
}