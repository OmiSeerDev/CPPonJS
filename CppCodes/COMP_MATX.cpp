//O. Omar Mejia Tinajero. Grupo 9291. mayo de 2022. **Comparador de matrices**.
#include <stdio.h>
#include <conio.h>
using namespace std;

int mA[2][2], mB[2][2]; int lim=2, i,j;
void Ins_MatA(); void Ins_MatB(); 
void evalua_elementos();

main (){
	printf ("Comparador de matrices de 2x2.\nInserte valores para una matriz 2x2\n");
	Ins_MatA();	
	printf("\nInserte valores para otra matriz 2x2 \n");
	Ins_MatB();
	evalua_elementos();
	getch ();
	return 0;
	}

void evalua_elementos() {
	short diff=0,same=0;
	for(i = 0 ; i < lim ; i++){
		for(j = 0 ; j < lim ; j++){
			switch (mA[i][j]-mB[i][j]) {
				case 0: same +=1; break;
				default: diff +=1; break; 
			}
		}
	} 
	if (diff>=1) {printf("\n\nLas matrices ingresadas son Distintas");
	} else {printf("\n\nLas matrices ingresadas son Iguales");
	}
}

void Ins_MatA() {
for(i = 0 ; i < lim ; i++)
for(j = 0 ; j < lim ; j++)
{
printf("Posici%cn [%hi][%hi] = ",162, i, j);
scanf("%i",&mA[i][j]);
}
for (i=0;i<2;i++){
	printf("\n\n\n");
		for (j=0;j<2;j++){
		printf("%3i",mA[i][j]);
		}	
	}
}
void Ins_MatB() {
	for(i = 0 ; i < lim ; i++)
		for(j = 0 ; j < lim ; j++){
		printf("Posici%cn [%hi][%hi] = ",162, i, j);
		scanf("%i",&mB[i][j]); 	}
	for (i=0;i<lim;i++){
	printf("\n\n\n");
		for (j=0;j<lim;j++){
		printf("%3i",mB[i][j]);
		}	
	}
}
