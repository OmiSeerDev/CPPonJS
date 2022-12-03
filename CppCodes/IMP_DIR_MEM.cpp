//O. Omar Mejia Tinajero. Grupo 9291. mayo de 2022 **Dirección de memoria**
#include <stdio.h>
using namespace std;

int main(void){
	char s=33; void*pts=&s;
	printf("El valor de s es : %d\n",s);
	printf("La direcci%cn de memoria de s es [%p] = decimal [%d]\n",162,pts,pts);
return 0;
} 
