/*un estudiante debe desarrollar un algoritmo que permita trabajar un vector de numeros enteros 
el algoritmo debe cumplir con las siguientes instrucciones: 
-mostrar el vector
-menu que permita modificar
    - modificar el primer valor
    - el de la mitad
    - el ultimo valor
"se debe actualizar e imprimir"*/
/*modificado*/
#include<iostream>
using namespace std;
int main(){
    int x, opcion, a, mitad = 0;
    cout<<"ingrese la dimension del vector: ";cin>>x;
    int array[x];
    for(int i = 0; i < x; i++){
        cout<<"ingrese los elementos del array: "; cin>>array[i];
    }
    cout<<"vector original"<<endl;
    for(int i = 0; i < x; i++){
        cout<<array[i]<<", ";
    }
    while(opcion!=4){
        cout<<"Menu"<<endl;
        cout<<"1. 1era"<<endl;
        cout<<"2. 2da"<<endl;
        cout<<"3. 3era"<<endl;
        cout<<"4. salir"<<endl;
        cin>>opcion;
        if(opcion == 1){
            cout<<"introduca el cambio"<<endl;
            cin>>a;
            array[0] = a;
        }
        if(opcion == 2){
            x/2;
            cout<<"introduca el cambio"<<endl;
            cin>>a;
            array[x] = a;
        }
        if(opcion == 3){
            cout<<"introduca el cambio"<<endl;
            cin>>a;
            array[x-1] = a;
        }
    }
    for(int j = 0; j < x; j++){
        cout<<array[j]<<", ";
    }
    return 0;
}