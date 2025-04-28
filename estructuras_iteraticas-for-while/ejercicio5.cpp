//Escriba un programa que lea valores enteros hasta 
//que se introduzca un valor en el rango [20-30] 
//o se introduzca el valor 0. El programa debe entregar 
//la suma de los valores mayores a 0 introducidos.
#include<iostream>
using namespace std;
int main(){
    int x, total = 0;
    do{
        cout<<"digite un numero"<<endl;
        cin>>x;
        if(x>0){
            total +=x;
        }
    } while(((x>20)  &&  (x<30) && x != 0));
    cout<<"la suma es: "<<total<<endl;
    return 0;
}