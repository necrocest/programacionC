//Calculate the compound interest for a given principal, rate, and time.
// CF = CI(1+i)^n
//Donde CF es el capital final, 
//CI es el capital inicial, 
//i es la tasa de interés y 
//n es el plazo o número de periodos.
#include<iostream>
#include<cmath>
using namespace std;
double cf (double x){
    double base = (1.02);
    double exponente = 12;
    double capital_final = x * pow(base, exponente);
    return (capital_final);
}
int main(){
    double x;
    cout<<"calcular el interes compuesto"<<endl;
    cout<<"ingrese el capital para calcular el interes: "<<endl;
    cin>>x;
    cout<<"su interes compuesto es de: "<<cf(x)<<endl;
    return 0;
}