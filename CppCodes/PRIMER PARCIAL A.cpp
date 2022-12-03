/*PRIMER EXAMEN PARCIAL VERSION A. O. OMAR MEJIA TINAJERO. MARZO DE 2022.*/
#include <stdio.h>                /*librer�a para entrada y salida de datos*/
#include <iostream>               /*librer�a para entrada y salida de datos*/
#include <stdlib.h>               /*librer�a est�ndar de C: permite los comandos system*/



using namespace std;
char yes;                  //Variable global para el control de repetici�n de operaciones//
int opcion;                //Variable global para la interacci�n con el men�//

void menuprinc(){    //funci�n que despliega el men� principal//
	printf("CALCULADORA\n-------------\nIngrese un n%cmero para acceder a una opci%cn del men%c\n",163,162,163);
    printf("1-Sumar\n2-Restar\n3-Multiplicar\n4-Dividir\n5-Salir\n");
}

void sumar () {      /*funci�n que integra la suma y la petici�n de seleccionar repetici�n de la suma*/
	 float sumando1; float sumando2; 
	        printf("Opci%cn 1 - Sumar \n",162); printf("Inserte dos n%cmeros\n",163);
            printf("Inserte el primer sumando\n"); scanf("%f",&sumando1);   // entradas de datos
			printf("Inserte el segundo sumando\n"); scanf("%f",&sumando2);
			float suma = sumando1+sumando2;                                 //operando
			printf("La suma de %f ",sumando1); printf(" y %f",sumando2); printf("es igual a %f\n",suma); //salida de datos
			printf("%cDesea realizar otra suma%c Y / N\t ()Presione Y o y para s%c presione N o n para no)\n",168,63,161);
			cin>>yes;
			if (yes=='Y'||yes=='y'){
				sumar (); } else if (yes=='N'||yes=='n'){system("CLS");           //condici�n de retorno o repetici�n
				}
			}
		
                     /* LAS FUNCIONES SUBSECUENTES TIENEN LA MISMA ESTRUCTURA DE sumar(); */
void restar () {  /*funci�n que integra la resta y la petici�n de seleccionar repetici�n de la suma*/
	float minuendo; float sustraendo; 
	printf("Opci%cn 2 - Restar \n",162); printf("Inserte dos n%cmeros\n",163);
            printf("Inserte el minuendo\n"); scanf("%f",&minuendo);
			printf("Inserte el sustraendo\n"); scanf("%f",&sustraendo);
			float resta = minuendo-sustraendo;
			printf("La diferencia de %f ",minuendo); printf(" y %f",sustraendo); printf("es igual a %f\n",resta);
			printf("%cDesea realizar otra resta%c Y / N\t (Presione Y o y para s%c presione N o n para no)\n",168,63,161);
			cin>>yes;
			if (yes=='Y'||yes=='y'){
				restar (); }else if (yes=='N'||yes=='n'){system("CLS");
				}
			}
	
void producto () { /*funci�n que integra la multiplicaci�n y la petici�n de seleccionar repetici�n de la suma*/
float factor1; float factor2;
printf("Opci%cn 3 -Multiplicaci%cn \n",162,162); printf("Inserte dos n%cmeros\n",163);
            printf("Inserte el primer factor\n"); scanf("%f",&factor1);
			printf("Inserte el segundo factor\n"); scanf("%f",&factor2);
			float multip = factor1*factor2;
			printf("El producto de %f ",factor1); printf(" y %f",factor2); printf("es igual a %f\n",multip);
printf("%cDesea realizar otra multiplicaci%cn%c Y / N\t (Presione Y o y para s%c presione N o n para no)\n",168,162,63,161);
			cin>>yes;
			if (yes=='Y'||yes=='y'){
				producto (); } else if (yes=='N'||yes=='n'){system("CLS");
				}
			}

void cocient () {   /*funci�n que integra la divisi�n y la petici�n de seleccionar repetici�n de la suma*/
float dividendo; float divisor;
printf("Opci%cn 4 - Divisi%cn \n",162,162); printf("Inserte dos n%cmeros\n",163);
            printf("Inserte el dividendo\n"); scanf("%f",&dividendo);
			printf("Inserte el divisor\n"); scanf("%f",&divisor);
			float cociente = dividendo/divisor;
			printf("El cociente de %f ",dividendo); printf(" y %f",divisor); printf("es igual a %f\n",cociente);
			printf("%cDesea realizar otra divisi%cn%c Y / N\t (Presione Y o y para s%c presione N o n para no)\n",168,162,63,161);
			cin>>yes;
			if (yes=='Y'||yes=='y'){
			cocient (); } else if (yes=='N'||yes=='n'){system("CLS");
				}
			}



int main () {      //Funci�n principal: 
   reinicio:
    menuprinc();     //invoca la funci�n del men� principal
    cin>>opcion;      //solicita una opci�n
 	if (opcion>=6||opcion==0){
	printf("Error, inserte otro n%cmero\n\n",163); // C�digo de error si se inserta 0 o opci�n mayor o igual a 6
    goto reinicio;}                                      //y regresa a la funci�n del men�
    switch (opcion){                               // Condicional m�ltiple: seg�n el valor de la opci�n insertada
    case 1: sumar();                              // se despliegan las funciones de operaci�n
    break;
	case 2: restar();
	break;
	case 3: producto();
	break;
	case 4: cocient ();
	break;
	case 5: cout<<"Gracias por usar la calculadora\n";return 0;  //Termina el programa
	}
    goto reinicio;                                        //Regresa a la primer sentencia de la funci�n principal
	}
	
