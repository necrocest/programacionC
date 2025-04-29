//eer un arreglo de n elementos y hallar la suma de tudos sus elementos
//imprimer el vector leido.
#include<iostream>
using namespace std;
int main(){
    int x, total = 0;
    //para crear el vector segun los elementos que se introduzcan
    cout<<"ingrese la cantidad de elementos del arreglo"<<endl;
    cin>>x;
    int suma [x];
    cout<<"\n"<<endl;
    for(int i = 0; i < x; i++){
        cout<<"ingrese los elementos del arreglo ["<<i<<"]"<<endl;
        //para insertar caracteres en el vector.
        cin >> suma[i];
        total = total + suma[i];
    }
    cout<<"\n"<<endl;
    cout<<total<<endl; 
    return 0;
}