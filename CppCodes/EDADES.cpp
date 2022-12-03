/*Calculadora de edades. O. Omar Mejia Tinajero. Marzo de 2022.*/
#include <stdio.h>
#include <stdlib.h>
using namespace std;

const int actual = 2022;
int year; int edad;

int main () {
	printf("Inserte un a%co \n",164);
	scanf("%d",&year);
	
	edad=(actual-year);
	printf("Su a%co es: \t",164); printf("%d \n",year);	
	printf("Su edad es: \t");printf("%d",edad); printf(" a%cos\n",164);
	if (edad<=17) {
	printf("Es menor de edad\n");}
	else {
		printf("Es mayor de edad\n");}	
	if(year>actual) {
	void (); printf("Error, inserte otro a%co\n",164);
		system ("pause");
		main ();
	}
	return 0;
}
