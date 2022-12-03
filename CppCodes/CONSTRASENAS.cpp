// **CONTRASENA** O. Omar Mejia Tinajero Grupo:9291 abril de 2022.//
#include <stdio.h>
#include <string.h>
using namespace std;
char password [6];
int c=3;
int main () {
	printf("Inserte la constrase%ca\n",164);
	scanf("%s",&password);
	 if (strcmp(password,"Argelia")==1) {
		c=c-1;
		printf ("Contrase%ca inv%clida.\n",164,160);
		printf("Quedan %d intentos.\n",c);
		if (c!=0) {main ();} else {
		printf("Usuario no autorizado.\nAcceso denegado.\a");
		return 0;}	
	} 
	else {
	printf("Correcto. Bienvenido"); return 0;
	}
}
