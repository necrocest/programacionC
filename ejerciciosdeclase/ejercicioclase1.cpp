#include<iostream>
using namespace std;
int main(){
    float a, b, c, total;
    cout<<"hola estudiante"<<endl;
    cout<<"ingrese las 3 notas para calcular el promedio, estas deben ser de 0.0 a 5.0"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    total=a+b+c;
    total=total/3;
    if(a>=0.0&&a<=5.0&&b>=0.0&&b<=0.0&&c>=0.0&&c<=5.0){
        cout<<"su promedio es: "<<total<<endl;
    }else{
        cout<<"error"<<endl;
    }
    return 0;
}