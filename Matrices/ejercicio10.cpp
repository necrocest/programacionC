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
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Introduzca los numero de la primera matriz"<<endl;
			cout<<"introduza los numeros de la fila ["<<i<<"]"<<"y de las columnas ["<<i<<"]";
			cin>>matriz[i][j];
		}
	}
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Introduzca los numero de la primera matriz"<<endl;
			cout<<"introduza los numeros de la fila ["<<i<<"]"<<"y de las columnas ["<<i<<"]";
			cin>>matriz[i][j];
		}
	}
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
