//O. Omar Mejia Tinajero. Grupo 9291. *Ordenamiento QuickSort**
#include <stdio.h>
#include <iostream>
using namespace std;

void wechseln(int*,int*);
int dividir (int);                 //Prototipos de funciones.
int vencer (int[],int,int);

int main (){
	int arreglo [20], x;char yesno; 
	printf("Inserte 20 elementos para un arreglo.\n");      //Petici�n de entrada para elementos del arreglo.
	for (x=0;x<20;x++){
		printf("Elemento %i\t",x+1);
		scanf("%i",&arreglo[x]);
	}
	printf("%cDesea ordenar este arreglo%c Y/N\n",168,63);  //Se solicita respuesta del usuario para ordenar.
	cin>> yesno;
	if (yesno=='Y'||yesno=='y'){             //Condici�n Y ejecuta la funci�n de ordenamiento e imprime el arr ordenado.
		vencer(arreglo,0,19);
		for (x=0;x<20;x++){
		printf("[%i]",arreglo[x]);
		}
	} 
	if (yesno=='N'||yesno=='n') { system ("exit");  //Condici�n N, termina el programa.
	}
}
void wechseln(int *a,int *b){   //Funci�n que intercambia valores transfiriendo par�metros por referencia.
	int aux=*a;
		*a=*b;
		*b=aux;
}

int dividir(int arr[], int i, int d) {    //Funci�n de divisi�n iterativa del array
int ref = (arr[i]+arr[d])/2;                     //Calcula un pivote estimando la media aritm�tica.
while (1){                               //Se divide iterativamente el array mientras halla 1 elemento o m�s.
		while (arr[i] < ref) {i++;}       //Movimiento del pivote a la izquierda
    	while (arr[d] > ref) {d--;}       //Movimiento del pivote a la derecha//Compara posiciones izquierda y derecha, 
    	if (i>=d) {return d;              //retorna el valor derecha si la izq es mayor.
		} else {           
		wechseln(&arr[i],&arr[d]);     //intercambia valores si la derecha es mayor.
			i++; d--;                   //recorre el array.
		}
	}
}

int vencer (int arr[], int i, int d){    //Funci�n que asegura la comparaci�n elementos.
	if (i<d){
		int ref = dividir (arr,i,d);      //Si el elemento izquierdo e menor al derecho: ejecuta la divisi�n sobre el arr
		vencer(arr,i,ref);          //ejecuta la comparaci�n de elementos con la referencia (pivote) por la izquierda.
		vencer(arr,ref+1,d);     //ejecuta la comparaci�n de elementos con la referencia (pivote) por la derecha.
	}
return -1;
}
	
