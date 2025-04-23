//Swap two numbers without using a third variable.
#include<iostream>
using namespace std;
int main() {
    float x, y;
    cout << "Introduzca el valor de x: "; cin >> x;
    cout << "Introduzca el valor de y: "; cin >> y;
// x = x + y; → ahora x contiene la suma de los dos.
// y = x - y; → como x es x + y, restarle y da el valor original de x.   
// x = x - y; → ahora x toma el valor original de y.
// EJEMPLO: X = 3(QUE ES x) + 1(QUE ES y)
//          Y = 4(PORQUE AHORA X VALE 4)-1(QUE ES EL VALOR DE y) =  3(VALOR DE X ORIGINAL)
//          X = 4(PORQUE X=4) - 3(QUE ES EL VALOR QUE TOMO y EN EL PASO ANTERIOR) = 1(VALOR ORIGINAL DE Y)
    x = x + y;
    y = x - y;
    x = x - y;
    cout << "El valor de x es: " << x << endl;
    cout << "El valor de y es: " << y << endl;
    return 0;
}