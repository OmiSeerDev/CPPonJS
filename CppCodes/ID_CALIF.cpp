//O. Omar Mejia Tinajero Grupo:9291 abril de 2022.//
#include <stdio.h>

using namespace std;
main(){
	printf("Identificador de Calificaciones\nInserte un valor del 0 al 10\n");
	float nota;
	scanf("%f",&nota);
	if(nota<6) {
		printf("La calificaci%cn equivale a NA: No aprobado\n",162);
	}
	else if (nota>=6&&nota<6.9){
		printf("La calificaci%cn equivale a S: Suficiente\n",162);
	} else if (nota>=7&&nota<8.9) {
	printf("La calificaci%cn equivale a B: Bien",162);
	} else if (nota>=9&&nota<=10){
	printf("La calificaci%cn equivale a E:Excelente\n",162);
	}
	else if (nota>10) {printf("La calificaci%cn insertada no es v%clida.\n",162,160);
	main ();
	nota=0;
	}
	return 0;
}
