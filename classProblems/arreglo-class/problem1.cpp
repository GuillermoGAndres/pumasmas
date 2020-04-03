#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(){
	int tam = 10;
	int array[tam];
	//Inicializo mi arreglo
	for(int i=0; i < tam; i++){
		array[i] = rand() % 20;
	}
	//Imprimo el arreglo
	for(int i=0; i < tam; i++){
		cout << array[i] << ", ";
	}
	cout << endl;
	//Recorrer la primera mitad
	for(int i=0; i < tam/2; i++){
		cout << array[i] << ", ";
	}
	cout << endl;
		
	return 0;
}

