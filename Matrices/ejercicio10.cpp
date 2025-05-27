#include<iostream>

using namespace std;

int main(){
	int filas, columnas;
	cout<<"ingrese las filas de la matriz: "; cin>>filas;
	cout<<"ingrese las columnas de la matriz: "; cin>>columnas;
	int matriz[filas][columnas];
	int matriz1[filas][columnas];
	int C[filas][columnas];
	/*rellenado las matrices*/
	cout<<"Introduzca los numero de la primera matriz"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"introduza los numeros de la fila ["<<i<<"]"<<"y de las columnas ["<<j<<"]";
			cin>>matriz[i][j];
		}
	}
	cout<<"Introduzca los numero de la segunda matriz"<<endl;
	for(int a=0;a<filas;a++){
		for(int b=0;b<columnas;b++){
			cout<<"introduza los numeros de la fila ["<<a<<"]"<<"y de las columnas ["<<b<<"]";
			cin>>matriz1[a][b];
		}
	}
	/*imprimir matrices originales*/
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int a=0;a<filas;a++){
		for(int b=0;b<columnas;b++){
			cout<<" "<<matriz1[a][b]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
	//Multiplicando las matrices
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			C[i][j]=0;
				C[i][j] = C[i][j] + matriz[i][j]*matriz1[i][j];
			
		}
	}
	//Resultado de la multiplicacion
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<" "<<C[i][j]<<"  ";
		}
		cout<<"\n";
	}
	return 0;
}
