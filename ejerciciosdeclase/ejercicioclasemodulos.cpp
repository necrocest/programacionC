#include<iostream>
#include<math.h>
using namespace std;
void mensaje(){
    cout<<"1. energia potencial"<<endl;
    cout<<"2. Perimetro de un rectangulo"<<endl;
    cout<<"3. caida libre: velocidad final"<<endl;
    cout<<"4. teorema de pitagoras"<<endl;
    cout<<"5. salir"<<endl;
}
float energia_potencial(float m, float g, float h){
    return(m*g*h);
};
float perimetro_rectangulo(float b, float a){
    return(2*(b*a));
};
float caida_libre(float g, float h){
  return(sqrt(2*g*h));
};
float teorema_pitagoras(float a, float b){
    return(sqrt(a*a+b*b));
};
int main(){
    float a, b, g, h, m;
    int opcion;
    do{
    cout<<"escoja una funcion"<<endl;
    mensaje();
    cin>>opcion;
    if(opcion==1){
        cout<<"ingrese los valores"<<endl;
        cin>>m;
        cin>>g;
        cin>>h;
        cout<<energia_potencial(m,g,h)<<endl;
    }else if(opcion==2){
        cout<<"ingrese los valores"<<endl;
        cin>>b;
        cin>>a;
        cout<<perimetro_rectangulo(a,b)<<endl;
    }else if(opcion==3){
        cout<<"ingrese los valores"<<endl;
        cin>>g;
        cin>>h;
        cout<<caida_libre(g,h)<<endl;
    }else if(opcion==4){
        cout<<"ingrese los valores"<<endl;
        cin>>a;
        cin>>b;
        cout<<teorema_pitagoras(a,b)<<endl;
    }
    }
    while(opcion!=5);
        cout<<"salir"<<endl;

}