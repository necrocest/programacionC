/*Desarrolle un programa que lea un vector de enteros y cuente cuántos números pares contiene.*/
#include<iostream>
using namespace std;
int main(){
    int x, b=0;
    cout<<"ingrese la dimension del array"<<endl;
    cin>>x;
    int array[x];
    for(int i = 1; i < x; i++){
        cout<<"ingrese los numeros del array"<<endl;
        cin>>array[x];
        if(array[i]%2 == 0){
            b++;
        }
    } 
    cout<<b<<" par"<<endl;


    return 0;
}