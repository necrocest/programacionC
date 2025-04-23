//Calculate the perimeter of a rectangle formule p = 2(base*altura)
#include<iostream>
using namespace std;
float perimetro(float a, float b){
    return(2*(a*b));
}
int main (){
    float a, b;
    cout<<"ingrese la altura: "; cin>>a;
    cout<<"ingrese la base: "; cin>>b;
    cout<<"el perimetro es: "<<perimetro(a,b)<<endl;
    return 0;
}