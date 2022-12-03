//O. Omar Mejia Tinajero. Programación Grupo: EP01. **Ordenador de canciones**. julio de 2022.
#include <iostream>
#include <string.h>

using namespace std;
void bubble_Sort(char [][30], int);
void Inversebubble_Sort(char Arr[][30], int length);
void menu ();

int main (){
	menu();
system ("pause");	
return 0;	
}

void bubble_Sort(char Arr[][30], int length){
	int x,y; char aux[30];
	for (x=0;x<length;x++){
		for(y=0;y<length-1;y++){
			int iSig = y+1;
			if (strcmp(Arr[y],Arr[iSig])>0){
			memcpy(aux, Arr[y], 30);
			memcpy(Arr[y],Arr[iSig],30);
			memcpy(Arr[iSig],aux,30);	
			}
		}
	}
}

void Inversebubble_Sort(char Arr[][30], int length){
	int x,y; char aux[30];
	for (x=length;x>0;x--){
		for(y=length-1;y>0;y--){
			int iAnt = y-1;
			if (strcmp(Arr[y],Arr[iAnt])<0){
			memcpy(aux, Arr[y], 30);
			memcpy(Arr[y],Arr[iAnt],30);
			memcpy(Arr[iAnt],aux,30);	
			}
		}
	}
}

void menu (){
	int option; int longitud = 20;
	printf("..::Ordenaci%cn de canciones::.\n",162);
	printf("Seleccione una opci%cn\n",162);
	printf("1 - Mostrar lista.\n2 - Ordenar A-Z\n3 - Ordenar Z-A\n0 - Salir.\n");
	char lista[][30] = {
		"Animal Instinct","Loud and Clear","Promises","Ridiculous Thoughts","Just My Imagination",
		"Shattered","Desperate Andy","Saving Grace","Copycat","Delilah",
		"What's On My Mind","Fee Fi Fo","Dying In The Sun","Sorry Son","I Still Do",
		"When You're Gone","Linger ","Wake Up And Smell The Coffee","Zombie","Dreams"
		};
	do {
	printf("Seleccione...\t");
	scanf("%i",&option);
	if (option == 1){
		for (int i=0;i<longitud;i++){
		puts(lista[i]);
		}; 
	system ("pause");
	} 
	
	switch (option){
		case 2: bubble_Sort(lista,longitud);
			printf("\n________\n");
			for (int i=0;i<longitud;i++){
				puts(lista[i]);
			}; system ("pause"); system ("CLS"); menu (); break;
		case 3: Inversebubble_Sort(lista, longitud);
			printf("\n________\n");
			for (int i=longitud-1;i>0;i--){
				puts(lista[i]);
			}; system ("pause"); system ("CLS"); menu (); break;
		} 
	} while (option !=0); exit(-1);
}
