//se registran las notas de 5 estudiantes en 4 materias(en la escala de 0 a 5)
//mostrar matriz de notas
//calcular el promedio por estdudiante
//calcular el promedio por materia
//mayor rendimiento
//materias reprobadas(nota <3)
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	float notas[5][4];
	float suma = 0, promedio = 0, mayor = 0, p = 0, a= 0;
	//rellenar matriz
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			cout<<"para el estudiante ["<<i<<"] en la materia ["<<j<<"]";
			cin>>notas[i][j]; 
		}
	}
	
	//imprimir matriz
	for(int i = 0; i < 5; i++){
		a = 0;
		for(int j = 0; j < 4; j++){
			cout<<setw(8)<<notas[i][j]<<"|"; 
			if(notas[i][j] < 3.0){
				a++;
			}
		}
		cout<<"materias reprobadas "<<a<<endl;
		cout<<"\n";
	}
	
	//promedio por estudiante
	for(int i = 0; i < 5; i++){
		suma = 0;
		promedio = 0;
		for(int j = 0; j < 4; j++){
			 suma +=notas[i][j];
			 promedio = suma/4; 
			 cout<<"el promedio del estudiante ["<<i<<"] en la materia ["<<j<<"] es de "<<promedio<<endl;
		}
		cout<<"\n";
		promedio = suma/4;
		cout<<"el promedio del estudiante ["<<i<<"] es "<<promedio<<endl;
	}
	
	//mayor rendimiento
	for(int i = 0; i < 5; i++){
		int suma2 = 0;
		for(int j = 0; j < 5; j++){
			suma2 = notas[i][j];
		}
		if(suma2>mayor){
			mayor = suma2;
			p = i;
		}
	}	
	cout<<"el estudiante con mayor rendimiento "<<mayor<<endl;
	return 0;
}
