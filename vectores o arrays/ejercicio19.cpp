/*Un emprendedor digital lleva el registro de sus ingresos diarios durante 30 dias del mes
tiene como meta diaria ganar 100.000. 
-usted debe desarrollar un sistema que; permita registrar los ingresos durante 30 dias
-mostrar cuantos dias igualo la meta, la supero y cuando no la alcanzo
cacular la media diaria de ingresos
imprima
dias que superaron
dia que igualaron
dias que no se alcanzo la meta
promedio genral */
#include<iostream>
using namespace std;
int main(){
    int a=0, b=0, c=0;
    int suma = 0, promedio = 0;
    int ingresos[5];   /*vector para los dias*/
    for(int i = 0; i < 5; i++){
         cout<<"registre sus ingresos diarios"<<endl;
         cout<<"dia "<<i<<endl; /*para registrar los ingresos*/
         cin>>ingresos[i];
         suma = suma + ingresos[i];
         promedio = suma/30;
    }
    for(int j = 0; j < 5; j++){
        if(ingresos[j] > 100000){
            cout<<"el dia "<< j <<"supero su meta"<<endl;
            a++;
        }else if(ingresos[j] < 100000){
            cout<<"el dia "<< j <<"NO supero su meta"<<endl;
            b++;
        }else if(ingresos[j] = 100000){
            cout<<"el dia "<< j <<"igualo su meta"<<endl;
            c++;
        }
    }
    cout<<promedio<<endl;
    cout<<"dias que supero su meta "<<a<<endl;
    cout<<"dias que igualo su meta "<<c<<endl;
    cout<<"dias que no supero su meta "<<b<<endl;
    return 0;
}