#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"ingres un numero para mostrar la tala de multiplicar"<<endl;
    cin>>x;
    for(int i = 1; i < 10; i++){
        int resultado = i * x;
        cout<<x<<" * "<<i<<" = "<<resultado<<endl;
    } 
    return 0;
}