//O. Omar Mejia Tinajero. Grupo 9291. **Aumento/decremento de n�meros**
#include <stdio.h>
#include <stdlib.h>

using namespace std; 
int N,opc;                            //Declaraci�n de variables
int Ins_Num(); int Add_One(); int Res_One();   //Prototipos de funciones

int Add_One(int* a){                                           //Valor por defecto: 10
 	if (*a==NULL){N=10; printf("El n%cmero por defecto es: %i\n",163,N); 
 	};                    //Declaraci�n de la funci�n para sumar un n�mero al n�mero ingresado
N++;
printf("Se suma 1 = %i\n************\n", N); return 0; //Imprime el valor nuevo, y va a principal.
}

int Res_One(int* a){                 
	if (*a==NULL){N=10;	printf("El n%cmero por defecto es: %i\n",163,N); //Valor por defecto: 10.
	};                  //Declaraci�n de la funci�n para restar un n�mero al n�mero ingresado.
N--; 
printf("Se resta 1 = %i\n************\n", N); return 0; //Imprime el valor nuevo, y va a principal.
}

int Ins_Num () {                 //Declaraci�n de la funci�n para insertar un n�mero.
	printf("Ingresar un n%cmero distinto de 0\n",163);scanf("%i",&N);
	}
	
int main (){
	printf("Men%c\n1 - Ingresar un n%cmero\n",163,163);
	printf("2 - Aumentar un n%cmero\n3 - Disminuir un n%cmero\n4 - Salir\n",163,163);
	scanf("%i",&opc);        //Sentencias para mostrar el men� principal y solicitar una opci�n.
switch (opc) {                           //Condicional switch para seleccionar una opci�n.
	case 1: Ins_Num(); printf("Seleccione otra opci%cn para cambiar el n%cmero.\n",162,163); main();
		break;
	case 2:Add_One (&N); main();
		break;
	case 3:Res_One (&N); main();
		break;
	case 4: return 0;                   //�nica condici�n de salida.
		break;
	default: "...";system ("CLS");main ();
		break;						//Se coloca un break para evitar repeticiones de selecciones.
			}
}

