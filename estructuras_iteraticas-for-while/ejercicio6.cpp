/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos,
sin utilizar la función pow().*/
#include<iostream>
using namespace std;
int main(){
    int x, y, total=1; 
    cout<<"introduzca la base"<<endl;
    cin>>x;
    cout<<"introduzca el exponente"<<endl;
    cin>>y;
    for(int i = 0; i < y; i++){
        total *= x;
    }
    cout<<total<<endl;
    return 0;
}