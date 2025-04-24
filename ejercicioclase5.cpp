#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a, tiempo;
    const float g=9.81;
    cout<<"Calcular el tiempo en caida libre"<<endl;
    cout<<"ingrese la Altura: "<<endl;
    cin>>a;
    tiempo=sqrt(2*a/g);
    cout<<"el tiempo es: "<<tiempo<<endl;
    return 0;
}