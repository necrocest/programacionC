/*numero izquiere > numero actual*/
#include<iostream>
using namespace std;
int main(){
    int array[5] = {4,5,2,3,1};
    int pos, aux;
    for (int i = 0; i <  5; i++){
        pos = i; /*se usa para guardar la posicion*/
        aux = array[i]; /* se usa para guardar el numero eb qye se esta guardado el array*/
        while((pos > 0) && (array[pos - 1] > aux)){ /*se compara siempre y cuendo pos sea mayor que 0*/ 
            array[pos] = array[pos - 1];            /*para declarar que si el numero a la izquierda array[pos - 1] > aux, que haya cambio*/
            pos--;                                  /*array[pos] = array[pos - 1]; de esta manera se plantea el intercambio*/
        }
        array[pos] = aux; /*refrescar cada iteracion el orden en que vamos*/
    }
    cout<<"orden ascendente"<<endl;
    for(int i = 0; i < 5; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    cout<<"orden descendente"<<endl;
    for(int j = 5; j > 0; j--){
        cout<<array[j]<<" ";
    }
    cout<<"\n";
    return 0;
}