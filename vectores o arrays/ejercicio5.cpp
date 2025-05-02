#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int vector[7] = {2,3,8,18,10,30,20};
    for(int i = 1; i < 7; i+=2){
            cout<<"en el lugar: "<<i<<" se encuentra: "<<vector[i]<<endl;
            vector[i] = a;
            a++;
        }
    cout<<a<<endl;
    /*nuevo vector*/
    int vector_nuevo[a];
    int i = 0;
    
    for(int j = 1; j < 7; j+=2){
        vector_nuevo[j] = vector[i];
    }
    /*imprimir nuevo vector*/
    for(int b = 0; b < a; b++){
        cout<<vector_nuevo[i]<<endl;
    }
    return 0;
}