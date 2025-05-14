/*cree una libreria en la que se guarde normbre del libro y autor, deben ser 2 variables*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a;
    cout<<"cuantos libros desea introducir: " ; cin>>a;
    string titulos_libro[a];
    string autores[a];
    for(int i = 1; i <a; i++){
        cout<<"introducir libro "<<i + 1<<endl;
        cout<<"introducir titulos: " ; getline(cin, titulos_libro[i]);
        cout<<"introducir autores:  "; getline(cin, autores[i]);   
        /*getline se usa mas que todo para textos con espacios es mejor que usar cin*/
    }
    return 0;
}