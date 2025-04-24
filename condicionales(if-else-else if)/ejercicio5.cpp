#include<iostream>
using namespace std;
int main(){
    char letra;
    cout<<"digite una leta"<<endl;
    cin>>letra;
    switch (letra ){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<letra<<" es vocal minucaula"<<endl;
        break;
    default: cout<<letra<<" no es vocal"<<endl;
        break;
    }

    return 0;
}