/*estructuras basicas*/
#include <iostream>
using namespace std;
struct persona{
    string nombre;
    int edad;
    float altura;
}p1, p2, p3; // Declaración de variables de tipo persona
int main() {
    cout << "Ingrese el nombre de la persona 1: ";
    cin >> p1.nombre;
    cout << "Ingrese la edad de la persona 1: ";
    cin >> p1.edad;
    cout << "Ingrese la altura de la persona 1: ";
    cin >> p1.altura;
    cout << "Nombre: " << p1.nombre << ", Edad: " << p1.edad << ", Altura: " << p1.altura << endl;
    return 0;
}