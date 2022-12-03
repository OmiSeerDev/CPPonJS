//O.Omar Mejia Tinajero. Grupo: 9291. mayo 2022. *Ordenación de números**
#include <stdio.h>
#include <stdlib.h>

using namespace std;
short arrA [20], sort;
int i,j;
void wechsel(short*,short*);

int main (){
	printf("Se tiene un arreglo 20 n%cmeros aleatorios:\n",163);
	for (i=0;i<20;i++){
	arrA[i]=rand()%27;
	printf("[ %i ]",arrA[i]);
	}
	
	for (i=20;i>0;i--){
		for (j=0;j<20;j++){
			if (arrA[j]>arrA[j+1]){ 
			wechsel (&arrA[j],&arrA[j+1]);
			}
		}
	}
	printf("\nEl arreglo reordenado: \n");
	for (i=0 ; i < 20; i++) {
	printf ("[ %i ]",arrA[i+1]);
	}
return 0;
}

void wechsel(short*a,short*b){
	short ext;
	ext=*a;
	*a=*b;
	*b=ext;
}
