/*Hacer un programa que determine si una palabra es palíndroma*/

#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char palabra [20];
    char palabra1 [20];
    cout<<"introduzca una palabra: "; 
    cin.getline(palabra,20,'\n');
    strcpy(palabra1, palabra);
    strrev(palabra1);
    if(strcmp(palabra,palabra1)==0){
        cout<<"es palindroma";
    }else{
        cout<<"no es palindora";
    } 
    cout<<"\n";
    return 0;
}