//Find the largest and smallest number among three numbers.
#include<iostream>
using namespace std;
int main(){
    float a, b, c;
    cout<<"introduza 3 numeros: "<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" es el mayor"<<endl;
    }else if(a<b && a<c){
        cout<<a<<" es el menor"<<endl;
    }else if(b>a && b>c){
        cout<<b<<" es el mayor"<<endl;
    }if(b<a && b<c){
        cout<<b<<" es el menor"<<endl;
    }else if(c>a && c>b){
        cout<<c<<" es el mayor"<<endl;
    }else if(c<a && c<b){
        cout<<c<<" es el menor"<<endl;
    }
}