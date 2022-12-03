//O. Omar Mejia Tinajero. Grupo 9291. mayo de 2022 **Suma de pares en array**
#include <stdio.h>                     //Cabecera
#include <iostream>
using namespace std;                                 
int main (){
	int set[7]={1,2,5,7,8,5,1}; int i, lim=7, suma=0;         //Declaración del array y variables útiles
	printf("La suma de valores en posiciones pares del arreglo \t");
	for (i=0;i<lim;i++){                          // Muestra el las posiciones pares de 'set'
		if(i%2==0) {
		printf("[%i]", i);
		}
	}
	for (i=0;i<7;i++){
		printf("\n%i\t", set[i]);                //Imprime el pantalla el array 'set'.
	}
	for (i=0;i<lim;i++){
		if(i%2==0) {                             //Calcula la suma de los valores pares.
		suma+= set[i];
		}
	}
	printf("\nes igual a %i",suma);                //Imprime la suma de pares.
	return 0;                                          //Fin.
}
