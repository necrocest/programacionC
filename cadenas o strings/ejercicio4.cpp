/*Crear una cadena que tenga la siguiente frase "Hola que tal",
 luego crear otra cadena para preguntarle al usuario su nombre, 
 por ultimo añadir el nombre al final de la primera cadena y 
 mostrar el mensaje completo "Hola que tal (NombreDelUsuario)".*/
 #include<iostream>
 #include<string.h>
 using namespace std;
 int main(){
    char frase1[] = "hola que tal ";
    char nombre[20];
    cout<<"ingrese su primer nombre: " ; cin.getline(nombre, 20, '\n');
    strcat(frase1, nombre);
    cout<<"frase "<<frase1<<endl;
    return 0;
 }