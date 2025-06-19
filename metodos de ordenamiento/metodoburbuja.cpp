/*se basa en el sigiente condicional n actual > n siguiente array[j] > array[j + 1]*/
#include<iostream>
using namespace std;
int main(){
    int array[5];
    int aux;
    for(int i = 0; i < 5; i++){
        cout<<"ingrese el numero: "; cin>>array[i];
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(array[j] > array[j + 1]){
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
    cout<<"orden ascendente : "<<endl;
    for(int i = 0; i < 5 ; i++){
        cout<<array[i]<<" ";
    }
    cout<<"\n";
    cout<<"orden descendente : "<<endl;
    for(int i = 4; i >= 0 ; i--){
        cout<<array[i]<<" ";
    }
    return 0;
}