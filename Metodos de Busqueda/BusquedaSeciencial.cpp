/*a[5] = {1,2,3,4,5}*/
/*tambien se puede con caracteres*/

#include <iostream>
using namespace std;
int main(){
    int a[5] = {1,2,3,4,5};
    int i, dato;
    bool band = false;
    cout<<"ingrese un dato del 1 al 5 para comprobar la busqueda secuencial: " << endl; 
    cout << "Ingrese el dato a buscar: ";
    cin >> dato;
    i=0;
    while((i < 5) && (band == false)){
        if(a[i] == dato){
            band = true;
        }
        i++;
    }
    if(band == false){
        cout << "El dato no se encuentra en el arreglo." << endl;
    } else {
        cout << "El dato se encuentra en el arreglo." << endl;  
    }
}