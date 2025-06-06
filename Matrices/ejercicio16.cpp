/*una planta embotelladora de cocacola registra la cantidad de botellas producidads por 3 turno
durante 7 dias de la semana.
solicitud: -ingresar y mostrar la matriz
           -calcular la produccion total semanal
           -calcular el promedio diario
           -identificar el dia con mayor produccion total */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int diasTrabajo[7][3];
    int suma = 0, promedio = 0, division = 0, mayor = 0, p = 0;
    for(int i = 1; i < 8; i++){
        for(int j = 1; j < 4; j++){
            cout<<"En el dia "<<i<<" ingrese la produccion del turno "<<j<<endl;
            cin>>diasTrabajo[i][j];
        }
    }
    for(int i = 1; i < 8; i++){
        for(int j = 1; j < 4; j++){
            cout<<" "<<diasTrabajo[i][j]<<"  ";
        }
        cout<<"\n";
    }
    for(int a = 1; a < 8; a++){
        for(int b = 1; b < 4; b++){
            suma += diasTrabajo[a][b];
        }
    }
    cout<<"La produccion total de la semana: "<<suma<<endl;
    division = suma /7;
    cout<<"El promedio de la semana es: "<<division<<endl;
    
    for(int a = 1; a < 8; a++){
        int suma3 = 0;
        for(int b = 1; b < 4; b++){
            suma3 = diasTrabajo[a][b];
        }
        if(suma3 > mayor){
                mayor = suma3;
                p = a;
        }
        
    }
    cout<<"Dia mayor "<<p<<" y la cantidad producida es: "<<mayor<<endl;
    return 0;
}