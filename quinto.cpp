#include<iostream>
using namespace std;
int main(){
     float a,b,c,d,total1, total2, total3;
    cout<<"ingrese la moneda que sea cambiar a dolares"<<endl;
    cout<<"para MXN a Dolares precione 1"<<endl;
    cout<<"para COP a Dolares precione 2"<<endl;
    cout<<"para ARG a Dolares precione 3"<<endl;
    cin>>a;
    if(a==1){
        cout<<"cuanto quieres cambiar"<<endl;
        cin>>b;
        total1=0.049*b;
        cout<<"el total es: "<<total1<<endl;
    }else if(a==2){
        cout<<"cuanto quieres cambiar"<<endl;
        cin>>c;
        total2=0.00024*c;
        cout<<"el total es: "<<total2<<endl;
    }else if(a==3){
        cout<<"cuanto quieres cambiar"<<endl;
        cin>>d;
        total3=0.00093*d;
        cout<<"el total es: "<<total3<<endl;
    }
    cout<<"Gracias por usar este cambio"<<endl;
    return 0;
}
