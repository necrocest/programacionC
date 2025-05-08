/*find the sum of the first n natural numbers*/
#include<iostream>
using namespace std;
int main(){
    int x, suma = 0;
    cout<<"cuantos numeros desea sumar"<<endl;
    cin>>x;
    for(int i = 1; i <= x; i++){
        suma += i;
    }
    cout<<"la suma es: "<<suma<<endl;                                                                                              

    return 0;
}