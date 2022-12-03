//O. Omar Mejia Tinajero. Grupo 9291. mayo de 2022. **Contador de letras de una frase.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;
char frase [60];                  //Declaración de cadena de caracteres de 60 plazas.
int vow, lett, cont;


int main () {
	printf("Inserte una frase: ");
	scanf("%[^\n][A-Za-z]59s",&frase);        //Entrada de la frase por teclado.
	//Se evalua iterativamente cada caracter contenido en el arreglo de char.
	for (int cont=0;frase[cont];cont++) {
		if (isalpha(frase[cont])) {lett++;} //Contador condicional de letras.
		if (frase[cont]=='a'||frase[cont]=='e'||frase[cont]=='i'||frase[cont]=='o'||
		frase[cont]=='u'){ 
		vow++; }                //Contador de vocales minúsculas.
		if (frase[cont]=='A'||frase[cont]=='E'||frase[cont]=='I'||frase[cont]=='O'||
		frase[cont]=='U'){
		vow++; }               //Contador de vocales mayúsculas.
	}
	
	printf("N%cmero de letras : %i\n",163,lett);   //Muestra cantidad de letras
	printf("De las cu%cles, %i son vocales y %i son consonantes.",160,vow,lett-vow);	
return 0;                       //Muestra cantidad de vocales y calcula las consonantes.
}
