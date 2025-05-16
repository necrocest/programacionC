/*una estacion ambiental realiza una medicion de la temperatura durante 7 dias
de la semana en una zona rural. debido al ambio climatico, es importante analizar los datos
de temperatura fuera de lo normal
Escriba un programa que:
*permita ingresar 7 temperaturas maximas y las almacene en un array
*determinar* 
*el dia(indice)en el que se registra la mayor temperatura
*cuantos dias tuvieron temperatura por encima de 35º
*promedio semanl
*Finalmente imprima el vector original con sus valores, la temperatura maxima. su posicion. cantidad de dias criticos y promedio semanal*/
#include<iostream>
using namespace std;
int main(){
    int max = 35, mayor = 0, suma = 0, promedio = 0;
    cout<<"bienvenido a la central de medicion de temperatura"<<endl;
    string dias[7];
    int temperatura[7];
    for(int i = 0; i < 7; i++){
        cout<<"ingrese el dia"<<endl;
        cin>>dias[i];
        cout<<"ingrese la temperatura"<<endl;
        cin>>temperatura[i];
        if(temperatura[i] > mayor){
            mayor = temperatura[i]; /*mayor del array*/
        }
        suma = suma + temperatura[i];
        promedio = suma / 7; /*calcular el promedio*/
    }
    for(int j = 0; j < 7; j++){
        cout<<"el dia "<< dias[j] <<" hubo una temperatura de "<< temperatura[j]<<" C"<<endl;                                     
    }
    for(int b=0;b<7;b++){
        if(temperatura[b] > max){
            max = temperatura[b];  /*comprobar si la temperatura fue mayor a 35*/
            cout<<"el dia "<<dias[b]<<" estuvo por encima de 35."<<endl;
        }
    }
    cout<<"la temperatura mayor es: "<<mayor<<" C"<<endl; 
    cout<<"la el promedio semanal es: "<<promedio<<" C"<<endl;
    return 0;
}