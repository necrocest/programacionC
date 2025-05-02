#include<iostream>
using namespace std;
int main(){
    int lista[5];
    int a;
    for(int i = 0; i < 5; i++){
        cout<<"ingrese el numero ["<<i<<"]"<<endl;
        cin>>a;
        lista[i] = a;
    }
    for (int j = 0; j < 5; j++){
        cout<<"ingrese el numero ["<<j<<"]"<<endl;
        cin>>a;
        lista[j] = a;

    }
    return 0;
}