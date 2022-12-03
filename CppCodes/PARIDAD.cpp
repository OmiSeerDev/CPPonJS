/*Calculadora de pares e impares. O. Omar Mejia Tinajero. Marzo 2022*/
#include <stdio.h>

using namespace std;
int main() {
	printf("Inserte un n%cmero \n",163);
	int number;
	scanf("%d",&number);
	if (number % 2 != 0) {
		printf("Su n%cmero es impar \n",163);
	} else{
	printf("Su n%cmero es par",163);
	}
	return 0;
}
