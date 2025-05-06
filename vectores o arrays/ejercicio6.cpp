#include<iostream>
using namespace std;
int main(){
    int a; 
    int multiplicacion = 0;
    float division = 0;
    int suma = 0;
    int total = 0;
    int vector[3] = {80,90,70};
    int vector2[3] = {2, 3, 1};
    for(int i = 0; i < 3; i++){
        multiplicacion = (vector[i] * vector2[i]);
        total+=multiplicacion;
    }for( int j = 0; j < 3; j++){
        suma += vector2[j];
        division = total / suma; 
    }
    cout<<"El total es: "<<division<<endl;
    return 0;
}