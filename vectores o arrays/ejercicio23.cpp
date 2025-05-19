/*Escribe un programa que encuentre y muestre los elementos duplicados en un array de enteros.
Ejemplo:
Entrada: [2, 5, 2, 8, 5] → Salida: Elementos duplicados: 2, 5.*/
#include<iostream>
using namespace std;
int main() {
    int array[5] = {2, 5, 2, 8, 5};
    bool duplicados[5] = {false};/*Crea un array booleano inicializado en false. 
    Su propósito es marcar qué índices ya han sido identificados como duplicados.*/
    cout << "Elementos duplicados: ";
    bool primerDuplicado = true;

    for (int i = 0; i < 5; i++) { /*Bucle externo que recorre cada elemento del array.
    Bucle interno que compara el elemento actual (array[i]) con los elementos posteriores (array[j]).*/
        for (int j = i + 1; j < 5; j++) {
            if (array[i] == array[j] && !duplicados[i]) { /*se niega el vetor duplicado*/
                duplicados[i] = true; // se comprueba si son  duplicado y se marca
                // Formateo de la salida
                if (!primerDuplicado) {
                    cout << ", ";
                }
                cout << array[i];
                primerDuplicado = false;
                break; // Salir del bucle interno al encontrar una repetición
            }
        }
    }
    if (primerDuplicado) { // Si no hubo duplicados
        cout << "No hay elementos duplicados";
    }
    cout << "." << endl;
    return 0;
}
