#include<iostream>
using namespace std;
int main(){
	cout<<"Arreglos de una dimension"<<endl;
	char vocales[5];
	vocales[0] = 'a';
	vocales[1] = 'e';
	vocales[2] = 'i';
	vocales[3] = 'o';
	vocales[4] = 'u';
	for(int i = 0; i < 5; i++){
		cout<<vocales<<endl;
		cout<<"vocales ["<<i<<"]: "<<vocales[i]<<endl;
	}
	return 0;
}