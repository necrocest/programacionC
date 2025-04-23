//Check if a number is positive, negative, or zero.
#include<iostream>
using namespace std;
int main (){
    float x;
while (x!=4){
    cout<<"comprobar si un numero es positivo o negativo"<<endl;
    cout<<"ingese un numero: "; cin>>x;
    cout<<"para salir presione 4 y sera la ultima ejecucion"<<endl;
if(x == 0){
    cout<<"es zero"<<endl;
}else if (x  >  0){
    cout<<"es positivo"<<endl;    
}else if (x < 0){
    cout<<"es negativo"<<endl;
};
};
}
