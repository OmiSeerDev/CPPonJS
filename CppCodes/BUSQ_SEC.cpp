//O. Omar Mejia Tinajero. Programación. Grupo EP01. *Búsqueda secuencial* julio 2022.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 6
using namespace std;

struct Mat {
	int clave;
	char nom[20];
}m1[max];

void llenar(); void busca (Mat*); void menu();

 int main (){
	Mat *m1 = new Mat[max];
	menu();
system("pause");
return 0;
}

void llenar (){
	printf("Ingrese 6 claves num%cricas\n",130);
	for (int i=0;i<max;i++){
		scanf("%i",&m1[i].clave);
	}
	strcpy(m1[0].nom,"Conceptos_Juridicos"); strcpy(m1[1].nom,"Recursos_Humanos");
	strcpy(m1[2].nom,"Entorno_Organiz."); strcpy(m1[3].nom,"Informatica III");
	strcpy(m1[4].nom,"Matematicas III"); strcpy(m1[5].nom,"Bases de datos");
}

void busca(Mat* n){
	int valor, pos=0; 
	if (n[pos].clave== NULL) {
	printf("Error, debe llenar primero la lista.\n"); 
	system ("pause"); 
	system ("cls");
	menu();
	}
	bool bandera = false;
	printf("Mostrando lista.\n");
	for (int i=0;i<max;i++){
		printf("[%i]\t", n[i].clave);
	}
	printf ("\nInserte valor a buscar:\t");
	scanf ("%i", &valor);
	do {
		if (valor == n[pos].clave){
		bandera = 1;
		printf("El valor fue hallado en la posicion de memoria:|%x|.\n", &n[pos].clave);
		printf("El registro completo es: [%i] - [%s]\n",n[pos].clave,n[pos].nom); 
		main();
		} else {
		pos ++; 
		} 
	} while (bandera == false &&  pos<max);
	pos=0;
	if (bandera == false) {
	printf("Valor no hallado en memoria. Intente nuevamente.\n"); 
	system ("pause"); 
	system ("cls"); 
	main();	 
	}
}
	
void menu() {
	int opt;
	printf("****Buscador de materias****\n");
	printf("1. Llenar lista\n2. Buscar elemento.\n3. Salir.\n");
	do {
	scanf("%i",&opt);
	switch (opt) {
		case 1: llenar();
		case 2:busca(m1);
		}
	} while (opt!=3); 
	printf("Hasta pronto _o/ \n"); 
	system ("pause");
	exit(0);
}

