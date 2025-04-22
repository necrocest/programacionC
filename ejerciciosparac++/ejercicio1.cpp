//Convert Celsius to Fahrenheit and vice versa. listo
//todo con funciones y loops
#include<iostream>
using namespace std;
void mensaje(){
    cout<<"De celsius a fahrenheit"<<endl;
    cout<<"y al reves"<<endl;
}
float celsius(float fahren, float c){
    return fahren = (c * 9/5) + 32;
}
float fahrenheit(float cels, float f){
    return cels = (f - 32)/1.8;
}
int main(){
    int c;
    float fahren, cels, f;
    mensaje();
    cout<<"ingrese la temperatura en celsius: "<<endl;
    cin>>c;
    cout<<"la temperatura en fahrenheit es: "<<celsius(fahren, c)<<endl;
    cout<<"ingrese la temperatura en fahrenheit: "<<endl;
    cin>>f;
    cout<<"la temperatura en celsius es: "<<fahrenheit(cels, f)<<endl;
    return 0;
}