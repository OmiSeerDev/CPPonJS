//O. Omar Mejia Tinajero. Grupo 9291. mayo de 2022 **5num 5 direcciones**
#include <stdio.h>
#define LIM 5
using namespace std;

int main (){
	int data [LIM], i; int*pdata=&data[LIM];
	printf("Inserte 5 n%cmeros:\n",163);
	for(i=0;i<LIM;i++){
		printf("Elemento %i: ",i+1);
		scanf("%i",&data[i]);}
	
	
	for(i=0;i<LIM;i++){
		printf("[%i]---Direcci%cn---> ",data[i],162);
		printf("Decimal: [%d]\t   Hexadecimal: [%p]\n",&pdata[i],&pdata[i]);}
return 0;	
}
