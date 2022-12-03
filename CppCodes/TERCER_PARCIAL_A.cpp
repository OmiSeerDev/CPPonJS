//O. Omar Mejia Tinajero. Grupo 9291. Introducci�n a la programaci�n.

#include <stdio.h>                  //Librer�a de entrada y salida.
#include <stdlib.h> 				//Librer�a que permite las funciones system.
int moda,i,j,cont1,cont2;          //Variables globales

main (){
	printf("Contador del valor m%cs com%cn en un arreglo (moda) \nInserte un n%cmero del 0 al 100.\n",160,163,163);
                                               //T�tulo e instrucciones.
	int cif [10];                              //Declaraci�n del arreglo.
	for (i=0; i<10; i++){                                             
		if (cif[i-1]<0||cif[i-1]>100){                 //Condicional que impide que los valores est�n fuera del rango.
			printf("Error. El n%cmero est%c fuera de rango\n",163,160);
			system ("pause");              //Pausa del sistema, el sistema reinicia la funci�n principal.
			system("CLS"); 
			main();
		}
		printf("Valor [%i]:", i+1);        //Pide e imprime cada valor asignado por el usuario.
		scanf("%i",&cif[i]);	
	}
	
	cont1=0;                               //Inicia el contador 1 en 0
	for(i=0; i<10; i++){                   //Primer ciclo de b�squeda dimensi�n i.
		cont2=0;						  //Inicia el contador 2 en 0.
		for (j=0; j<10; j++){                //Segunda b�squeda anidada en la primera dimensi�n j.
			if (cif[i]==cif[j]) cont2++; //Compara la igualdad de elementos de cada b�squeda, aumenta 1 al contador.
		}
	if (cont2>cont1) {                      //Condiciona que si el contador2 es mayor que el 1 asigna el valor, igual m�s
		moda = cif[i];										//frecuente a moda. Reinicia el contador 2 a cero.
		cont1=cont2;
	}
	}
	printf("Los caracteres que m%cs se repiten son <<%i>>",160,moda); 
	system("pause"); //Imprime el resultado de la moda.
	return 0; system("PAUSE");
}
