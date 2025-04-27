#include<iostream>
using namespace std;
int main(){
    int x;
    for(int i = 1; i < 10; i+ +){
        cout<<"ingres un numero para mostrar la tala de multiplicar"<<endl;
        cin>>x;
        i = i * x;
        cout<<" el numero es "<<x<<" y su tabla es = "<<i<<endl;
    }
    return 0;
}