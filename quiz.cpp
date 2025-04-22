#include<iostream>
using namespace std;
float ley_ohm(float v, float i){
    return(v/i);
}float potencia_electrica(float v, float i){
    return(v*i);
}float energia_consumida(float p, float t){
    return(p*t);
}float capacidad_condensador(float q, float v){
    return(q/v);
}
void mensaje(){
    cout<<"1. ley ohm"<<endl;
    cout<<"2. potencia electrica"<<endl;
    cout<<"3. energia_consumida"<<endl;
    cout<<"4. capacidad condensador"<<endl;
}
int main(){
    int opcion;
    float v, i, p, t, q;
    mensaje();
    cin>>opcion;
    if(opcion==1){
        cout<<"ingrese los valores"<<endl;
        cin>>v>>i;
        cout<<"el resultado es: "<<ley_ohm(v, i)<<endl;
    }else if(opcion==2){
        cout<<"ingrese los valores"<<endl;
        cin>>v>>i;
        cout<<"el resultado es: "<<potencia_electrica(v, i)<<endl;
    }else if(opcion==3){
        cout<<"ingrese los valores"<<endl;
        cin>>p>>t;
        cout<<"el resultado es: "<<energia_consumida(p, t)<<endl;
    }else if(opcion==4){
        cout<<"ingrese los valores"<<endl;
        cin>>q>>v;
        cout<<"el resultado es: "<<capacidad_condensador(q, v)<<endl;
    }
    return 0;
}



