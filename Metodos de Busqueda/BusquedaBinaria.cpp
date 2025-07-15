/*Busqueda Binaria*/
#include <iostream>
using namespace std;
int main() {
    int a[]= {1, 2, 3, 4, 5};
    int dato, inicio = 0, fin = 5, medio;
    bool band = false;
    cout << "Ingrese un dato del 1 al 5 para comprobar la busqueda binaria: " << endl; 
    cout << "Ingrese el dato a buscar: ";
    cin >> dato;
    while (inicio <= fin){
        medio = (inicio + fin) / 2;
        if (a[medio] == dato) {
            band = true;
            break;
        } else if (a[medio] > dato) {
            fin = medio;
            medio = (inicio + fin) / 2;
        }
        else if (a[medio] < dato) {
            inicio = medio;
            medio = (inicio + fin) / 2;
        }
    }
    if(band == true) {
        cout << "El dato se encuentra en el arreglo " << medio<< endl;
    } else {
        cout << "El dato no se encuentra en el arreglo." << endl;
    }
    return 0;
}