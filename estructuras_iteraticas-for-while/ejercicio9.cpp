//Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
#include<iostream>
using namespace std;
int main(){
    int a, factorial = 1;
    cout<<"ingrese el numero al cual le desea saber el factorial"<<endl;
    cin>>a;
    for(int i = 1;i <= a; ++i){
        factorial *= i;
    }
    cout<<factorial<<endl;
    return 0;
}