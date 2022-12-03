//O. Omar Mejia Tinajero. Grupo 9291. mayo de 2022 **Transferencia de enteros**
#include <stdio.h>
#include <conio.h>
using namespace std;
//Función principal que muestra un valor Z.
int main (){
int Z  = 333;
printf("El valor inicial del entero Z es = {%i}\n",Z);
getch();
int* pZ = &Z;
*pZ = 666;   //Cambio de valor por apuntador hacia Z.
printf("\nEl valor de Z despu%cs del tratamiento con apuntadores es = {%i}",130,Z);
return 0;       //Devuelve el valor de transferido por el puntero.
}

